@class BWIntelligentDistortionCorrectionProcessorRequest, NSString, NSDictionary, BWIntelligentDistortionCorrectionProcessorControllerConfiguration, FigStateMachine, NSMutableArray;
@protocol FigIntelligentDistortionCorrectionProcessor;

@interface BWIntelligentDistortionCorrectionProcessorController : BWStillImageProcessorController <BWIntelligentDistortionCorrectionProcessorInputDelegate> {
    BWIntelligentDistortionCorrectionProcessorControllerConfiguration *_configuration;
    NSDictionary *_idcMaxZoomScaleFactorByPortType;
    id<FigIntelligentDistortionCorrectionProcessor> _processor;
    struct opaqueCMFormatDescription { } *_outputImageFormatDescription;
    struct opaqueCMFormatDescription { } *_outputImageGainMapFormatDescription;
    struct opaqueCMFormatDescription { } *_outputImageDemosaicedRawFormatDescription;
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
    BWIntelligentDistortionCorrectionProcessorRequest *_currentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)captureTypesWithIntelligentDistortionCorrectionSupport;

- (unsigned long long)type;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)inputReceivedNewInputData:(id)a0;

@end
