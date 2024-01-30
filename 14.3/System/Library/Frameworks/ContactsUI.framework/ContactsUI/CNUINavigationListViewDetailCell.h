@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell

@property (nonatomic) long long contentAlignment;

+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)a0;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)a0;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)a0;
+ (struct CGSize { double x0; double x1; })desiredContentSizeForTitle:(id)a0 subTitle:(id)a1 navigationListStyle:(id)a2;
+ (id)reuseIdentifier;

- (void)updateConstraints;
- (void)applyStyle;
- (double)minimumContentHeight;
- (double)contentViewBottomAnchorConstraintConstant;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (void)setupAccessoryImageViewInView:(id)a0;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (void)loadContentViewConstraints;

@end
