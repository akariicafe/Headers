@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject

+ (Class)propertiesClass;
+ (void)setLowDetailedGeometriesForScene:(id)a0;

- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0 scene:(id)a1;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (BOOL)shouldRenderEachValue;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (void)updateElementEffectsStates:(id)a0 depthToWidthRatio:(float)a1;
- (void)renderSeriesLabelsSceneObject:(id)a0 pipeline:(id)a1;
- (void)renderSeriesLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })p_valueLabelPaddingForLabelPosition:(unsigned int)a0;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState { struct array<TSCH3D::TexCoordTilingShaderEffectState::Data, 3> { struct Data { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x0[3]; } x0; } *)a0 series:(id)a1 properties:(id)a2 textureTiling:(id)a3 areaSize:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a4 element:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a5;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })sortingPositionForElement:(id)a0;

@end
