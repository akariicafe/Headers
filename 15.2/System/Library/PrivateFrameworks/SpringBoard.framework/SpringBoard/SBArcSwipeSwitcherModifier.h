@class SBAppLayout;

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
