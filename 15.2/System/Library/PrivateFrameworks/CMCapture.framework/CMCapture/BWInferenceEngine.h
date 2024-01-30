@class NSMutableDictionary, BWMetalInferenceContext, BWVideoDepthInferenceAdapter, BWEspressoInferenceAdapter, NSDictionary, BWInferenceScheduler, BWVideoProcessingInferenceAdapter, BWFusionTrackerInferenceAdapter, NSMutableArray, BWFigVideoCaptureDevice, NSString, BWFigCaptureISPProcessingSession, BWVisionInferenceAdapter, NSMutableSet, BWEspressoInferenceContext, BWInferenceDependencyProvider, BWVisionInferenceContext;

@interface BWInferenceEngine : NSObject <BWInferenceResourceProvider> {
    BWInferenceScheduler *_scheduler;
    unsigned long long _connection;
    unsigned int _priority;
    BWInferenceDependencyProvider *_dependencyProvider;
    BWEspressoInferenceAdapter *_espressoAdapter;
    BWEspressoInferenceContext *_cpuContext;
    BWEspressoInferenceContext *_gpuContext;
    BWEspressoInferenceContext *_convContext;
    BWEspressoInferenceContext *_aneContext;
    BWMetalInferenceContext *_defaultDeviceMetalContext;
    BWVisionInferenceAdapter *_visionAdapter;
    BWVisionInferenceContext *_visionContext;
    BWVideoDepthInferenceAdapter *_videoDepthAdapter;
    BWFusionTrackerInferenceAdapter *_fusionTrackerAdapter;
    BWVideoProcessingInferenceAdapter *_videoProcessingAdapter;
    BWFigVideoCaptureDevice *_captureDevice;
    BWFigCaptureISPProcessingSession *_ispProcessingSession;
    NSMutableArray *_inferenceRequirements;
    NSMutableArray *_videoRequirementsPossiblyReceivingAttachedMedia;
    NSMutableArray *_videoRequirementsPossiblyProvidingAttachedMedia;
    NSMutableDictionary *_lazyInputVideoRequirementsByAttachedMediaKey;
    NSMutableDictionary *_lazyOutputVideoRequirementsByAttachedMediaKey;
    NSMutableSet *_unresolvedAttachedMediaKeysPreventingProvidedVideoRequirements;
}

@property (class, readonly, nonatomic, getter=isConvolutionEngineSupported) BOOL convolutionEngineSupported;
@property (class, readonly, nonatomic, getter=isNeuralEngineSupported) BOOL neuralEngineSupported;

@property (readonly, copy, nonatomic) NSDictionary *providedVideoRequirementsByAttachedMediaKey;
@property (readonly, nonatomic) BOOL requiresDeviceOrientationMetadata;
@property (readonly, nonatomic, getter=isConfiguredForInference) BOOL configuredForInference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned int)allowedBufferCompressionDirectionForExecutionTarget:(int)a0;
+ (int)allowedPixelBufferCompressionType;
+ (int)allowedPixelBufferCompressionLevel;

- (id)metalCommandBuffer;
- (void)dealloc;
- (id)defaultDeviceMetalContext;
- (id)initWithCaptureDevice:(id)a0 scheduler:(id)a1 priority:(unsigned int)a2 shareIntermediateBuffer:(BOOL)a3;
- (int)addInferenceOfType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2;
- (int)prepareForInputVideoFormat:(id)a0 attachedMediaKey:(id)a1;
- (int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 skippingInferencesWithTypes:(id)a2;
- (int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)a0;
- (int)prepareForInferenceWithFormatProvider:(id)a0 pixelBufferPoolProvider:(id)a1;
- (id)initWithCaptureDevice:(id)a0 scheduler:(id)a1 priority:(unsigned int)a2;
- (int)prewarmInferencesUsingLimitedMemory:(BOOL)a0;
- (int)prepareForInferenceWithFormatProvider:(id)a0;
- (int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (id)espressoContextForExecutionTarget:(int)a0;
- (int)prepareForInputInferenceVideoFormat:(id)a0 attachedMediaKey:(id)a1;
- (id)ispProcessingSessionForExecutionTarget:(int)a0;
- (void)_invalidateProcessingSessionIfNecessary;
- (void)_prepareProvidedVideoRequirementsIfNecessary;
- (void)_prepareDependenciesByRequirementIfNecessary;
- (int)_prepareProcessingSessionIfNecessary;
- (void)_addInferenceRequirementForProvider:(id)a0 configuration:(id)a1;
- (id)visionContextForExecutionTarget:(int)a0;
- (id)newMetalEvent;

@end
