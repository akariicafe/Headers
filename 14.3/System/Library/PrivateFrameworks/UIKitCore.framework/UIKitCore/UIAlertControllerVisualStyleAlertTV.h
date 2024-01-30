@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert

- (double)maximumWidth;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)_detailMessageFont;
- (double)_maximumContentWidth;
- (long long)_effectStyle;
- (id)_keyCommandInputForCancelAction;
- (double)marginBelowTitleLabelLastBaseline;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (double)actionWidthForMinimumActionWidth:(double)a0;
- (id)messageLabelColor;
- (double)textFieldHorizontalMargin;
- (double)maximumWidthForTitleAndMessageContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textFieldContentInset;
- (BOOL)placementAvoidsKeyboard;
- (id)titleLabelFont;
- (long long)maximumNumberOfLinesInTitleLabel;
- (id)titleLabelColor;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)_marginAboveDetailMessageFirstBaseline;
- (double)_minimumButtonWidth;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (id)messageLabelFont;
- (id)dimmingViewForAlertController:(id)a0;
- (double)marginBelowLastLabelLastBaseline;
- (id)textFieldContainingViewWithTextField:(id)a0 position:(long long)a1;
- (long long)permittedActionLayoutDirection;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;
- (double)marginBelowMessageLabelLastBaseline;
- (id)preferredActionForActions:(id)a0 suggestedPreferredAction:(id)a1;
- (long long)maximumNumberOfLinesInMessageLabel;

@end
