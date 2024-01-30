@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle

+ (void)positionContentsOfAlertController:(id)a0 alertContentView:(id)a1 availableSpaceView:(id)a2 visualStyle:(id)a3 updatableConstraints:(id)a4;
+ (long long)interfaceActionPresentationStyle;

- (double)maximumWidth;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)_spacingBetweenDismissButtonAndContent;
- (double)marginBelowTitleLabelLastBaseline;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (id)vibrancyEffectForTitleAndMessageLabel;
- (id)messageLabelColor;
- (BOOL)placementAvoidsKeyboard;
- (id)titleLabelFont;
- (id)titleLabelColor;
- (double)marginAboveMessageLabelFirstBaseline;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (id)messageLabelFont;
- (double)marginBelowLastLabelLastBaseline;
- (long long)permittedActionLayoutDirection;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;
- (double)marginBelowMessageLabelLastBaseline;

@end
