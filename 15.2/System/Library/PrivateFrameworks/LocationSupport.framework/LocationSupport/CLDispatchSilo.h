@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
}

- (id)newTimer;
- (void)sync:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isSuspended;
- (id)getTimeCoercibleVariantInstance;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)async:(id /* block */)a0;
- (void)assertInside;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (id)operationQueue;
- (id)initMain;
- (void).cxx_destruct;
- (void)heartBeat:(id)a0;
- (BOOL)inPermissiveMode;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void)suspend;
- (double)currentLatchedAbsoluteTimestamp;
- (void)resume;
- (id)queue;
- (id)debugDescription;
- (void)assertOutside;

@end
