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

- (id)initWithTitle:(id)a0;
- (void)updateConstraintsConstants;
- (void)updateSizeCategory;
- (void).cxx_destruct;
- (void)updateFonts;
- (void)commonInit;
- (void)updateTheme;
- (BOOL)_hasBaseline;
- (double)scaledLayoutValueForBaseValue:(double)a0 shouldLowerBound:(BOOL)a1;
- (id)firstBaselineAnchor;
- (double)scaledLayoutValueForBaseValue:(double)a0;
- (void)unloadConstraints;
- (id)lastBaselineAnchor;
- (void)updateActiveHorizontalConstraints;
- (void)loadConstraints;
- (id)initWithTitle:(id)a0 theme:(unsigned long long)a1;

@end
