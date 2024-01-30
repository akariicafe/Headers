@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject

+ (Class)propertiesClass;
+ (void)setLowDetailedGeometriesForScene:(id)a0;

- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScaleForInfoChartScale:(const void *)a0 scene:(id)a1;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (BOOL)shouldRenderEachValue;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (void)updateElementEffectsStates:(id)a0 depthToWidthRatio:(float)a1;
- (void)renderSeriesLabelsSceneObject:(id)a0 pipeline:(id)a1;
- (void)renderSeriesLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })p_valueLabelPaddingForLabelPosition:(unsigned int)a0;
- (void)updateTilingEffect:(void *)a0 series:(id)a1 properties:(id)a2 textureTiling:(id)a3 areaSize:(void *)a4 element:(void *)a5;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })sortingPositionForElement:(id)a0;

@end
