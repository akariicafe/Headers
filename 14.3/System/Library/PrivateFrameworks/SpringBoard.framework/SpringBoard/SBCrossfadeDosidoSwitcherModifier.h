@class SBHomeScreenSwitcherModifier, SBAppLayout;

@interface SBCrossfadeDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
    SBAppLayout *_fromAppLayout;
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
- (double)homeScreenBackdropBlurProgress;
- (void).cxx_destruct;
- (unsigned long long)transactionCompletionOptions;
- (id)transitionWillBegin;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)homeScreenScale;
- (double)homeScreenDimmingAlpha;
- (double)wallpaperScale;
- (double)homeScreenAlpha;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (id)_opacitySettings;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;
- (BOOL)_isFromAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_shouldEnsureHomeScreenVisible;

@end
