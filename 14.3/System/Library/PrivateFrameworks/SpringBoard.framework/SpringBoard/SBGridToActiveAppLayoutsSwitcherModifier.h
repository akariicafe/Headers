@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSArray *_activeAppLayouts;
    SBSwitcherModifier *_gridModifier;
    BOOL _wantsMinificationFilter;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (id)handleMainTransitionEvent:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (double)homeScreenBackdropBlurProgress;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)homeScreenScale;
- (double)darkeningAlphaForIndex:(unsigned long long)a0;
- (double)wallpaperScale;
- (double)homeScreenAlpha;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (double)_unselectedCardScale;
- (BOOL)_isEffectivelyFullScreen;
- (BOOL)_isIndexActive:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 activeAppLayouts:(id)a2 gridModifier:(id)a3;

@end
