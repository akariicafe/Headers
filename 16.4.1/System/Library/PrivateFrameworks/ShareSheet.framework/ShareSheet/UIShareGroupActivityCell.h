@class UIView, NSUUID, NSArray, NSString, UIImage, UIImageView, UIVisualEffectView, _UIHostActivityProxy, UILabel;

@interface UIShareGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) UIVisualEffectView *vibrantLabelView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *labelForPositioning;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIView *imageSlotView;
@property (retain, nonatomic) UIView *titleSlotView;
@property (retain, nonatomic) UIView *badgeSlotView;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (nonatomic) BOOL isPulsing;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy;
@property (nonatomic) unsigned int imageSlotID;
@property (nonatomic) unsigned int titleSlotID;
@property (nonatomic) unsigned int badgeSlotID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isLongPressable) BOOL longPressable;

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
- (id)_createTitleLabel;
- (id)_placeholderString;
- (void)_updateBadgeSlotView;
- (void)_updateDarkening;
- (id)createTargetedPreview;
- (void)startPulsing;
- (void)stopPulsing;

@end
