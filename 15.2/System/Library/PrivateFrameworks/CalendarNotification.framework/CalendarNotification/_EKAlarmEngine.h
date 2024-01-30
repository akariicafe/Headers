@class EKTimedEventStorePurger, NSString, NSTimer, NSDateFormatter, NSDate, NSObject, RTRoutineManager;
@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
    int _lastDBSequence;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_nextFireDate;
    NSDate *_lastCheckpoint;
    BOOL _populating;
    NSDate *_populateStart;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    BOOL _needsAlarmTablePopulation;
    NSDateFormatter *_dateFormatter;
    RTRoutineManager *_routineManager;
    NSDate *_tomorrow;
    BOOL _shouldUpdateWithForceForAlarmTable;
    EKTimedEventStorePurger *_timedEventStorePurger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)requestedDarwinNotifications;

- (void)receivedAlarmNamed:(id)a0;
- (void)handleDarwinNotification:(id)a0;
- (void)_timerFired;
- (void)didRegisterForAlarms;
- (void)_installTimerWithFireDate:(id)a0;
- (void)_storeAlarms:(id)a0 nextScheduleLimit:(id)a1 eventStore:(id)a2;
- (void)_simulatedOffsetChanged:(id)a0;
- (void)_syncDidStart;
- (void)_rescheduleTimer;
- (id)_alertInfoAlarmIDFromSideAlarm:(id)a0;
- (id)_alertInfoAlarmIDFromEKAlarm:(id)a0;
- (void)_updateWithForceForAlarmTable:(BOOL)a0;
- (id)_dateFormatter;
- (void)_databaseChanged;
- (BOOL)_isAlarmAcknowledgedWithAcknowledgedDate:(id)a0 fireDate:(id)a1;
- (void)start;
- (id)_eventStore;
- (BOOL)_haveAlarmsChanged:(id)a0;
- (void)_killTimer;
- (void).cxx_destruct;
- (void)_syncTimerFired:(id)a0;
- (id)init;
- (void)_syncDidEnd;
- (BOOL)_isDataProtected;
- (void)_timeDidChangeSignificantly;
- (void)_notifyAlarmsFired:(id)a0;
- (BOOL)_populateAlarmTable:(id)a0;
- (void)_timeZoneChanged:(id)a0;
- (void)_populateFinished;
- (void)dealloc;
- (void)_protectedDataDidBecomeAvailable;
- (void)_killSyncTimer;
- (void)_resetSyncTimer;
- (void)_calendarNotificationSettingChanged;

@end
