@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert

- (double)maximumWidth;
- (id)_keyCommandInputForCancelAction;
- (id)titleLabelColor;
- (id)_detailMessageFont;
- (long long)_effectStyle;
- (double)_marginAboveDetailMessageFirstBaseline;
- (double)_maximumContentWidth;
- (double)_minimumButtonWidth;
- (double)actionWidthForMinimumActionWidth:(double)a0;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (id)dimmingViewForAlertController:(id)a0;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (long long)maximumNumberOfLinesInMessageLabel;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)maximumWidthForTitleAndMessageContentView;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (id)preferredActionForActions:(id)a0 suggestedPreferredAction:(id)a1;
- (id)textFieldContainingViewWithTextField:(id)a0 position:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textFieldContentInset;
- (double)textFieldHorizontalMargin;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;

@end
