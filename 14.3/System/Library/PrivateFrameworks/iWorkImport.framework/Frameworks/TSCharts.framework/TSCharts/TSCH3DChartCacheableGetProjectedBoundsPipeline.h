@class TSCH3DGetBoundsProjector;

@interface TSCH3DChartCacheableGetProjectedBoundsPipeline : TSCH3DChartGetProjectedBoundsPipeline {
    BOOL mLayoutBoundsValid;
    struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMin; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMax; } mShadowsLayout3DBounds;
    struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMin; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMax; } mLayout3DBounds;
    struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMin; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMax; } mBodyLayout3DBounds;
    struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMin; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMax; } mConstantDepthBodyLayout3DBounds;
    TSCH3DGetBoundsProjector *mProjector;
}

@property (nonatomic) BOOL useIndividualBounds;

+ (BOOL)includesDepthForUnitScaleForScene:(id)a0;
+ (void)setIncludesDepthForUnitScale:(BOOL)a0 forScene:(id)a1;

- (id)initWithScene:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)updateBounds;
- (void)invalidateCachedBounds;
- (id)updatedConstantDepthSceneFromScene:(id)a0;
- (struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })boundsFromObjectBoundsOfType:(int)a0;
- (void)calculateLayoutBounds;
- (void)calculateBounds;
- (void)updateLayoutBounds;
- (void)updateRenderBounds;
- (void)calculateLayoutLabelsBounds;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;

@end
