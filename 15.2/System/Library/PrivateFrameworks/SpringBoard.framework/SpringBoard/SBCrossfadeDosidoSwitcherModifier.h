@class SBHomeScreenSwitcherModifier, SBAppLayout;

@interface SBCrossfadeDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

- (unsigned long long)transactionCompletionOptions;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)homeScreenBackdropBlurProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (double)wallpaperScale;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (id)_opacitySettings;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;
- (BOOL)_isFromAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_shouldEnsureHomeScreenVisible;

@end
