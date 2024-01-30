@class BWDeepFusionProcessorRequest, NSString, BWDeepFusionProcessorControllerConfiguration, NSSet, FigStateMachine, NSMutableArray;
@protocol IBPDeepFusionProcessor, IBPDeepFusionPrepareDescriptor;

@interface BWDeepFusionProcessorController : BWStillImageProcessorController <BWDeepFusionProcessorInputDelegate> {
    BWDeepFusionProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    id<IBPDeepFusionProcessor> _deepFusionProcessor;
    id<IBPDeepFusionPrepareDescriptor> _prepareDescriptor;
    Class _deepFusionOutputClass;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
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

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (void)input:(id)a0 addType:(unsigned long long)a1;
- (void)_serviceNextRequest;
- (void)addInferencesForInput:(id)a0;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (int)_loadSetupAndPrepareDeepFusionProcessor;
- (void)_propagateInferenceAttachedMedia:(id)a0 input:(id)a1 outputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2;
- (void)_resetProcessor;
- (void)_setupProcessor;
- (void)_updateStateIfNeeded;
- (void)_propagateDemosaicedRawPixelBuffer:(struct __CVBuffer { } *)a0 demosaicedRawMetadata:(id)a1 outputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 error:(int)a3;
- (void)_process;

@end
