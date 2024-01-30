@class UIAirDropNode, NSArray, UIVisualEffectView, _UIAirDropProgressView, UILabel, UIView;

@interface UIAirDropGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) UIVisualEffectView *vibrantTitleView;
@property (retain, nonatomic) UIVisualEffectView *vibrantSubtitleView;
@property (retain, nonatomic) UIView *titleSlotView;
@property (retain, nonatomic) UIView *subtitleSlotView;
@property (retain, nonatomic) UIView *displayNameSlotView;
@property (retain, nonatomic) UIView *imageSlotView;
@property (retain, nonatomic) UIView *transportSlotView;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray;
@property (retain, nonatomic) UILabel *labelForPositioning;
@property (retain, nonatomic) _UIAirDropProgressView *circleProgressView;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIAirDropNode *node;
@property (nonatomic) double progress;
@property (nonatomic) BOOL stateBeingRestored;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)setupConstraintsYukon;
- (void)_updateForCurrentSizeCategory;
- (void)updateDarkening;
- (void)setTransportSlotHidden:(BOOL)a0 animated:(BOOL)a1 useDelay:(BOOL)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;

@end
