@class SBAppLayout;

@interface SBSpotlightCrossblurToFullscreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
}

- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)homeScreenScale;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)homeScreenBackdropBlurProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (id)_opacitySettings;
- (id)initWithTransitionID:(id)a0 toAppLayout:(id)a1;

@end
