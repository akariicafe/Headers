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

- (BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (id)appLayoutToScrollToBeforeTransitioning;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionDidEnd;
- (id)topMostLayoutElements;
- (double)blurViewIconScaleForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (BOOL)_isIndexActive:(unsigned long long)a0;
- (id)_appLayoutToScrollTo;
- (id)_firstFloatingAppLayout:(id)a0;
- (BOOL)_isEffectivelyFullScreen;
- (id)_newMixedGridModifier;
- (void)_performBlockWhileSimulatingPostPresentationScrollViewContentOffset:(id /* block */)a0;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 floatingAppLayout:(id)a3 floatingConfiguration:(long long)a4 gridModifier:(id)a5 fullScreenModifier:(id)a6;

@end
