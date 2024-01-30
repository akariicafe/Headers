@class NSString, SBApplication, NSDate;
@protocol BSTimerScheduleQuerying, SBApplicationWakeLifecycleHandling, BSInvalidatable;

@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable> {
    id<SBApplicationWakeLifecycleHandling> _lifecycleTracker;
    SBApplication *_application;
    BOOL _invalidated;
}

@property (retain, nonatomic) id<BSTimerScheduleQuerying, BSInvalidatable> wakeTimer;
@property (readonly, nonatomic) NSDate *scheduledDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unschedule;
- (void)_applicationProcessStateDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)wakeImmediately;
- (void)scheduleWakeForDate:(id)a0;
- (id)_expectedFireDateForTimer:(id)a0;
- (void)endResumeIfAwoken;
- (id)_initWithLifecycleTracker:(id)a0 forApplication:(id)a1;
- (void)_forceInvalidate;

@end
