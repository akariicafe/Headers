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
@property (readonly, nonatomic) int progressiveLowLightFusionBatchSize;

+ (void)initialize;

- (unsigned long long)type;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (BOOL)finishProcessingCurrentInputNow;
- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)a0;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)a0 frameStatistics:(id)a1 stationary:(BOOL)a2 detectedObjects:(id)a3;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1 processErrorRecoveryFrame:(BOOL)a2 processOriginalImage:(BOOL)a3 processToneMapping:(BOOL)a4 processInferenceInputImage:(BOOL)a5 clientBracketSequenceNumber:(int)a6 processSemanticRendering:(BOOL)a7 provideInferenceInputImageForProcessing:(BOOL)a8 inferencesAvailable:(BOOL)a9;
- (void)input:(id)a0 addFrame:(struct opaqueCMSampleBuffer { } *)a1 isReferenceFrame:(BOOL)a2;
- (void)inputReceivedAllFrames:(id)a0;
- (void)processor:(id)a0 didCompleteProcessingForSurfaceID:(unsigned int)a1;
- (void)processor:(id)a0 didEnqueueProcessingForSurfaceID:(unsigned int)a1;
- (void)processor:(id)a0 didSelectFusionMode:(int)a1;
- (void)processor:(id)a0 outputReadyWithFrameType:(int)a1 outputPixelBuffer:(struct __CVBuffer { } *)a2 outputMetadata:(id)a3 error:(int)a4;
- (id)processorGetInferenceResults:(id)a0;

@end
