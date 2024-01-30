@class PTRenderEffectNetwork, NSString, PTEffectFilter, PTUtil, PTEffectDebugLayer, PTRenderRequest, PTEffectUtil, PTPyramidRGB, PTMSRResize, PTRenderPipeline, PTColor;
@protocol PTRenderState, MTLDevice, MTLBuffer, MTLLibrary, MTLTexture, MTLPipelineLibrary, MTLCommandQueueSPI;

@interface PTEffectRendererSDOF : NSObject <PTEffectImpl> {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    id<MTLCommandQueueSPI> _commandQueue;
    PTRenderPipeline *_renderPipeline[3];
    id<PTRenderState> _renderStates[3];
    id<MTLTexture> _disparityFixedFocus;
    id<MTLBuffer> _focusFaceIndex;
    id<MTLBuffer> _focusDisparityArray;
    id<MTLBuffer> _focusObject;
    id<MTLBuffer> _lastFocus;
    PTMSRResize *_msrColorPyramid;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
    NSString *_colorPrimaries;
    int _colorYCbCrMatrix;
    PTRenderEffectNetwork *_network;
    PTEffectFilter *_disparityFilter;
    PTPyramidRGB *_rgbaPyramid;
    PTColor *_portraitColor;
    PTRenderRequest *_sdofRenderRequest;
    int _colorWidth;
    int _colorHeight;
    float _fNumber;
    BOOL _asynchronous;
    int _frameIndex;
    void /* unknown type, empty encoding */ _faceRects[4];
    int _numberOfFaceRects;
    float _focusDepthFixed;
    float _focusDepthMax;
    float _focusDepthOffset;
    void /* unknown type, blank encoding */ _iirUpdateCoefficientDisparity;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    float _focusDisparityUpdateCoefficient;
    long long _debugType;
    PTEffectDebugLayer *_debugLayer;
}

@property long long effectQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDebug:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)depthEstimation;
- (void)parseFaceRects:(const struct __CFDictionary { } *)a0;
- (id)copyTemporalState:(id)a0;
- (id)initWithTransferFunction:(id)a0 YCbCrMatrix:(id)a1 colorPrimaries:(id)a2 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 metalCommandQueue:(id)a4 effectType:(unsigned long long)a5 prewarmOnly:(BOOL)a6 useHighResNetwork:(BOOL)a7 prevTemporalState:(id)a8 sharedResources:(id)a9;
- (int)render:(struct __CVBuffer { } *)a0 inDisparity:(struct __CVBuffer { } *)a1 detectedObjects:(const struct __CFDictionary { } *)a2 humanDetections:(id)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 outColorBuffer:(struct __CVBuffer { } *)a5 waitUntilCompleted:(BOOL)a6 gpuCompleted:(id /* block */)a7;
- (void)setColorSpaceInformation:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;

@end
