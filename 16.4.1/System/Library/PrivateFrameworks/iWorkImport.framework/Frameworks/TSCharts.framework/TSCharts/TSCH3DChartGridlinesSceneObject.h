@class TSCH3DPrefilteredLineRenderer;

@interface TSCH3DChartGridlinesSceneObject : TSCH3DSceneObject {
    TSCH3DPrefilteredLineRenderer *_renderer;
}

+ (id)partWithAxes:(id)a0;

- (id)effects;
- (id)init;
- (void).cxx_destruct;
- (void)render:(id)a0;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })p_gridlineTransformForPipeline:(id)a0;
- (void)getBounds:(id)a0;
- (void)p_render:(id)a0;
- (BOOL)p_shouldRenderInFrontForPipeline:(id)a0;
- (void)postGetBounds:(id)a0;
- (void)postrender:(id)a0;
- (void)primeRenderCaches:(id)a0;

@end
