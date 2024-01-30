@class SBAppLayout;

@interface SBSplitRemovalSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _layoutRoleToKeep;
    long long _layoutRoleToRemove;
    long long _animationStyle;
    SBAppLayout *_remainingAppLayout;
    SBAppLayout *_removedAppLayout;
    long long _animationPhase;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionWillUpdate;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 layoutRoleToRemove:(long long)a3 animationStyle:(long long)a4;

@end
