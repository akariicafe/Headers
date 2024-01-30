@interface TSCH3DChartOrthographicShadowsSceneObject : TSCH3DChartShadowsSceneObject

+ (id)blurParametersArray;

- (void)updateCoordsAndTexcoords:(const void *)a0 zOffset:(float)a1 cameraPosition:(const void *)a2 quad:(id)a3 texcoords:(id)a4;
- (id)createCamera;
- (id)createShadowsRenderer;
- (void)updateShadowPlane:(id)a0 texcoords:(id)a1 scene:(id)a2 blurslack:(float)a3 angle:(float)a4 quality:(float)a5 planePadding:(struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })a6;

@end
