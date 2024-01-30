@class SBHomeScreenSwitcherModifier, SBAppLayout;

@interface SBCrossfadeDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

@property (nonatomic, getter=isFullScreenTransition) BOOL fullScreenTransition;

- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (unsigned long long)transactionCompletionOptions;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)homeScreenDimmingAlpha;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)wallpaperScale;
- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenBackdropBlurProgress;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (id)_opacitySettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (BOOL)_isFromAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_isToOrFromAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_shouldEnsureHomeScreenVisible;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
