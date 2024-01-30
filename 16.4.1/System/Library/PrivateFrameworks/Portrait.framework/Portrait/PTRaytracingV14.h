@class PTRenderDebugLayer, NSString, PTUtil, PTRaytracingV14RenderState, NSDictionary, PTRaytracingUtils, PTPyramidRGB, PTColor;
@protocol MTLLibrary, MTLDeviceSPI, MTLPipelineLibrary;

@interface PTRaytracingV14 : NSObject <RenderingIntegration> {
    PTRaytracingV14RenderState *_renderState;
    NSDictionary *_config;
    PTColor *_portraitColor;
    PTPyramidRGB *_rgbaPyramid;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    PTRaytracingUtils *_raytracingUtils;
    PTUtil *_util;
    struct CGSize { double width; double height; } _disparitySize;
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    BOOL _injectedRGBAPyramid;
    BOOL _bicubicUpscale;
    struct PTFocusEdge { float width; float gradientThreshold; float gradientWeight; float minMaxThreshold; } _focusEdge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (void)setResourceHeap:(id)a0;
- (unsigned long long)minimumResourceHeapSize;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 disparitySize:(struct CGSize { double x0; double x1; })a4 debugRendering:(long long)a5 verbose:(BOOL)a6 gpuProfiling:(BOOL)a7 config:(id)a8 quality:(int)a9;
- (int)renderContinuousWithSource:(id)a0 renderRequest:(id)a1;

@end
