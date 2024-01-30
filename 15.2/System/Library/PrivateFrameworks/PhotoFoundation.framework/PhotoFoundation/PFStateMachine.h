@class NSString, PFStateMachineNode, PFStateMachineGraph, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PFStateMachine : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PFStateMachineGraph *_graph;
    PFStateMachineNode *_previousNode;
    PFStateMachineNode *_currentNode;
    id _owner;
    id _delayedEventCancelToken;
    NSMutableArray *_subflowStack;
}

@property (readonly) NSString *name;
@property (readonly) id uuid;

- (id)graph;
- (id)description;
- (void)handleEvent:(id)a0;
- (void)trace:(id)a0;
- (void)_handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)owner;
- (void)dealloc;
- (id)initWithGraph:(id)a0 name:(id)a1 owner:(id)a2;
- (id)currentNode;
- (void)_pushReturnTransition:(id)a0;
- (id)_popReturnTransition;
- (void)postEvent:(id)a0 afterTimeout:(double)a1;
- (void)atomicHandleEvent:(id /* block */)a0;
- (void)atomicHandleEventAsync:(id /* block */)a0;
- (id)atomicQueue;
- (void)_cancelLastDelayedEvent;
- (void)traceObject:(id)a0 state:(id)a1;
- (id)previousNode;

@end
