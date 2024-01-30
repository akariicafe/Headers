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

- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (void)_serviceNextRequest;
- (void)cancelProcessing;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (void)_resetProcessor;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (void)inputReceivedNewInputData:(id)a0;
- (void)_updateStateIfNeeded;
- (unsigned long long)_fastStereoDisparityOrientationForConfiguration:(id)a0;
- (int)_loadSetupAndPrepareDisparityProcessor;
- (int)_OSStatusFromDisparityResult:(int)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })_convertRowMajorArrayToSimdMatrix:(const float *)a0;
- (unsigned long long)_angleToFSDNetNetworkOrientation:(float)a0;
- (int)processDisparityInferenceWithReferenceBuffer:(struct __CVBuffer { } *)a0 auxBuffer:(struct __CVBuffer { } *)a1 outputDisparityBuffer:(struct __CVBuffer { } *)a2;
- (void)_process;

@end
