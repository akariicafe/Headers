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

- (unsigned long long)type;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (BOOL)finishProcessingCurrentInputNow;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)inputReadyToExecute:(id)a0;

@end
