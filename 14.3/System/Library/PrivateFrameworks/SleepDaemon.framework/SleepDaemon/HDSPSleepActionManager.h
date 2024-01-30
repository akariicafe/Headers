@class NSString, HDSPEnvironment, HKSPObserverSet;
@protocol HDSPSource;

@interface HDSPSleepActionManager : NSObject <HDSPSleepAlarmObserver, HDSPSource, HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (BOOL)_isValidSnoozeDate:(id)a0;
+ (id)_latestDateInAlarms:(id)a0 dateBlock:(id /* block */)a1;

- (void)skipWindDownOnDate:(id)a0 source:(id)a1;
- (id)_notifyObserversForGoodMorningDismissed:(id)a0;
- (void)dismissGoodMorningOnDate:(id)a0 source:(id)a1;
- (void)sleepAlarmDidSnooze:(id)a0 source:(id)a1;
- (void).cxx_destruct;
- (void)skipBedtimeOnDate:(id)a0 source:(id)a1;
- (id)_notifyObserversForBedtimeDelay:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)addObserver:(id)a0;
- (void)dismissGoodMorning:(id)a0;
- (void)sleepAlarmsModified:(id)a0 source:(id)a1;
- (void)skipBedtime:(id)a0;
- (void)sleepAlarmWasModifiedBySource:(id)a0;
- (void)skipWindDown:(id)a0;
- (void)delayBedtimeUntilDate:(id)a0 source:(id)a1;
- (void)dismissSleepLock:(id)a0;
- (void)confirmAwakeNotificationOnDate:(id)a0 untilDate:(id)a1 source:(id)a2;
- (id)_notifyObserversForWakeUpConfirmed:(id)a0;
- (void)setSleepMode:(long long)a0 source:(id)a1;
- (void)sleepAlarmDismissedOnDate:(id)a0 source:(id)a1;
- (id)_notifyObserversForWindDownSkip:(id)a0;
- (void)sleepAlarmDidDismiss:(id)a0 source:(id)a1;
- (id)_notifyObserversForBedtimeSkip:(id)a0;
- (void)_updateSleepEventRecord:(id)a0 delayedNotifyBlock:(id /* block */)a1;
- (void)sleepAlarmSnoozedUntilDate:(id)a0 source:(id)a1;
- (void)environmentWillBecomeReady:(id)a0;
- (id)_notifyObserversForWakeUpAlarmDismissed:(id)a0;
- (void)delayBedtimeForTimeInterval:(double)a0 source:(id)a1;
- (id)_notifyObserversForWakeUpAlarmSnoozed:(id)a0;
- (void)confirmAwakeNotification:(id)a0;

@end
