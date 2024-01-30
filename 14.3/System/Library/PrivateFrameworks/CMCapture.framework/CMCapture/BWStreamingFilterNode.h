@class NSString, BWFigVideoCaptureDevice, BWRenderList, BWRenderListProcessor, NSObject, BWStreamingCVAFilterRenderer, BWColorLookupCache, BWRenderListAnimator;
@protocol OS_dispatch_queue;

@interface BWStreamingFilterNode : BWNode <BWRendererResourceProvider, BWDetectedFacesFilterDelegate> {
    BOOL _preparedToBecomeLive;
    BOOL _streamingSegmentationFromInferenceEngine;
    BOOL _depthDataDeliveryEnabled;
    BOOL _focusBlurMapDeliveryEnabled;
    BOOL _depthFromMonocularNetworkEnabled;
    BOOL _metadataProcessingEnabled;
    BOOL _attachesInputPixelBufferAfterRendering;
    BOOL _studioAndContourRenderingEnabled;
    BOOL _stageRenderingEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _renderListLock;
    BWRenderList *_currentRenderList;
    BWRenderListAnimator *_currentAnimator;
    BWRenderList *_nextRenderList;
    BWRenderList *_mostRecentRenderListRequested;
    BWRenderListAnimator *_nextAnimator;
    BWStreamingCVAFilterRenderer *_streamingCVAFilterRenderer;
    BWRenderListProcessor *_renderListProcessor;
    BWColorLookupCache *_colorLookupCache;
    NSObject<OS_dispatch_queue> *_processorPreparationQueue;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _receivedInitialFixedPointDisparityBuffer;
    BOOL _receivedOccludedFixedPointDisparityBuffer;
}

@property (nonatomic, getter=isStreamingSegmentationFromInferenceEngine) BOOL streamingSegmentationFromInferenceEngine;
@property (nonatomic, getter=isDepthDataDeliveryEnabled) BOOL depthDataDeliveryEnabled;
@property (nonatomic, getter=isFocusBlurMapDeliveryEnabled) BOOL focusBlurMapDeliveryEnabled;
@property (nonatomic, getter=isDepthFromMonocularNetworkEnabled) BOOL depthFromMonocularNetworkEnabled;
@property (nonatomic, getter=isMetadataProcessingEnabled) BOOL metadataProcessingEnabled;
@property (nonatomic) BOOL attachesInputPixelBufferAfterRendering;
@property (nonatomic) BOOL studioAndContourRenderingEnabled;
@property (nonatomic) BOOL stageRenderingEnabled;
@property float simulatedAperture;
@property float portraitLightingEffectStrength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)provideColorLookupCache;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)provideCoreImageFilterRenderer;
- (id)videoInput;
- (id)initWithCaptureDevice:(id)a0;
- (void)filterDetectedFacesInSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)changeToFilters:(id)a0 animated:(BOOL)a1;
- (id)videoOutput;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStreamingCVAFilterRenderer;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideMetalFilterRenderer;

@end
