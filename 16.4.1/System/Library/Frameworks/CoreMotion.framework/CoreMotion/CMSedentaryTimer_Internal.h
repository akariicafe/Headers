@class NSObject;
@protocol OS_dispatch_queue;

@interface CMSedentaryTimer_Internal : NSObject {
    NSObject<OS_dispatch_queue> *fClientQueue;
    NSObject<OS_dispatch_queue> *fDaemonQueue;
    void *fLocationdConnection;
}

@property (nonatomic, getter=isTimerArmed) BOOL timerArmed;

- (void)_teardown;
- (BOOL)_isActive;
- (void)dealloc;
- (id)init;
- (void)_handleAlarmDataResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 withHandler:(id /* block */)a1;
- (void)_handleStartStopTimerResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 withHandler:(id /* block */)a1;
- (void)_registerForAlarmsWithHandler:(id /* block */)a0;

@end
