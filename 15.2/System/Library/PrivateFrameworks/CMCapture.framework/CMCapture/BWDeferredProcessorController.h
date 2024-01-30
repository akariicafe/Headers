@class FigStateMachine, NSMutableArray, BWDeferredProcessorRequest;

@interface BWDeferredProcessorController : BWStillImageProcessorController {
    NSMutableArray *_processorRequests;
    BWDeferredProcessorRequest *_currentRequest;
    FigStateMachine *_stateMachine;
}

+ (void)initialize;

- (void)_process;
- (id)init;
- (void)_updateStateIfNeeded;
- (unsigned long long)type;
- (void)dealloc;
- (void)_serviceNextRequest;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)cancelProcessing;
- (void)inputReadyForProcessing:(id)a0;

@end
