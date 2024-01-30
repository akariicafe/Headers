@class TSCH3DChartScenePropertyAccessor, TSCH3DCamera;

@interface TSCH3DChartGetProjectedBoundsPipeline : TSCH3DGetBoundsPipeline {
    struct ChartProjectedBoundsSpaces { struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } _chart; struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } _orient; struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } _drawing; struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } _layout; struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } _layoutInPage; struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } _bodyLayout; struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } _bodyLayoutInPage; struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } _containingViewport; } _spaces;
    TSCH3DCamera *_originalCamera;
    TSCH3DChartScenePropertyAccessor *_originalSceneAccessor;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _shadowsLayoutBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _layoutBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _constantDepthBodyLayoutBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _bodyLayoutBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _labelsLayoutBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _chartBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _orientBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _drawingBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _labelsBounds;
}

@property (readonly, nonatomic) const void *spaces;
@property (nonatomic) struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } layoutInPage;
@property (nonatomic) struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } bodyLayoutInPage;
@property (nonatomic) struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } containingViewport;
@property (nonatomic) BOOL enableScaledDepth;
@property (nonatomic) int labelsMode;

- (BOOL)run;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateBounds;
- (void)calculateBounds;
- (void)calculateLabelsBoundsIfNecssary;
- (id)drawingBoundsSceneObjectClasses;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })boundsFromObjectBoundsOfType:(int)a0;
- (void)calculateBoundsIfNecessary;
- (void)calculateLabelsBounds;
- (void)calculateLayoutBounds;
- (void)calculateLayoutBoundsSkippingLayoutSceneBounds:(BOOL)a0;
- (void)calculateLayoutLabelsBounds;
- (id)chartSceneObjectClasses;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })getBoundsFromObjectBoundsForScene:(id)a0 boundsType:(int)a1;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;
- (id)labelsSceneObjectClasses;
- (int)p_depthBoundsTypes;
- (BOOL)p_excludesLabels;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })p_extendLabelsBoundsToBounds:(const void *)a0;
- (BOOL)p_updatesLabelsOnly;
- (void)updateLayoutBounds;
- (void)updateLayoutBoundsIfNecessary;
- (void)updateRenderBounds;
- (id)updatedConstantDepthSceneFromScene:(id)a0;

@end
