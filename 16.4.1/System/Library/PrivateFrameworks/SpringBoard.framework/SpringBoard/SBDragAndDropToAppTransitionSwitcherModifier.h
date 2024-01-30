@interface SBDragAndDropToAppTransitionSwitcherModifier : SBTransitionSwitcherModifier

- (id)keyboardSuppressionMode;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)animationAttributesForLayoutElement:(id)a0;

@end
