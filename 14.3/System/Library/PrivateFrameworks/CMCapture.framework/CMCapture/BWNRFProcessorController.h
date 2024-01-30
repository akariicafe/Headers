@class NSString, NRFPrepareDescriptor, NSSet, FigStateMachine, NSDictionary, BWNRFProcessorControllerConfiguration, NSObject, NRFProcessor, NSMutableArray, BWNRFProcessorRequest;
@protocol OS_dispatch_queue;

@interface BWNRFProcessorController : BWStillImageProcessorController <BWNRFProcessorInputDelegate, NRFProcessorDelegate, BWNoiseReductionAndFusionProcessorController> {
    BWNRFProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    NRFProcessor *_nrfProcessor;
    NRFPrepareDescriptor *_prepareDescriptor;
    Class _nrfUBFusionOutputClass;
    Class _nrfProgressiveBracketingStatisticsClass;
    Class _nrfProgressiveBracketingParametersClass;
    NSDictionary *_adaptiveBracketingCaptureParametersByPortType;
    Class _nrfDeepFusionOutputClass;
    NRFPrepareDescriptor *_deepFusionPrepareDescriptor;
    Class _nrfCompletionStatusClass;
    NSObject<OS_dispatch_queue> *_completionStatusQueue;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct opaqueCMFormatDescription { } *_inferenceInputFormatDescription;
    struct opaqueCMFormatDescription { } *_demosaicedRawFormatDescription;
    struct opaqueCMFormatDescription { } *_gainMapFormatDescription;
    NSMutableArray *_requestQueue;
    BWNRFProcessorRequest *_currentRequest;
}

@property (class, readonly) BOOL lazilyAllocatesDeepFusionOutputBuffers;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (BOOL)finishProcessingCurrentInputNow;
- (void)_serviceNextRequest;
- (void)cancelProcessing;
- (void)input:(id)a0 addFrame:(struct opaqueCMSampleBuffer { } *)a1 isReferenceFrame:(BOOL)a2;
- (void)inputReceivedAllFrames:(id)a0;
- (void)_processOriginalImage;
- (void)_resetProcessor;
- (int)_setupProcessorForProcessingType:(unsigned int)a0;
- (int)_singleImageProcessSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 sampleBufferOut:(struct opaqueCMSampleBuffer **)a1;
- (void)_processUBFusion;
- (struct opaqueCMSampleBuffer { } *)_newOutputSampleBufferWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 pixelBuffer:(struct __CVBuffer { } *)a1 formatDescriptionInOut:(const struct opaqueCMFormatDescription **)a2 metadataToMerge:(id)a3;
- (void)processor:(id)a0 outputReadyWithFrameType:(int)a1 outputPixelBuffer:(struct __CVBuffer { } *)a2 outputMetadata:(id)a3 error:(int)a4;
- (id)processorGetInferenceResults:(id)a0;
- (void)processor:(id)a0 didSelectFusionMode:(int)a1;
- (void)processor:(id)a0 didEnqueueProcessingForSurfaceID:(unsigned int)a1;
- (void)processor:(id)a0 didCompleteProcessingForSurfaceID:(unsigned int)a1;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)a0 frameStatistics:(id)a1 stationary:(BOOL)a2 detectedObjects:(id)a3;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1 processErrorRecoveryFrame:(BOOL)a2 processOriginalImage:(BOOL)a3 clientBracketSequenceNumber:(int)a4;
- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)a0;
- (void)_setupProcessor;
- (void)_processSingleImage;
- (void)_processDeepFusion;
- (void)_updateStateIfNeeded;
- (int)_loadSetupAndPrepareNRFProcessor;
- (void)_logCompletionStatus:(id)a0 processingType:(unsigned int)a1 request:(id)a2;
- (void)_propagateDemosaicedRawPixelBuffer:(struct __CVBuffer { } *)a0 demosaicedRawMetadata:(id)a1 outputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 error:(int)a3;
- (void)processor:(id)a0 didSelectProgressiveFusionReferenceFrameIndex:(int)a1;
- (void)_processUBLowLightFusion;

@end
