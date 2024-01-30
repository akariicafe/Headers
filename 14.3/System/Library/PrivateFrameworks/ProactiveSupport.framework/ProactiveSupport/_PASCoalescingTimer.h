@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface _PASCoalescingTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    double _leewaySeconds;
    id /* block */ _coalesceData;
    id /* block */ _operation;
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (void)_replaceCoalescingTimerUsingLockWitness:(id)a0;
- (void)cancelPendingOperations;
- (void)processData:(id)a0 afterStrictDelaySeconds:(double)a1;
- (void)immediatelyProcessData:(id)a0;
- (void)processData:(id)a0 afterDelaySeconds:(double)a1 coalescingBehavior:(unsigned char)a2;
- (id)initWithQueue:(id)a0 leewaySeconds:(double)a1 coalesceData:(id /* block */)a2 operation:(id /* block */)a3;
- (id)initWithQueue:(id)a0 coalesceData:(id /* block */)a1 operation:(id /* block */)a2;

@end
