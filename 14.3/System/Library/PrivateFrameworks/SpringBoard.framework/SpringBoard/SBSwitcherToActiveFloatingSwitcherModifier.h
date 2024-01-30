@class SBSwitcherModifier, SBAppLayout;

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_floatingDeckModifier;
}

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (BOOL)wantsSwitcherDimmingView;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (BOOL)wantsSwitcherBackdropBlur;
- (long long)switcherBackdropBlurType;
- (long long)transitionLiveContentRasterizationStyle;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 floatingDeckModifier:(id)a3;

@end
