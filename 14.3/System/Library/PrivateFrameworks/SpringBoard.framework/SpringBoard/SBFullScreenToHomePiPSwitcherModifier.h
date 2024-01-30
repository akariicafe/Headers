@class SBCoplanarSwitcherModifier, SBFullScreenToHomeIconZoomSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomePiPSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    struct CGPoint { double x; double y; } _finalCenter;
    double _finalScale;
    double _sourceAlpha;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
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
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)completesWhenChildrenComplete;
- (id)initWithTransitionID:(id)a0 zoomModifier:(id)a1 appLayout:(id)a2;
- (BOOL)_shouldApplyMorphToPipToIndex:(unsigned long long)a0;
- (BOOL)_isIndexSelectedAppLayout:(unsigned long long)a0;

@end
