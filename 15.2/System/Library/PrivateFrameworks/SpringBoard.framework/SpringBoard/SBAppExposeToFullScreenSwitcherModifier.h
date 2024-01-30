@class NSString, SBAppLayout, SBSwitcherModifier, SBAppExposeGridSwitcherModifier, SBRouteToAppExposeSwitcherModifier, NSArray;

@interface SBAppExposeToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBAppLayout *_floatingAppLayout;
    NSString *_bundleIdentifier;
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    SBSwitcherModifier *_fullscreenModifier;
    SBRouteToAppExposeSwitcherModifier *_routeToAppExposeModifier;
    BOOL _isSimulatingPreTransitionState;
    NSArray *_appLayoutsBeforeTransition;
}

- (id)appLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)plusButtonAlpha;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 floatingAppLayout:(id)a3 bundleIdentifier:(id)a4 appExposeModifier:(id)a5 fullScreenModifier:(id)a6;
- (BOOL)_isEffectivelyFullScreen;
- (BOOL)_isIndexActive:(unsigned long long)a0;
- (id)_newAppExposeModifier;
- (void)_performBlockBySimulatingPreTransitionState:(id /* block */)a0;

@end
