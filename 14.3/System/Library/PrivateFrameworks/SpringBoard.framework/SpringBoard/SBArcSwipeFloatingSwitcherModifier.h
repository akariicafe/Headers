@class SBAppLayout;

@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    long long _floatingConfiguration;
    unsigned long long _direction;
    BOOL _hasReshuffledZOrder;
}

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (id)transitionWillUpdate;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (id)handleTimerEvent:(id)a0;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 floatingConfiguration:(long long)a3 direction:(unsigned long long)a4 needsOvershoot:(BOOL)a5;

@end
