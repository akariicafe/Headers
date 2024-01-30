@class SBCoplanarSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeCenterZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    double _offsetYPercentOfScreenHeight;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (id)_opacitySettings;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 offsetYPercentOfScreenHeight:(double)a2;
- (BOOL)_isIndexCenterZoomAppLayout:(unsigned long long)a0;

@end
