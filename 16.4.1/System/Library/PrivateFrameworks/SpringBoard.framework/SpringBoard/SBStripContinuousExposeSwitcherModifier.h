@class NSString, NSMutableSet, SBSwitcherLayoutCalculationsCache;

@interface SBStripContinuousExposeSwitcherModifier : SBSwitcherModifier <SBSwitcherLayoutCalculationsCacheDelegate> {
    BOOL _requireStripContentsInViewHierarchy;
    SBSwitcherLayoutCalculationsCache *_stripLayoutCache;
    unsigned long long _modifierEventGenCount;
    double _cached_appStripOriginX;
    double _cached_appStripUnocclusionProgress;
}

@property (retain, nonatomic) NSMutableSet *highlightedByTouchAppLayouts;
@property (retain, nonatomic) NSMutableSet *highlightedByHoverAppLayouts;
@property (nonatomic, getter=isContinuousExposeConfigurationChangeTransition) BOOL continuousExposeConfigurationChangeTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)scaleForIndex:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (BOOL)isHomeAffordanceSupportedForAppLayout:(id)a0;
- (id)handleEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (id)inactiveAppLayoutsReachableByKeyboardShortcut;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (struct SBSwitcherGradientWallpaperAttributes { double x0; double x1; })wallpaperGradientAttributesForIndex:(unsigned long long)a0;
- (double)adjustedSpaceAccessoryViewScale:(double)a0 forAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isAppLayoutEffectivelyOnStage:(id)a0;
- (double)_appStripOriginX;
- (id)_currentLayoutCalculationsValidityToken;
- (double)_highlightScaleForAppLayout:(id)a0;
- (unsigned long long)_indexInContinuousExposeIdentifierPileForAppLayout:(id)a0;
- (void)_invalidateAppStripOriginX;
- (BOOL)_isGroupForAppLayoutHighlightedFromHover:(id)a0;
- (BOOL)_isGroupForAppLayoutHighlightedFromTouch:(id)a0;
- (id)_orderedVisibleAppLayoutsIgnoringProgress:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })_positionForPositionIn3DContainerSpace:(struct CGPoint { double x0; double x1; })a0 layerPosition:(struct CGPoint { double x0; double x1; })a1 layerSize:(struct CGSize { double x0; double x1; })a2 layerAnchorPoint:(struct CGPoint { double x0; double x1; })a3 layerTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a4 containerPerspective:(double)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stripFrame;
- (double)_wallpaperDimmingForIndex:(unsigned long long)a0;
- (id)buildLayoutCalculationsForCache:(id)a0;
- (id)handleHighlightEvent:(id)a0;

@end
