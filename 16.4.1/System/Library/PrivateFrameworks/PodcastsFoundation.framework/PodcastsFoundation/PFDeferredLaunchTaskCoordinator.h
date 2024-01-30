@interface PFDeferredLaunchTaskCoordinator : NSObject {
    void /* unknown type, empty encoding */ _adminQueue;
    void /* unknown type, empty encoding */ _workQueue;
    void /* unknown type, empty encoding */ _tasks;
    void /* unknown type, empty encoding */ _deferring;
    void /* unknown type, empty encoding */ _timeoutScheduled;
}

@property (class, nonatomic, readonly) PFDeferredLaunchTaskCoordinator *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)scheduleDefaultDeferralDeadline;
- (void)deferWork:(id /* block */)a0;
- (void)deferWorkOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)scheduleDeferralDeadlineAfter:(double)a0;
- (void)stopDeferring;

@end
