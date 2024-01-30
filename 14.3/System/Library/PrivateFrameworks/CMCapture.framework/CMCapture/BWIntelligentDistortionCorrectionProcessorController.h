@class BWIntelligentDistortionCorrectionProcessorRequest, NSString, BWIntelligentDistortionCorrectionProcessorControllerConfiguration, FigStateMachine, NSMutableArray;
@protocol FigIntelligentDistortionCorrectionProcessor;

@interface BWIntelligentDistortionCorrectionProcessorController : BWStillImageProcessorController <BWIntelligentDistortionCorrectionProcessorInputDelegate> {
    BWIntelligentDistortionCorrectionProcessorControllerConfiguration *_configuration;
    id<FigIntelligentDistortionCorrectionProcessor> _processor;
    struct opaqueCMFormatDescription { } *_outputImageFormatDescription;
    struct opaqueCMFormatDescription { } *_outputImageGainMapFormatDescription;
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
    BWIntelligentDistortionCorrectionProcessorRequest *_currentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)portTypesWithIntelligentDistortionCorrectionSupportWithSensorConfigurations:(id)a0 intelligentDistortionCorrectionVersion:(int)a1;
+ (id)captureTypesWithIntelligentDistortionCorrectionSupport;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (void)_serviceNextRequest;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)_resetProcessor;
- (void)inputReceivedNewInputData:(id)a0;
- (void)_updateStateIfNeeded;
- (int)_loadSetupAndPrepareProcessor;
- (int)_figErrorFromIntelligentDistortionCorrectionStatus:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_smallerOrEqualRectWithValuesMultipleOfTwo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_getAndAttachGDCInformationToDemosaicedRawSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 inputWidth:(unsigned long long)a1 inputHeight:(unsigned long long)a2 finalImageDimensions:(struct { int x0; int x1; })a3 settingsID:(long long)a4;
- (int)_customPrepareProcessor:(id)a0;
- (void)_process;

@end
