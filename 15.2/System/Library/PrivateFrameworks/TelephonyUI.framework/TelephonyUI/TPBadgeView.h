@class UILabel, NSString, NSLayoutConstraint;

@interface TPBadgeView : TPView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) double titleLabelFontSize;
@property (nonatomic) double layerCornerRadius;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *widthAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorLayoutConstraint;
@property (nonatomic) double heightAnchorLayoutConstraintConstantFontMultiplier;
@property (nonatomic) double titleLabelLeadingAnchorLayoutConstraintConstant;
@property (nonatomic) double titleLabelTrailingAnchorLayoutConstraintConstant;
@property (nonatomic) unsigned long long sizeCategory;
@property (nonatomic) unsigned long long theme;
@property (copy, nonatomic) NSString *title;

- (void)commonInit;
- (id)initWithTitle:(id)a0;
- (void)updateConstraintsConstants;
- (void)updateFonts;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutSizeThatFits:(struct CGSize { double x0; double x1; })a0 fixedAxes:(unsigned long long)a1;
- (BOOL)_hasBaseline;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (id)initWithTitle:(id)a0 theme:(unsigned long long)a1;
- (void)updateTheme;
- (void)updateSizeCategory;
- (double)scaledLayoutValueForBaseValue:(double)a0;
- (void)loadConstraints;
- (double)scaledLayoutValueForBaseValue:(double)a0 shouldLowerBound:(BOOL)a1;
- (void)updateActiveHorizontalConstraints;
- (void)unloadConstraints;

@end
