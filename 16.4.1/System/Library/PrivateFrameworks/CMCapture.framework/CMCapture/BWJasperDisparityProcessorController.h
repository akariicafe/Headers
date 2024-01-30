@class NSMutableArray, NSString, BWJasperDisparityProcessorRequest, BWJasperDisparityProcessorControllerConfiguration, FigStateMachine, ADJasperColorV2Executor;

@interface BWJasperDisparityProcessorController : BWStillImageProcessorController <BWJasperDisparityProcessorInputDelegate> {
    FigStateMachine *_stateMachine;
    BWJasperDisparityProcessorControllerConfiguration *_configuration;
    ADJasperColorV2Executor *_adStillImageExecutor;
    NSMutableArray *_requestQueue;
    BWJasperDisparityProcessorRequest *_currentRequest;
    struct opaqueCMFormatDescription { } *_depthFormatDescription;
    struct { void /* unknown type, empty encoding */ columns[4]; } _identityMatrix;
    NSMutableArray *_pointClouds;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pointCloudsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (unsigned long long)type;
- (void)dealloc;
- (void)_updateStateIfNeeded;
- (id)initWithConfiguration:(id)a0;
- (void)_execute;
- (BOOL)finishProcessingCurrentInputNow;
- (id)jasperPointCloudForColorBuffer:(id)a0;
- (void)_serviceNextRequest;
- (int)_setupJasperDisparityProcessor;
- (void)addPointCloudToTimeMachine:(struct opaqueCMSampleBuffer { } *)a0;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)inputReadyToExecute:(id)a0;

@end
