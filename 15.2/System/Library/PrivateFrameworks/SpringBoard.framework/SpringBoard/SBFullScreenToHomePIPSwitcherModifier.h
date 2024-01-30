@class SBCoplanarSwitcherModifier, SBFullScreenToHomeIconZoomSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomePIPSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    struct CGPoint { double x; double y; } _finalCenter;
    double _finalScale;
    double _sourceAlpha;
    BOOL _shouldHide;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
}

- (double)rotationAngleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)visibleHomeAffordanceLayoutElements;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingFrameForIndex:(unsigned long long)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (BOOL)clipsToBoundsAtIndex:(unsigned long long)a0;
- (BOOL)completesWhenChildrenComplete;
- (id)initWithTransitionID:(id)a0 zoomModifier:(id)a1 appLayout:(id)a2;
- (id)handleHideMorphToPIPAppLayoutEvent:(id)a0;
- (BOOL)_shouldApplyMorphToPipToIndex:(unsigned long long)a0;
- (BOOL)_isIndexSelectedAppLayout:(unsigned long long)a0;

@end
