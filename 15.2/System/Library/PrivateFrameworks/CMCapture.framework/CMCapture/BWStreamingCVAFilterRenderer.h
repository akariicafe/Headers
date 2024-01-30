@class BWStreamingCVAFilterRendererAnimator, NSString, NSArray, BWFigVideoCaptureDevice, BWPixelBufferPool, BWSpringSimulation, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CVAPortraitVideoPipeline, CVAPortraitGenericRequest;

@interface BWStreamingCVAFilterRenderer : NSObject <BWFilterRenderer> {
    NSObject<OS_dispatch_queue> *_sharedContextQueue;
    struct { BOOL depthFilterEnabled; struct __CVBuffer *mostRecentPostprocessedDisparityBuffer; float mostRecentFocusDisparity; float mostRecentDeltaDisparity; float mostRecentPortraitStability; int numberOfFramesSinceLastStableFocus; float clientSuppliedSimulatedAperture; float clientSuppliedPortraitLightingEffectStrength; BOOL mostRecentStructuredLightOcclusion; NSArray *mostRecentDetectedFaces; NSArray *mostRecentFilteredFaces; id<CVAPortraitGenericRequest> previousPortraitRequest; int previousStagePreviewStatus; } _sharedContext;
    id<CVAPortraitVideoPipeline> _portraitVideoPipeline;
    BWPixelBufferPool *_postprocessedDisparityBufferPool;
    struct __CVBuffer { } *_mattingBuffer;
    int _depthDataSource;
    BWFigVideoCaptureDevice *_captureDevice;
    BWSpringSimulation *_stageProxyLiveRenderingSpringSimulation;
    BWStreamingCVAFilterRendererAnimator *_animator;
    NSMutableDictionary *_faceVisibilityByFaceID;
    NSMutableArray *_postprocessedFaces;
}

@property (readonly, nonatomic) BOOL studioAndContourRenderingEnabled;
@property (readonly, nonatomic) BOOL stageRenderingEnabled;
@property float simulatedAperture;
@property float portraitLightingEffectStrength;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithCaptureDevice:(id)a0 studioAndContourRenderingEnabled:(BOOL)a1 stageRenderingEnabled:(BOOL)a2 depthDataSource:(int)a3;
- (void)disparityPostprocessingRequest:(id)a0 didCompleteDisparityPostprocessingWithResult:(id)a1;
- (void)mattingRequest:(id)a0 didCompleteMattingWithResult:(id)a1;
- (void)portraitRequest:(id)a0 didCompletePortraitWithResult:(id)a1 completionHandler:(id /* block */)a2;
- (void)_removeFaceVisibilityForFacesMissingFromDetectedFaces:(id)a0;

@end
