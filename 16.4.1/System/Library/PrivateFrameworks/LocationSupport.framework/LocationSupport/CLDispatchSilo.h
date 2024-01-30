@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}

- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (id)operationQueue;
- (BOOL)isSuspended;
- (id)initMain;
- (BOOL)inPermissiveMode;
- (id)getTimeCoercibleVariantInstance;
- (id)newTimer;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)assertOutside;
- (void)assertInside;
- (id)initWithIdentifier:(id)a0;
- (void)suspend;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)debugDescription;
- (id)queue;
- (void)async:(id /* block */)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (void)sync:(id /* block */)a0;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (void)heartBeat:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)intendToSync;

@end
