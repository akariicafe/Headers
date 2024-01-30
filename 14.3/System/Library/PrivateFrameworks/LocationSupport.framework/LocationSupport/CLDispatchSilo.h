@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    double _currentLatchedAbsoluteTimestamp;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
}

- (void)assertInside;
- (void)sync:(id /* block */)a0;
- (id)newTimer;
- (void)async:(id /* block */)a0;
- (void)assertOutside;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void).cxx_destruct;
- (id)operationQueue;
- (id)getTimeCoercibleVariantInstance;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isSuspended;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (BOOL)inPermissiveMode;
- (double)currentLatchedAbsoluteTimestamp;
- (id)queue;
- (void)resume;
- (void)updateLatchedAbsoluteTimestamp;
- (id)debugDescription;
- (id)initMain;
- (void)suspend;

@end
