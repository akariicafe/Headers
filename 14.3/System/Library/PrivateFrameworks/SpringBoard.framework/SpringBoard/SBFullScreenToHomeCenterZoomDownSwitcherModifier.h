@class SBCoplanarSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeCenterZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    double _offsetYPercentOfScreenHeight;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (id)_opacitySettings;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 offsetYPercentOfScreenHeight:(double)a2;
- (BOOL)_isIndexCenterZoomAppLayout:(unsigned long long)a0;
- (double)_offsetYForCenterZoom;

@end
