@class UBProcessor, NSString, BWUBProcessorRequest, UBPrepareDescriptor, NSSet, FigStateMachine, NSDictionary, NSMutableArray, BWUBProcessorControllerConfiguration;

@interface BWUBProcessorController : BWStillImageProcessorController <BWUBProcessorInputDelegate, UBProcessorDelegate, BWNoiseReductionAndFusionProcessorController> {
    BWUBProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    UBProcessor *_ubProcessor;
    UBPrepareDescriptor *_prepareDescriptor;
    Class _ubFusionOutputClass;
    Class _ubProgressiveBracketingStatisticsClass;
    Class _ubProgressiveBracketingParametersClass;
    NSDictionary *_adaptiveBracketingCaptureParametersByPortType;
    Class _ubDeepFusionOutputClass;
    UBPrepareDescriptor *_deepFusionPrepareDescriptor;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct opaqueCMFormatDescription { } *_inferenceInputFormatDescription;
    struct opaqueCMFormatDescription { } *_gainMapFormatDescription;
    NSMutableArray *_requestQueue;
    BWUBProcessorRequest *_currentRequest;
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
- (void)_resetProcessor;
- (int)_loadSetupAndPrepareUBProcessor;
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
- (void)_processUBOriginalImage;
- (void)_processLowLightFusion;
- (void)_processDeepFusion;
- (void)_updateStateIfNeeded;

@end
