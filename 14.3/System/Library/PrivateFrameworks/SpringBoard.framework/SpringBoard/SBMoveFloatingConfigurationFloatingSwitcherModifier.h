@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long _fromFloatingConfiguration;
    long long _toFloatingConfiguration;
}

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (id)initWithTransitionID:(id)a0 fromFloatingConfiguration:(long long)a1 toFloatingConfiguration:(long long)a2;

@end
