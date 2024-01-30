@class NSString, NSDictionary, CIDualRedEyeRepairSession, NSMutableArray;

@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate> {
    NSDictionary *_redEyeReductionParametersByPortType;
    CIDualRedEyeRepairSession *_redEyeRepairSession;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    NSMutableArray *_requestQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)prewarm;
+ (id)_newRedEyeRepairSessionWithMetalCommandQueue:(id)a0;

- (id)_currentRequest;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (void)_serviceRequests;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)didReceiveFrameForInput:(id)a0;
- (void)didReceiveAllFramesForInput:(id)a0;
- (int)_configureRedEyeReductionSessionWithConfiguration:(id)a0;
- (id)_requestForInput:(id)a0;
- (void)_processRedEyeReductionWhenNecessaryForRequest:(id)a0;
- (void)_clearRequest:(id)a0;
- (BOOL)_receivedRequiredFramesForRequest:(id)a0;
- (void)_propagateSensorInterfaceRawFromAuxImage:(struct opaqueCMSampleBuffer { } *)a0 toPrimaryImage:(struct opaqueCMSampleBuffer { } *)a1;

@end
