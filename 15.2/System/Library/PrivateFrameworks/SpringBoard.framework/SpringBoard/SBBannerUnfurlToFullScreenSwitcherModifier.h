@class SBFullScreenAppLayoutSwitcherModifier, SBBannerUnfurlSourceContext, SBAppLayout;

@interface SBBannerUnfurlToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBBannerUnfurlSourceContext *_bannerUnfurlSourceContext;
    SBAppLayout *_fromAppLayout;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenModifier;
    SBAppLayout *_toAppLayout;
    BOOL _isScalingDown;
}

- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)transitionWillUpdate;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (BOOL)_isAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 bannerUnfurlSourceContext:(id)a3;
- (long long)backdropBlurType;

@end
