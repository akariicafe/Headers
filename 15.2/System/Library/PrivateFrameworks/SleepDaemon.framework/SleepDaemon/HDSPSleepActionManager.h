@class NSString, HDSPEnvironment, HKSPObserverSet;
@protocol HDSPSource;

@interface HDSPSleepActionManager : NSObject <HDSPSource, HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (BOOL)_isValidSnoozeDate:(id)a0;
+ (id)_latestDateInAlarms:(id)a0 dateBlock:(id /* block */)a1;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dismissGoodMorning;
- (void).cxx_destruct;
- (void)dismissGoodMorningOnDate:(id)a0;
- (void)sleepAlarmDismissedOnDate:(id)a0;
- (void)confirmAwakeNotification;
- (id)initWithEnvironment:(id)a0;
- (void)confirmAwakeNotificationOnDate:(id)a0 confirmUntilDate:(id)a1;
- (void)dismissSleepLock;
- (void)sleepAlarmWasModified;
- (void)confirmAwakeNotificationOnDate:(id)a0;
- (void)sleepAlarmSnoozedUntilDate:(id)a0;

@end
