@class SBAppLayout;

@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    long long _floatingConfiguration;
    unsigned long long _direction;
    BOOL _hasReshuffledZOrder;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)handleTimerEvent:(id)a0;
- (id)visibleAppLayouts;
- (id)_layoutSettings;
- (void).cxx_destruct;
- (id)transitionWillUpdate;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 floatingConfiguration:(long long)a3 direction:(unsigned long long)a4 needsOvershoot:(BOOL)a5;

@end
