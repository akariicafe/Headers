@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle

+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)a0 alertContentView:(id)a1 availableSpaceView:(id)a2 visualStyle:(id)a3 updatableConstraints:(id)a4;

- (double)maximumWidth;
- (id)titleLabelColor;
- (double)_spacingBetweenDismissButtonAndContent;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (id)vibrancyEffectForTitleAndMessageLabel;

@end
