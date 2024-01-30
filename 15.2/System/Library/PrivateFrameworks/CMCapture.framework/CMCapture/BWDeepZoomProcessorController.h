@class NSString, BWDeepZoomProcessorControllerConfiguration, FigStateMachine, BWDeepZoomInferenceConfiguration, NSMutableDictionary, BWDeepZoomProcessorRequest, BWInferenceEngine, NSMutableArray;

@interface BWDeepZoomProcessorController : BWStillImageProcessorController <BWDeepZoomProcessorInputDelegate, BWInferenceFormatProvider> {
    BWDeepZoomProcessorControllerConfiguration *_configuration;
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
    BWDeepZoomProcessorRequest *_currentRequest;
    BWInferenceEngine *_inferenceEngine;
    NSMutableDictionary *_videoFormatByAttachedMediaKey;
    BWDeepZoomInferenceConfiguration *_inferenceConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_process;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (void)_updateStateIfNeeded;
- (unsigned long long)type;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (void)dealloc;
- (void)_serviceNextRequest;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)cancelProcessing;
- (int)prepareWithPixelBufferPoolProvider:(id)a0;
- (void)_setupProcessor;
- (void)inputSampleBufferReceived:(id)a0;
- (int)_loadSetupAndPrepareDeepZoomProcessor;

@end
