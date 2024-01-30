@class UIStackView, HKUIMetricColors, UILabel, HKDisplayTypeContextItem, NSLayoutConstraint;

@interface HKDisplayTypeContextVerticalCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) HKDisplayTypeContextItem *contextItem;
@property (nonatomic) long long mode;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) HKUIMetricColors *currentMetricColors;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *maxTitleWidthConstraint;

+ (id)reuseIdentifier;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)_titleFont;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_labelWithFont:(id)a0 allowsMultiline:(BOOL)a1 supportsDyanmicType:(BOOL)a2;
- (id)_valueAndUnitFont;
- (id)_stackViewWithArrangedSubviews:(id)a0;
- (void)_configureForTraitCollection:(id)a0;
- (void)_updateUI:(BOOL)a0;
- (void)_configureForContextItem:(id)a0;
- (id)_backgroundViewWithColor:(id)a0;
- (void)updateWithContextItem:(id)a0 mode:(long long)a1;

@end
