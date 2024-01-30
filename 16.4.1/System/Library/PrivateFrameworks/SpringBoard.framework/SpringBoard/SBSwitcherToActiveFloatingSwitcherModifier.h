@class SBSwitcherModifier, SBAppLayout;

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_floatingDeckModifier;
}

- (id)transitionWillBegin;
- (BOOL)wantsSwitcherDimmingView;
- (long long)switcherBackdropBlurType;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)appLayoutToScrollToBeforeTransitioning;
- (BOOL)wantsSwitcherBackdropBlur;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (id)_layoutSettings;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 floatingDeckModifier:(id)a3;

@end
