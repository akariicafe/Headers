@class SBAppLayout;

@interface SBFullScreenToSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_existingAppLayout;
    SBAppLayout *_incomingAppLayout;
    BOOL _blurExistingDisplayItem;
}

- (id)transitionWillBegin;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)homeScreenDimmingAlpha;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (id)visibleAppLayouts;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
