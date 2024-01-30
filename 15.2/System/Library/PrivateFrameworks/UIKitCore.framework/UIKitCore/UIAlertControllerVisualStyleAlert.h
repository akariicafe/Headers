@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle

- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (id)textFieldContainingViewWithTextField:(id)a0 position:(long long)a1;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)maximumWidth;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (id)titleLabelFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (double)textFieldHorizontalMargin;
- (id)messageLabelFont;
- (id)titleLabelColor;
- (double)_marginAroundActionGroup;
- (id)messageLabelColor;
- (BOOL)placementAvoidsKeyboard;
- (long long)permittedActionLayoutDirection;

@end
