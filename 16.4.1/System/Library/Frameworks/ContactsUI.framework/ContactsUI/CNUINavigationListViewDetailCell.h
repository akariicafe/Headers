@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell

@property (nonatomic) long long contentAlignment;

+ (id)reuseIdentifier;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)a0;
+ (struct CGSize { double x0; double x1; })desiredContentSizeForTitle:(id)a0 subTitle:(id)a1 navigationListStyle:(id)a2;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)a0;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)a0;

- (void)applyStyle;
- (void)updateConstraints;
- (double)contentViewBottomAnchorConstraintConstant;
- (void)loadContentViewConstraints;
- (double)minimumContentHeight;
- (void)setupAccessoryImageViewInView:(id)a0;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;

@end
