@class MTAlarmStorage, MTAlarm, NSString;
@protocol MTSleepSessionTrackerDelegate;

@interface MTSleepSessionTracker : NSObject <MTSleepSessionTracker, MTSleepObserver, MTAgentNotificationListener>

@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) MTAlarm *cachedAlarm;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } alarmLock;
@property (weak, nonatomic) id<MTSleepSessionTrackerDelegate> sleepSessionTrackerDelegate;
@property (readonly, nonatomic) BOOL trackingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_trackingEnabledForSleepAlarm:(id)a0;

- (Class)sessionClass;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)startSession;
- (void)_withLock:(id /* block */)a0;
- (id)initWithAlarmStorage:(id)a0;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)prepare;
- (void).cxx_destruct;
- (void)endSessionWithDate:(id)a0 reason:(unsigned long long)a1;
- (void)sleepCoordinator:(id)a0 bedtimeReminderWasConfirmed:(id)a1 sleepAlarm:(id)a2;
- (void)sleepCoordinator:(id)a0 sleepAlarmDidChange:(id)a1;
- (void)sleepCoordinator:(id)a0 wakeUpAlarmWasDismissed:(id)a1 dismissAction:(unsigned long long)a2 sleepAlarm:(id)a3;
- (void)sleepCoordinator:(id)a0 waketimeWasReached:(id)a1 sleepAlarm:(id)a2;

@end
