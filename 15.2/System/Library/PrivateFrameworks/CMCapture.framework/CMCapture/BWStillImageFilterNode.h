@class BWStillImageMetalBlurMapRenderer, NSString, BWStillImageMetalSDOFRenderer, CIContext, BWRenderList, BWPixelBufferPool, BWRenderListProcessor, BWMetalColorCubeRenderer, BWVideoFormat, NSDictionary, NSObject, BWColorLookupCache;
@protocol BWRendererResourceProvider, OS_dispatch_queue, MTLCommandQueue;

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {
    BWRenderList *_renderList;
    BWRenderListProcessor *_renderListProcessor;
    id<BWRendererResourceProvider> _rendererProvider;
    CIContext *_cachedCIContext;
    BWStillImageMetalSDOFRenderer *_metalSDOFRenderer;
    BWStillImageMetalBlurMapRenderer *_metalBlurMapRenderer;
    BWMetalColorCubeRenderer *_metalFilterRenderer;
    BWColorLookupCache *_colorLookupCache;
    BWVideoFormat *_outputFormat;
    struct { int width; int height; } _outputDimensions;
    struct { int width; int height; } _maskDimensions;
    BOOL _depthDataDeliveryEnabled;
    struct { int width; int height; } _depthDataMapDimensions;
    NSDictionary *_sensorIDDictionary;
    int _portraitRenderQuality;
    struct OpaqueVTPixelTransferSession { } *_portraitDownsamplingTransferSession;
    BWPixelBufferPool *_processingBufferPool;
    NSObject<OS_dispatch_queue> *_emitQueue;
    id<MTLCommandQueue> _mtlCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideColorLookupCache;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (id)sensorIDDictionary;
- (id)provideCoreImageFilterRenderer;
- (void)dealloc;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStreamingSDOFFilterRenderer;
- (id)initWithNodeConfiguration:(id)a0 depthDataDeliveryEnabled:(BOOL)a1 personSegmentationEnabled:(BOOL)a2 refinedDepthEnabled:(BOOL)a3 portraitRenderQuality:(int)a4;
- (void)setSensorIDDictionary:(id)a0;
- (id)_initWithNodeConfiguration:(id)a0 depthDataDeliveryEnabled:(BOOL)a1 personSegmentationEnabled:(BOOL)a2 refinedDepthEnabled:(BOOL)a3 portraitRenderQuality:(int)a4 renderResourceProvider:(id)a5;
- (int)_allocateOutputBufferPoolWithVideoFormat:(id)a0;
- (void)_prepareStillImageFilterRenderersForOriginalFilters:(id)a0 processedFilters:(id)a1;
- (int)_downsampleImageForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 outputSampleBuffer:(struct opaqueCMSampleBuffer **)a1 dimensions:(struct { int x0; int x1; })a2;
- (void)_emitSampleBufferAsync:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_downsampleAttachedMediaForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_emitNodeErrorForErrorStatus:(int)a0 numberOfNodeErrors:(int)a1 requestedStillImageCaptureSettings:(id)a2 resolvedStillImageCaptureSettings:(id)a3;
- (int)_downsamplePixelBuffer:(struct __CVBuffer { } *)a0 outputPixelBuffer:(struct __CVBuffer **)a1 dimensions:(struct { int x0; int x1; })a2;
- (id)_debugStringForBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
