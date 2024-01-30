@class UIView, NSString, NSArray, _UIAirDropProgressView, NSUUID, UIImageView, UIAirDropNode, UIImage, UIVisualEffectView, UILabel, UIColor;

@interface UIAirDropGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) UIVisualEffectView *vibrantTitleView;
@property (retain, nonatomic) UIVisualEffectView *vibrantSubtitleView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageSlotView;
@property (retain, nonatomic) UIImageView *transportImageView;
@property (retain, nonatomic) UIView *transportSlotView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *textSlotView;
@property (retain, nonatomic) UIView *titleSlotView;
@property (retain, nonatomic) UIView *subtitleSlotView;
@property (retain, nonatomic) NSArray *subtitleLabelVisibleConstraintsArray;
@property (retain, nonatomic) _UIAirDropProgressView *circleProgressView;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (readonly, nonatomic) double circleWidth;
@property (nonatomic) BOOL isPulsing;
@property (retain, nonatomic) NSString *formattedDisplayName;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) UIAirDropNode *node;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned int textSlotID;
@property (nonatomic) unsigned int subtitleSlotID;
@property (retain, nonatomic) UIColor *subtitleTextColor;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned int imageSlotID;
@property (retain, nonatomic) UIImage *transportImage;
@property (nonatomic) unsigned int transportSlotID;
@property (nonatomic) BOOL isGroup;
@property (nonatomic) BOOL stateBeingRestored;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isSquareImage) BOOL squareImage;
@property (nonatomic) double progress;

- (void)_invalidateSubtitle;
- (void)setSelected:(BOOL)a0;
- (void)_updateConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateTitleView;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateImageView;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (void)_updateTextView;
- (id)_createLabelForSingleLine:(BOOL)a0;
- (void)_didCompleteAirDropProgress:(double)a0 animated:(BOOL)a1;
- (void)_invalidateDisplayName;
- (id)_placeholderStringForSingleLine:(BOOL)a0;
- (void)_updateDarkening;
- (void)_updateFormattedDisplayName;
- (void)_updateProgress:(double)a0 animated:(BOOL)a1;
- (void)_updateSubtitleView;
- (void)_updateTransportView;
- (id)createTargetedPreview;
- (void)setTransportSlotHidden:(BOOL)a0 animated:(BOOL)a1 useDelay:(BOOL)a2;
- (void)startPulsing;
- (void)stopPulsing;

@end
