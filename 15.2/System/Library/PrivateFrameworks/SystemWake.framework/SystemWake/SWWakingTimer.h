@class NSString, SWScheduledSystemWake, SWSystemSleepMonitor;
@protocol BSTimerScheduleQuerying, SWSystemSleepAssertionProviding, BSCancellable, BSInvalidatable;

@interface SWWakingTimer : NSObject <SWSystemSleepObserver, BSTimerScheduleQuerying, BSCancellable, BSInvalidatable> {
    SWScheduledSystemWake *_scheduledWake;
    SWSystemSleepMonitor *_sleepMonitor;
    id<SWSystemSleepAssertionProviding> _sleepAssertionProvider;
    id<BSInvalidatable> _preventSleepAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BSTimerScheduleQuerying, BSCancellable, BSInvalidatable> _lock_timer;
    id /* block */ _lock_handler;
    double _lock_leeway;
    BOOL _lock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled;
@property (readonly, nonatomic) double timeRemaining;

- (id)initWithIdentifier:(id)a0;
- (void)scheduleForDate:(id)a0 leewayInterval:(double)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)scheduleWithFireInterval:(double)a0 leewayInterval:(double)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)cancel;
- (void)systemSleepMonitor:(id)a0 sleepRequestedWithResult:(id /* block */)a1;
- (void)systemSleepMonitor:(id)a0 prepareForSleepWithCompletion:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 sleepMonitor:(id)a1 sleepAssertionProvider:(id)a2;

@end
