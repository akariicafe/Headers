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
- (id)visibleAppLayouts;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (id)transitionDidEnd;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)plusButtonAlpha;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 floatingAppLayout:(id)a3 bundleIdentifier:(id)a4 appExposeModifier:(id)a5 fullScreenModifier:(id)a6;
- (id)_newAppExposeModifier;
- (BOOL)_isEffectivelyFullScreen;
- (BOOL)_isIndexActive:(unsigned long long)a0;
- (void)_performBlockBySimulatingPreTransitionState:(id /* block */)a0;

@end
