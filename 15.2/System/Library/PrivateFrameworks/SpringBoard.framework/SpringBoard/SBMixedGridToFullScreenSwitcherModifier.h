@class SBSwitcherModifier, SBAppLayout, NSArray, SBRouteToMixedGridSwitcherModifier, SBMixedGridSwitcherModifier;

@interface SBMixedGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBAppLayout *_floatingAppLayout;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    SBSwitcherModifier *_fullscreenModifier;
    SBRouteToMixedGridSwitcherModifier *_routeToMixedGridModifier;
    NSArray *_appLayoutsBeforeTransition;
}

- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (double)blurViewIconScaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (id)appLayoutToScrollToBeforeTransitioning;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 floatingAppLayout:(id)a3 floatingConfiguration:(long long)a4 gridModifier:(id)a5 fullScreenModifier:(id)a6;
- (id)_newMixedGridModifier;
- (id)_appLayoutToScrollTo;
- (id)_firstFloatingAppLayout:(id)a0;
- (void)_performBlockWhileSimulatingPostPresentationScrollViewContentOffset:(id /* block */)a0;
- (BOOL)_isEffectivelyFullScreen;
- (BOOL)_isIndexActive:(unsigned long long)a0;

@end
