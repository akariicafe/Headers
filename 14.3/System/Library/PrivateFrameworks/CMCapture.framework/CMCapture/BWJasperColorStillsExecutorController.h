@class NSMutableArray, NSString, BWJasperColorStillsExecutorControllerConfiguration, BWJasperColorStillsExecutorRequest, FigStateMachine, ADJasperColorStillsExecutor;

@interface BWJasperColorStillsExecutorController : BWStillImageProcessorController <BWJasperColorStillsExecutorInputDelegate> {
    FigStateMachine *_stateMachine;
    BWJasperColorStillsExecutorControllerConfiguration *_configuration;
    ADJasperColorStillsExecutor *_adStillImageExecutor;
    NSMutableArray *_requestQueue;
    BWJasperColorStillsExecutorRequest *_currentRequest;
    struct opaqueCMFormatDescription { } *_depthFormatDescription;
    struct { void /* unknown type, empty encoding */ columns[4]; } _identityMatrix;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)_execute;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (void)inputReadyToExecute:(id)a0;
- (int)_setupJasperColorStillsExecutor;
- (int)_createJasperToColorCameraTransformForJasperSensorConfiguration:(id)a0 jasperToColorCameraTransformOut:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1;
- (int)_createColorCameraCalibrationAndDepthMetadataForColorSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 colorSensorConfiguration:(id)a1 colorCameraCalibrationOut:(id *)a2 depthMetadataOut:(id *)a3;
- (BOOL)finishProcessingCurrentInputNow;
- (void)_serviceNextRequest;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)_updateStateIfNeeded;

@end
