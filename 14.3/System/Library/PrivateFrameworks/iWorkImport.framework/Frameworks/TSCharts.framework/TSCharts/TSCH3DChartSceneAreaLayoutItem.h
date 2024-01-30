@class TSCH3DScene, TSCH3DChartResizerHelper, TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {
    TSCH3DChartResizerHelper *mResizerHelper;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } mChartBodyLayoutOffsetInChartAreaLayoutSpace;
    BOOL mIsInvalidated;
    struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } mInitialInfoChartScale;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } chartBodyLayoutRect;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } containingViewport;
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector;
@property (readonly, nonatomic) const struct ChartProjectedBoundsSpaces { struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x0; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x1; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x2; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x3; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x4; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x5; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x6; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x7; } *projectedBounds;
@property (readonly, nonatomic) TSCH3DScene *scene;
@property (nonatomic) BOOL isInvariant;

+ (id)worldBoundsDescriptionForScene:(id)a0;

- (void)dealloc;
- (void)clearAll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (id)initWithParent:(id)a0;
- (id).cxx_construct;
- (void)clearScene;
- (void)invalidateBounds;
- (id)boundsLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)a0 boundsIndex:(long long)a1;
- (void)p_validate;
- (id)p_updatedResizerHelper;
- (id)p_updatedResizerHelperForcingAccurateBounds:(BOOL)a0;
- (id)boundsLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scene:(id)a1 forcesAccurateBounds:(BOOL)a2 allowsEmptyBodyLayoutBounds:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_frameForSelectionPath:(id)a0 sceneObjectClass:(Class)a1;
- (void)p_updateBodyLayoutRect;
- (void)p_updateLayoutSize:(struct CGSize { double x0; double x1; })a0 chartBodyLayoutOffsetInChartAreaLayoutSpace:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a1;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })p_currentModelSize;
- (BOOL)p_validCacheItem:(id)a0 inward:(BOOL)a1;
- (void)p_updateFromCacheItem:(id)a0;
- (BOOL)p_needsRefinementForInwardLayout;
- (void)p_layoutInward;
- (id)p_cache;
- (BOOL)p_inwardLayoutCanUseCacheItem:(id)a0;
- (id)p_cacheInwardLayout;
- (void)p_layoutOutward;
- (BOOL)p_outwardLayoutCanUseCacheItem:(id)a0;
- (id)p_cacheOutwardLayout;
- (void)setLayoutOffset:(struct CGPoint { double x0; double x1; })a0;
- (const struct ChartProjectedBoundsSpaces { struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x0; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x1; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x2; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x3; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x4; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x5; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x6; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x7; } *)projectedBoundsWithScene:(id)a0 forcesAccurateBounds:(BOOL)a1 allowsEmptyBodyLayoutBounds:(BOOL)a2;
- (id)debug_rotationBounds;
- (void)setStabilizedChartBodyLayoutRectUsingConverter:(const struct ChartProjectedBoundsConverter { struct ChartProjectedBoundsSpaces *x0; float x1; BOOL x2; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x3; } *)a0;
- (void)setChartBodyLayoutSize:(struct CGSize { double x0; double x1; })a0;

@end
