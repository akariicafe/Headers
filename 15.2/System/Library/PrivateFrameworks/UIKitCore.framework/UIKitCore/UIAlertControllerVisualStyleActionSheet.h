@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle

+ (void)positionContentsOfAlertController:(id)a0 alertContentView:(id)a1 availableSpaceView:(id)a2 visualStyle:(id)a3 updatableConstraints:(id)a4;
+ (long long)interfaceActionPresentationStyle;

- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)_spacingBetweenDismissButtonAndContent;
- (id)vibrancyEffectForTitleAndMessageLabel;
- (double)maximumWidth;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;
- (id)titleLabelFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (id)messageLabelFont;
- (id)titleLabelColor;
- (id)messageLabelColor;
- (BOOL)placementAvoidsKeyboard;
- (long long)permittedActionLayoutDirection;

@end
