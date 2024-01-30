@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle

- (double)maximumWidth;
- (id)titleLabelColor;
- (double)_marginAroundActionGroup;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (id)textFieldContainingViewWithTextField:(id)a0 position:(long long)a1;
- (double)textFieldHorizontalMargin;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;

@end
