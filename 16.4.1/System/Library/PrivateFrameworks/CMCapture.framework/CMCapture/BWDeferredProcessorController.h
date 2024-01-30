@class FigStateMachine, NSMutableArray, BWDeferredProcessorRequest;

@interface BWDeferredProcessorController : BWStillImageProcessorController {
    NSMutableArray *_processorRequests;
    BWDeferredProcessorRequest *_currentRequest;
    FigStateMachine *_stateMachine;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
}

+ (void)initialize;

- (unsigned long long)type;
- (void)dealloc;
- (id)init;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (void)inputReadyForProcessing:(id)a0;

@end
