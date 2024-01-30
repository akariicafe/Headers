@interface TSCH3DChartElementSceneObject : TSCH3DSceneObject

+ (BOOL)isHorizontalChart;
+ (BOOL)shouldCreateMeshSeriesStorage;
+ (id)scenePropertiesKey;
+ (id)partWithEnumerator:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;
+ (void)setLowDetailedGeometriesForScene:(id)a0;
+ (id)resetSeriesStorage:(id)a0 forSeries:(id)a1;

- (void)render:(id)a0;
- (void)getBounds:(id)a0;
- (void)rayPick:(id)a0;
- (float)depthForScene:(id)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScaleForInfoChartScale:(const void *)a0 scene:(id)a1;
- (void)getSelectionKnobsPositions:(id)a0;
- (void)getSceneObjectElementsBounds:(id)a0;
- (id)selectionPathForInfo:(id)a0 scene:(id)a1 pickedPoint:(id)a2;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1;
- (void)setTransparencyBlendingForProcessor:(id)a0;
- (BOOL)applyEffectsForProperties:(id)a0 series:(id)a1 index:(const void *)a2 pipeline:(id)a3 injectEffectsUsingBlock:(id /* block */)a4;
- (struct ElementRenderPass { int x0; })render:(id)a0 pushMatrix:(BOOL)a1 delayedPass:(BOOL)a2;
- (id)delegateFromScene:(id)a0;
- (BOOL)shouldRenderEachValue;
- (id)modelEnumeratorFromScene:(id)a0;
- (BOOL)shouldRenderSeries:(id)a0;
- (id)scenePropertiesKey;
- (id)elementPropertiesFromScene:(id)a0;
- (float)chartOpacityForScene:(id)a0;
- (BOOL)p_isRenderPassDelayedForDelegate:(id)a0;
- (BOOL)shouldDelayForChartOpacity:(float)a0;
- (void)p_processItems:(id)a0 processItemsClass:(Class)a1;
- (void)renderTwoPassGeometry:(BOOL)a0 processor:(id)a1 renderBlock:(id /* block */)a2;
- (void)prerenderElement:(id)a0;
- (void)renderElement:(id)a0;
- (void)postrenderElement:(id)a0;
- (void)updateLightingEffectsState:(id)a0 scene:(id)a1;
- (BOOL)transparencyDepthMask;
- (id)scenePartForScene:(id)a0;
- (id)geometryForSeries:(id)a0 index:(const void *)a1 scene:(id)a2;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })labelObjectSpacePosition:(unsigned int)a0 axisValue:(double)a1 intercept:(double)a2;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })labelOffset:(unsigned int)a0 labelSize:(const void *)a1 textureSize:(const void *)a2 dataSpaceValue:(float)a3;
- (void)renderSeriesLabelsSceneObject:(id)a0 pipeline:(id)a1;
- (Class)resizer3DClass;
- (Class)getBounds3DClass;

@end
