@class SBAppLayout;

@interface SBSpotlightCrossblurToFullscreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (double)homeScreenBackdropBlurProgress;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (id)_opacitySettings;
- (id)initWithTransitionID:(id)a0 toAppLayout:(id)a1;

@end
