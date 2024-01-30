@interface SBHomeScreenZoomSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
}

- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)homeScreenDimmingAlpha;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)wallpaperScale;
- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenBackdropBlurProgress;
- (BOOL)_isEffectivelyHome;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1;

@end
