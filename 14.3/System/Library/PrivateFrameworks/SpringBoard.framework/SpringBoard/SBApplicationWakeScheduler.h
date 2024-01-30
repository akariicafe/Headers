@class NSString, SBApplication, NSDate;
@protocol BSTimer, SBApplicationWakeLifecycleHandling;

@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable> {
    id<SBApplicationWakeLifecycleHandling> _lifecycleTracker;
    SBApplication *_application;
    BOOL _invalidated;
}

@property (retain, nonatomic) id<BSTimer> wakeTimer;
@property (retain, nonatomic) id<BSTimer> wakeSuspendTimer;
@property (readonly, nonatomic) NSDate *scheduledDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unschedule;
- (void)_applicationProcessStateDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)wakeImmediately;
- (void)scheduleWakeForDate:(id)a0;
- (id)_expectedFireDateForTimer:(id)a0;
- (id)_safelyScheduleTimerForDate:(id)a0 persistent:(BOOL)a1 handler:(id /* block */)a2;
- (void)endResumeIfAwoken;
- (id)_createPersistentTimerWithFireDate:(id)a0 handler:(id /* block */)a1;
- (id)_createTimerWithFireDate:(id)a0 handler:(id /* block */)a1;
- (id)_initWithLifecycleTracker:(id)a0 forApplication:(id)a1;
- (id)suspensionDate;
- (void)_forceInvalidate;

@end
