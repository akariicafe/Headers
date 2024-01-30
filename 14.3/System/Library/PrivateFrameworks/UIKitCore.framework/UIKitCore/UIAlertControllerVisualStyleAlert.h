@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle

- (double)maximumWidth;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (id)messageLabelColor;
- (double)textFieldHorizontalMargin;
- (BOOL)placementAvoidsKeyboard;
- (id)titleLabelFont;
- (id)titleLabelColor;
- (double)marginAboveMessageLabelFirstBaseline;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (id)messageLabelFont;
- (double)marginBelowLastLabelLastBaseline;
- (double)_marginAroundActionGroup;
- (id)textFieldContainingViewWithTextField:(id)a0 position:(long long)a1;
- (long long)permittedActionLayoutDirection;
- (double)marginBelowMessageLabelLastBaseline;

@end
