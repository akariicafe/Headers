@class NSMapTable, NSObject;
@protocol OS_dispatch_group;

@interface PipelineStatePromise : NSObject {
    NSMapTable *pipelineStates;
    NSMapTable *errors;
    NSObject<OS_dispatch_group> *group;
    _Atomic BOOL initialization_completed;
}

- (void).cxx_destruct;
- (BOOL)timesOutWaitingForPipelineStates:(double)a0;
- (id)initWithDispatchGroup:(id)a0 pipelineStates:(id)a1 errors:(id)a2;
- (BOOL)groupWasSuccessful;
- (id)pipelineStateForFunction:(id)a0;
- (id)errorForFunction:(id)a0;

@end
