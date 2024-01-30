@interface SBHomeScreenZoomSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
}

- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (double)homeScreenBackdropBlurProgress;
- (double)homeScreenAlpha;
- (double)wallpaperScale;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (long long)wallpaperStyle;
- (BOOL)_isEffectivelyHome;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1;

@end
