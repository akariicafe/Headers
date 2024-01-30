@class PTEffectFilter, PTGuidedFilter, PTRenderEffectNetwork, PTRenderRequest, PTRaytracingInterpolateResult, PTEffectRelighting, NSString, PTRenderPipeline, PTMSRResize, PTPyramidRGB, PTColor, PTOpticalFlow, PTUtil, PTEffectUtil, PTEffectDebugLayer, PTMTLDropHints;
@protocol PTRenderState, MTLDevice, MTLBuffer, MTLLibrary, MTLTexture, MTLPipelineLibrary, MTLCommandQueueSPI;

@interface PTEffectRendererStudioLight : NSObject <PTEffectImpl> {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    id<MTLCommandQueueSPI> _commandQueue;
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> _renderState;
    PTRaytracingInterpolateResult *_raytracingInterpolation;
    id<MTLTexture> _disparityFixedFocus;
    id<MTLBuffer> _focusDisparityArray;
    id<MTLBuffer> _focusObject;
    id<MTLBuffer> _lastFocus;
    PTMSRResize *_msrColorPyramid;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
    NSString *_colorPrimaries;
    int _colorYCbCrMatrix;
    PTGuidedFilter *_guidedFilter;
    id<MTLTexture> _guideRGBAUpscale;
    id<MTLTexture> _guideRGBACoefficients;
    PTRenderEffectNetwork *_network;
    PTEffectRelighting *_effectRelighting;
    PTPyramidRGB *_rgbaPyramid;
    PTColor *_portraitColor;
    PTRenderRequest *_sdofRenderRequest;
    PTEffectDebugLayer *_debugLayer;
    int _colorWidth;
    int _colorHeight;
    float _fNumber;
    BOOL _asynchronous;
    PTOpticalFlow *_disparityOpticalFlow;
    int _frameIndex;
    int _networkIndex;
    void /* unknown type, empty encoding */ _faceRects[4];
    int _numberOfFaceRects;
    float _focusDepthFixed;
    float _focusDepthMax;
    float _focusDepthOffset;
    void /* unknown type, blank encoding */ _iirUpdateCoefficientDisparity;
    void /* unknown type, blank encoding */ _iirUpdateCoefficientNormal;
    PTMTLDropHints *_temporalDisparityTempDropHints;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    float _focusDisparityUpdateCoefficient;
    unsigned long long _effectType;
    PTEffectFilter *_disparityNormalFilter;
    id<MTLBuffer> _focusFaceIndex;
    long long _debugType;
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
- (id)initWithTransferFunction:(id)a0 YCbCrMatrix:(id)a1 colorPrimaries:(id)a2 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 metalCommandQueue:(id)a4 effectType:(unsigned long long)a5 prewarmOnly:(BOOL)a6 useHighResNetwork:(BOOL)a7 faceAttributesNetwork:(id)a8 prevTemporalState:(id)a9 sharedResources:(id)a10;
- (int)render:(struct __CVBuffer { } *)a0 inDisparity:(struct __CVBuffer { } *)a1 detectedObjects:(const struct __CFDictionary { } *)a2 humanDetections:(id)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 outColorBuffer:(struct __CVBuffer { } *)a5 waitUntilCompleted:(BOOL)a6 gpuCompleted:(id /* block */)a7;
- (void)setColorSpaceInformation:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;

@end
