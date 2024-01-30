@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSArray *_activeAppLayouts;
    SBSwitcherModifier *_gridModifier;
    BOOL _wantsMinificationFilter;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isSwitcherWindowVisible;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (long long)wallpaperStyle;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)wallpaperScale;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (double)homeScreenBackdropBlurProgress;
- (id)handleTransitionEvent:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (BOOL)_isIndexActive:(unsigned long long)a0;
- (BOOL)_isEffectivelyFullScreen;
- (double)_unselectedCardScale;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 activeAppLayouts:(id)a2 gridModifier:(id)a3;

@end
