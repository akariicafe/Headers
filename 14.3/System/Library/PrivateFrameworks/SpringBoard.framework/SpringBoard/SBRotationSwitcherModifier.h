@interface SBRotationSwitcherModifier : SBTransitionSwitcherModifier

- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (id)keyboardSuppressionMode;
- (BOOL)shouldPerformRotationAnimationForOrientationChange;

@end
