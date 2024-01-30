@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSArray *_activeAppLayouts;
    SBSwitcherModifier *_gridModifier;
    BOOL _wantsMinificationFilter;
}

- (double)titleOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
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
- (id)handleTransitionEvent:(id)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 activeAppLayouts:(id)a2 gridModifier:(id)a3;
- (BOOL)_isEffectivelyFullScreen;
- (BOOL)_isIndexActive:(unsigned long long)a0;
- (double)_unselectedCardScale;

@end
