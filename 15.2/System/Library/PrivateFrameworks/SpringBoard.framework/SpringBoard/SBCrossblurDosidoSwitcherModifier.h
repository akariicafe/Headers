@class SBAppLayout;

@interface SBCrossblurDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    unsigned long long _direction;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)transitionWillUpdate;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)transitionDidEnd;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 direction:(unsigned long long)a3;
- (id)_opacitySettings;

@end
