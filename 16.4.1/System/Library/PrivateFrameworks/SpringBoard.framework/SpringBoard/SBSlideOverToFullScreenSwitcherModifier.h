@class SBHomeScreenZoomSwitcherModifier, SBAppLayout;

@interface SBSlideOverToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromSlideOverAppLayout;
    SBAppLayout *_toFullScreenAppLayout;
    SBAppLayout *_removedMainAppLayout;
    SBHomeScreenZoomSwitcherModifier *_homeScreenZoomModifier;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (id)visibleHomeAffordanceLayoutElements;
- (id)transitionWillBegin;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)wantsSlideOverTongue;
- (long long)wallpaperStyle;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)a0 fromAppLayouts:(id)a1;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 slideOverAppLayout:(id)a1 fullScreenAppLayout:(id)a2 replacingMainAppLayout:(id)a3;

@end
