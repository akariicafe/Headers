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
    NSDictionary *_sdofRenderingTuningParameters;
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

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)provideColorLookupCache;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideCoreImageFilterRenderer;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)provideStillImageMetalBlurMapRenderer;
- (void)setSdofRenderingTuningParameters:(id)a0;
- (id)provideMetalFilterRenderer;
- (id)provideStreamingSDOFFilterRenderer;
- (id)sdofRenderingTuningParameters;
- (id)_initWithNodeConfiguration:(id)a0 depthDataDeliveryEnabled:(BOOL)a1 personSegmentationEnabled:(BOOL)a2 refinedDepthEnabled:(BOOL)a3 portraitRenderQuality:(int)a4 renderResourceProvider:(id)a5;
- (id)initWithNodeConfiguration:(id)a0 depthDataDeliveryEnabled:(BOOL)a1 personSegmentationEnabled:(BOOL)a2 refinedDepthEnabled:(BOOL)a3 portraitRenderQuality:(int)a4;

@end
