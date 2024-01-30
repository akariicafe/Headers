@class BWDeepFusionProcessorRequest, NSString, BWDeepFusionProcessorControllerConfiguration, NSSet, FigStateMachine, NSMutableArray;
@protocol IBPDeepFusionProcessor, IBPDeepFusionPrepareDescriptor;

@interface BWDeepFusionProcessorController : BWStillImageProcessorController <BWDeepFusionProcessorInputDelegate, IBPDeepFusionProcessorDelegate> {
    BWDeepFusionProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    int _processorVersion;
    id<IBPDeepFusionProcessor> _deepFusionProcessor;
    id<IBPDeepFusionPrepareDescriptor> _prepareDescriptor;
    Class _deepFusionOutputClass;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct opaqueCMFormatDescription { } *_inferenceInputFormatDescription;
    struct opaqueCMFormatDescription { } *_demosaicedRawFormatDescription;
    struct opaqueCMFormatDescription { } *_inferenceAttachedMediaFormatDescription;
    struct opaqueCMFormatDescription { } *_gainMapFormatDescription;
    NSMutableArray *_requestQueue;
    BWDeepFusionProcessorRequest *_currentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (unsigned long long)type;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void)addInferencesForInput:(id)a0;
- (void)beginProcessingCachedBuffersForInput:(id)a0;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (id)externalMemoryDescriptor;
- (void)input:(id)a0 addInputBuffer:(id)a1;
- (id)metalImageBufferProcessor;
- (void)processor:(id)a0 outputReadyWithBufferType:(int)a1 outputPixelBuffer:(struct __CVBuffer { } *)a2 outputMetadata:(id)a3 error:(int)a4;
- (id)processorGetInferenceResults:(id)a0;

@end
