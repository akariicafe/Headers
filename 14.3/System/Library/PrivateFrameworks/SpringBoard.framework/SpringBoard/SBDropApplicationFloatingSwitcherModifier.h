@class SBAppLayout;

@interface SBDropApplicationFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (id)transitionWillBegin;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
