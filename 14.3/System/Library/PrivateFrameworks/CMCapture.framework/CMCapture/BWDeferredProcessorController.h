@class FigStateMachine, NSMutableArray, BWDeferredProcessorRequest;

@interface BWDeferredProcessorController : BWStillImageProcessorController {
    NSMutableArray *_processorRequests;
    BWDeferredProcessorRequest *_currentRequest;
    FigStateMachine *_stateMachine;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (unsigned long long)type;
- (void)_serviceNextRequest;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)inputReadyForProcessing:(id)a0;
- (void)_updateStateIfNeeded;
- (void)_process;

@end
