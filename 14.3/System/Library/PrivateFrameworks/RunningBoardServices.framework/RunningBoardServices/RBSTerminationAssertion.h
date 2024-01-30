@class RBSAssertion, RBSTerminateContext, RBSProcessPredicate, NSHashTable, RBSProcessMonitor;
@protocol RBSServiceLocalProtocol;

@interface RBSTerminationAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    RBSTerminateContext *_terminateContext;
    RBSProcessPredicate *_predicate;
    id<RBSServiceLocalProtocol> _service;
    unsigned long long _state;
    BOOL _processExists;
    NSHashTable *_observers;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL processExists;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)initWithPredicate:(id)a0 context:(id)a1 service:(id)a2;
- (BOOL)acquireWithError:(out id *)a0;
- (void)addObserver:(id)a0;
- (id)initWithTarget:(id)a0 context:(id)a1;
- (BOOL)invalidateWithError:(out id *)a0;
- (id)initWithPredicate:(id)a0 context:(id)a1;
- (void)invalidate;

@end
