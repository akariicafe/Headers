@class NSString, SWSystemSleepMonitor;

@interface ATThreadSafeHeadTracker : NSObject <SWSystemSleepObserver> {
    struct shared_ptr<ThreadSafeHeadTracker> { struct ThreadSafeHeadTracker *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
    SWSystemSleepMonitor *_sleepMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)systemSleepMonitorDidWakeFromSleep:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleSystemSleepMonitorDidWakeFromSleep;
- (id)initWithRateLimit:(float)a0 detectPredictionAnchor:(BOOL)a1 userContext:(void *)a2 factory:(void /* function */ *)a3 execution:(void /* function */ *)a4 finalizer:(void /* function */ *)a5;

@end
