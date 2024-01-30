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

- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (double)_cornerRadius;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)_topPadding;
- (void)setupSubviews;
- (void)setUpConstraints;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)_updateForIntendedPlacement;
- (void)setSeparatorDashStyle:(long long)a0 hidden:(BOOL)a1;

@end
