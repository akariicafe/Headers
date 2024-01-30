@interface SBHomeToDeckSwitcherModifier : SBHomeToSwitcherSwitcherModifier

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (id)_layoutSettings;
- (double)shadowOpacityForIndex:(unsigned long long)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)darkeningAlphaForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (id)appLayoutToScrollToDuringTransition;
- (id)_opacitySettings;

@end
