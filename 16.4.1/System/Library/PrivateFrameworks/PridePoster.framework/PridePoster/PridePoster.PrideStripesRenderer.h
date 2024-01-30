@interface PridePoster.PrideStripesRenderer : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ ribbonRenderPipeline;
    void /* unknown type, empty encoding */ ribbonDepthState;
    void /* unknown type, empty encoding */ mainRenderPassDescriptor;
    void /* unknown type, empty encoding */ ribbonShadowRenderPipeline;
    void /* unknown type, empty encoding */ shadowTextures;
    void /* unknown type, empty encoding */ blurFilter;
    void /* unknown type, empty encoding */ vertexBuffer;
    void /* unknown type, empty encoding */ indexBuffer;
    void /* unknown type, empty encoding */ stripeUniformsBuffer;
    void /* unknown type, empty encoding */ uniformsBufferIndex;
    void /* unknown type, empty encoding */ appearance;
    void /* unknown type, empty encoding */ appearanceLock;
    void /* unknown type, empty encoding */ stripeCount;
    void /* unknown type, empty encoding */ inSynchronousRender;
    void /* unknown type, empty encoding */ startTime;
}

- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (id)init;
- (void).cxx_destruct;

@end
