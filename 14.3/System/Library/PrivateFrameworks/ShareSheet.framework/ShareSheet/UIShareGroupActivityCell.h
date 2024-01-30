@class NSArray, UIVisualEffectView, UIImageView, UILabel, UIView, _UIHostActivityProxy;

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
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isLongPressable) BOOL longPressable;

- (void)setupConstraints;
- (void)_updateForCurrentSizeCategory;
- (void)updateDarkening;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
