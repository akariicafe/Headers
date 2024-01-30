@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long _fromFloatingConfiguration;
    long long _toFloatingConfiguration;
}

- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_layoutSettings;
- (id)initWithTransitionID:(id)a0 fromFloatingConfiguration:(long long)a1 toFloatingConfiguration:(long long)a2;

@end
