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
- (void).cxx_destruct;
- (void)updateBounds;
- (void)dealloc;
- (id).cxx_construct;
- (id)updatedConstantDepthSceneFromScene:(id)a0;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })boundsFromObjectBoundsOfType:(int)a0;
- (id)drawingBoundsSceneObjectClasses;
- (id)labelsSceneObjectClasses;
- (id)chartSceneObjectClasses;
- (int)p_depthBoundsTypes;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })getBoundsFromObjectBoundsForScene:(id)a0 boundsType:(int)a1;
- (void)calculateLayoutBoundsSkippingLayoutSceneBounds:(BOOL)a0;
- (void)calculateLayoutBounds;
- (BOOL)p_excludesLabels;
- (void)calculateLabelsBounds;
- (BOOL)p_updatesLabelsOnly;
- (void)calculateBounds;
- (void)calculateLabelsBoundsIfNecssary;
- (void)calculateBoundsIfNecessary;
- (void)updateLayoutBounds;
- (void)updateLayoutBoundsIfNecessary;
- (void)updateRenderBounds;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })p_extendLabelsBoundsToBounds:(const void *)a0;
- (void)calculateLayoutLabelsBounds;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;

@end
