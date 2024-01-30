@class SBFullScreenAppLayoutSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeSlideOverSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    unsigned long long _direction;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenModifier;
}

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
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (BOOL)_isIndexSlideOverAppLayout:(unsigned long long)a0;
- (BOOL)_shouldApplySlideOverLayoutToIndex:(unsigned long long)a0;

@end
