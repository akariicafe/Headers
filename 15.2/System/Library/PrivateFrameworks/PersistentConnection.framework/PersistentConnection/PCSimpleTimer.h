@class NSString, PCDispatchTimer, NSDate, NSRunLoop, NSObject;
@protocol OS_dispatch_queue;

@interface PCSimpleTimer : NSObject {
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    double _earlyFireDelta;
    BOOL _triggerOnGMTChange;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    BOOL _userVisible;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL disableSystemWaking;
@property (nonatomic, getter=isUserVisible) BOOL userVisible;

+ (id)lastSystemWakeDate;
+ (double)currentMachTimeInterval;

- (void)scheduleInRunLoop:(id)a0;
- (void)_scheduleTimer;
- (void)_setPowerMonitoringEnabled:(BOOL)a0;
- (id)_getTimerMode;
- (id)userInfo;
- (void)_powerNotificationSleepIsNotImminent;
- (id)initWithAbsoluteTime:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 triggerOnGMTChange:(BOOL)a5;
- (void)updateFireTime:(double)a0 triggerOnGMTChange:(BOOL)a1;
- (void)_updateTimers;
- (void)scheduleInRunLoop:(id)a0 inMode:(id)a1;
- (void).cxx_destruct;
- (BOOL)firingIsImminent;
- (void)_significantTimeChange;
- (void)invalidate;
- (void)_invalidateAllowAsync:(BOOL)a0;
- (void)scheduleInQueue:(id)a0;
- (void)_performBlockOnQueue:(id /* block */)a0;
- (void)dealloc;
- (void)_preventSleepFired;
- (id)_getTimerRunLoop;
- (void)_powerNotificationSleepIsImminent;
- (void)_fireTimerFired;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)a0;
- (id)debugDescription;
- (BOOL)isValid;
- (id)initWithTimeInterval:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;

@end
