@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert

- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (id)preferredActionForActions:(id)a0 suggestedPreferredAction:(id)a1;
- (id)textFieldContainingViewWithTextField:(id)a0 position:(long long)a1;
- (double)maximumWidthForTitleAndMessageContentView;
- (double)marginAboveMessageLabelFirstBaseline;
- (long long)_effectStyle;
- (double)_marginAboveDetailMessageFirstBaseline;
- (double)maximumWidth;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)actionWidthForMinimumActionWidth:(double)a0;
- (double)marginAboveTitleLabelFirstBaseline;
- (long long)maximumNumberOfLinesInMessageLabel;
- (double)marginBelowMessageLabelLastBaseline;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;
- (id)_keyCommandInputForCancelAction;
- (id)titleLabelFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (id)dimmingViewForAlertController:(id)a0;
- (double)textFieldHorizontalMargin;
- (id)messageLabelFont;
- (id)titleLabelColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textFieldContentInset;
- (double)_maximumContentWidth;
- (id)messageLabelColor;
- (id)_detailMessageFont;
- (BOOL)placementAvoidsKeyboard;
- (double)_minimumButtonWidth;
- (long long)permittedActionLayoutDirection;

@end
