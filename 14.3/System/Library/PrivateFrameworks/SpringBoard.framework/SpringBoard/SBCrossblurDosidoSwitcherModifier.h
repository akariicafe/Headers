@class SBAppLayout;

@interface SBCrossblurDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    unsigned long long _direction;
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
- (id)transitionWillUpdate;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 direction:(unsigned long long)a3;
- (id)transitionWillBegin;
- (id)transitionDidEnd;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (id)_opacitySettings;
- (BOOL)_isFromAppLayoutAtIndex:(unsigned long long)a0;

@end
