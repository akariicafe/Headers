@class UIColor, UIView, HKSeparatorLineView, NSLayoutConstraint;

@interface WDMedicalRecordGroupableCell : UITableViewCell

@property (retain, nonatomic) UIColor *pillBackgroundColor;
@property (retain, nonatomic) UIView *pillBackgroundView;
@property (nonatomic) double sectionTopPadding;
@property (retain, nonatomic) HKSeparatorLineView *separatorView;
@property (retain, nonatomic) NSLayoutConstraint *separatorLeadingConstant;
@property (retain, nonatomic) NSLayoutConstraint *separatorTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (nonatomic) BOOL extraTopPadding;
@property (nonatomic) long long intendedPlacement;
@property (retain, nonatomic) UIColor *pillBackgroundColorOverride;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } separatorInsets;

+ (id)defaultReuseIdentifier;
+ (double)defaultGap;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (double)_cornerRadius;
- (double)_topPadding;
- (void)_updateForCurrentSizeCategory;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)setUpConstraints;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;
- (void)setSeparatorDashStyle:(long long)a0 hidden:(BOOL)a1;
- (void)_updateForIntendedPlacement;

@end
