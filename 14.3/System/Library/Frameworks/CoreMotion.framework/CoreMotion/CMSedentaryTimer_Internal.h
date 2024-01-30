@class NSObject;
@protocol OS_dispatch_queue;

@interface CMSedentaryTimer_Internal : NSObject {
    NSObject<OS_dispatch_queue> *fClientQueue;
    NSObject<OS_dispatch_queue> *fDaemonQueue;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
}

@property (nonatomic, getter=isTimerArmed) BOOL timerArmed;

- (void)_teardown;
- (id)init;
- (BOOL)_isActive;
- (void)dealloc;
- (void)_handleAlarmDataResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 withHandler:(id /* block */)a1;
- (void)_registerForAlarmsWithHandler:(id /* block */)a0;
- (void)_handleStartStopTimerResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 withHandler:(id /* block */)a1;

@end
