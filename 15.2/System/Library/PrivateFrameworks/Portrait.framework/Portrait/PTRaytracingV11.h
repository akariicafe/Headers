@class PTColor, NSString, NSDictionary, PTPyramidYUV, PTRenderDebugLayer;
@protocol MTLPipelineLibrary, MTLLibrary, MTLTexture, MTLBuffer, MTLDeviceSPI;

@interface PTRaytracingV11 : NSObject <RenderingIntegration> {
    NSDictionary *_config;
    PTColor *_portraitColor;
    PTPyramidYUV *_yuvPyramid;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    struct CGSize { double width; double height; } _disparitySize;
    struct CGSize { double width; double height; } _colorSize;
    id<MTLDeviceSPI> _device;
    id<MTLBuffer> _randomValues;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    id<MTLTexture> _raytracedYUVRadius;
    id<MTLTexture> _guideRGBA;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (void).cxx_destruct;
- (id)createRenderStateWithQuality:(int)a0;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 disparitySize:(struct CGSize { double x0; double x1; })a4 debugRendering:(long long)a5 verbose:(BOOL)a6 gpuProfiling:(BOOL)a7 config:(id)a8;
- (int)renderContinuousWithSource:(id)a0 renderRequest:(id)a1;
- (unsigned long long)minimumResourceHeapSize;
- (void)setResourceHeap:(id)a0;
- (id)intermediateTextures;

@end
