@class SBAppLayout;

@interface SBFullScreenToSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_existingAppLayout;
    SBAppLayout *_incomingAppLayout;
}

- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
