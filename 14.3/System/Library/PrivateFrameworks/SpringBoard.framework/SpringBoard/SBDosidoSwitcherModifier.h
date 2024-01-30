@class SBAppLayout;

@interface SBDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    unsigned long long _direction;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (double)opacityForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (id)transitionWillUpdate;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 direction:(unsigned long long)a3;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;

@end
