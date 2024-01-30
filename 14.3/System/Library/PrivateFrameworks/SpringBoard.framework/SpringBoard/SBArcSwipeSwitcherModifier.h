@class SBAppLayout;

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
