@class NSString, PTColor, PTRenderDebugLayer;
@protocol MTLLibrary, MTLTexture, MTLPipelineLibrary, MTLDeviceSPI;

@interface PTRaytracingSDOF : NSObject <RenderingIntegration> {
    PTColor *_portraitColor;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    struct CGSize { double width; double height; } _disparitySize;
    struct CGSize { double width; double height; } _colorSize;
    id<MTLDeviceSPI> _device;
    struct PTRandomV1 { float values[1023]; } _randomValues;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    id<MTLTexture> _linearRGBA;
    id<MTLTexture> _raytracedRGBA;
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
- (void)initRandomValues;
- (void /* unknown type, empty encoding */)randomPointInCircle;
- (int)computeRays:(SEL)a0 fNumber:(float)a1 disparityMinMax:(float)a2 rays:(struct PTRayV1 { } *)a3 rayCount:(int)a4 renderState:(id)a5;

@end
