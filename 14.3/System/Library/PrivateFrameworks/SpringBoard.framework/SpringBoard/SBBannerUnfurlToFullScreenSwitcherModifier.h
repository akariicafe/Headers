@class SBFullScreenAppLayoutSwitcherModifier, SBBannerUnfurlSourceContext, SBAppLayout;

@interface SBBannerUnfurlToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBBannerUnfurlSourceContext *_bannerUnfurlSourceContext;
    SBAppLayout *_fromAppLayout;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenModifier;
    SBAppLayout *_toAppLayout;
    BOOL _isScalingDown;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)wallpaperStyle;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (long long)transitionLiveContentRasterizationStyle;
- (BOOL)_isAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 bannerUnfurlSourceContext:(id)a3;
- (long long)backdropBlurType;

@end
