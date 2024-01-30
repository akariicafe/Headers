@class RBProcess, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, RBDaemonContextProviding;

@interface RBProcessReconnectManager : NSObject {
    id<RBDaemonContextProviding> _daemonContext;
    RBProcess *_originatorProcess;
    NSMutableSet *_currentAssertionIdentifiers;
    NSMutableSet *_pendingProcesses;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)initWithDaemonContext:(id)a0 originatorProcess:(id)a1;
- (id)debugDescription;
- (void)didInvalidateAssertion:(id)a0;
- (void)reconnectProcesses:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
