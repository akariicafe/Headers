@class NSMutableArray;
@protocol DADAgentStopStartControllerDelegate;

@interface DADAgentStopStartController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _agentsStopped;
    BOOL _unexecutedStopReceived;
    int _stopsLessStartsReceived;
    BOOL _blockEnqueued;
    int _generation;
    NSMutableArray *_pendingStopCompletionBlocks;
    NSMutableArray *_pendingStartCompletionBlocks;
    unsigned long long _serverToken;
    id<DADAgentStopStartControllerDelegate> _delegate;
}

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_blockNotEnqueuedAndPendingWork;
- (int)enqueueDisableMonitoringAgents:(id /* block */)a0;
- (BOOL)_blockShouldStart:(BOOL *)a0 shouldStop:(BOOL *)a1;
- (void)_enqueueBlockIfNotEnqueuedAndPendingWork;
- (void)callBlocks:(id)a0;
- (void)enqueueEnableMonitoringAgentsWithGeneration:(int)a0 completion:(id /* block */)a1;
- (void)startOrStopAsNeeded;

@end
