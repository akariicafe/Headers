@class NSString, BWStereoDisparityRequest, FigStateMachine, NSDictionary, NSMutableArray, BWStereoDisparityProcessorControllerConfiguration, BWInferenceEngine, FigDisparityGenerator;

@interface BWStereoDisparityProcessorController : BWStillImageProcessorController <BWStereoDisparityProcessorInputDelegate, DisparityProcessorInferenceDelegate, BWInferenceFormatProvider> {
    BWStereoDisparityProcessorControllerConfiguration *_configuration;
    FigStateMachine *_stateMachine;
    FigDisparityGenerator *_disparityProcessor;
    struct opaqueCMFormatDescription { } *_disparityFormatDescription;
    NSMutableArray *_requestQueue;
    BWStereoDisparityRequest *_currentRequest;
    BWInferenceEngine *_inferenceEngine;
    struct opaqueCMFormatDescription { } *_refFormatDescription;
    struct opaqueCMFormatDescription { } *_auxFormatDescription;
    struct opaqueCMFormatDescription { } *_shiftMapFormatDescription;
    NSDictionary *_videoFormatByAttachedMediaKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (unsigned long long)type;
- (void)dealloc;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)inputReceivedNewInputData:(id)a0;
- (int)processDisparityInferenceWithReferenceBuffer:(struct __CVBuffer { } *)a0 auxBuffer:(struct __CVBuffer { } *)a1 outputDisparityBuffer:(struct __CVBuffer { } *)a2;

@end
