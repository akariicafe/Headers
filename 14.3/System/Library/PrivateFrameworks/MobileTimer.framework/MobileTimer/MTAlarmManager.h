@class MTXPCConnectionProvider, MTMetrics, MTAlarmCache, NSNotificationCenter, MTAlarmManagerExportedObject;

@interface MTAlarmManager : NSObject

@property (retain, nonatomic) MTAlarmManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTAlarmCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;

+ (void)warmUp;
+ (id)_filterSleepAlarmOverrides:(id)a0 date:(id)a1;
+ (id)assistantSyncNotificationName;
+ (id)_sortedAlarms:(id)a0 date:(id)a1 includeBedtimeNotification:(BOOL)a2;
+ (id)_filteredAlarms:(id)a0 afterDate:(id)a1 maxCount:(unsigned long long)a2 filter:(id /* block */)a3;

- (void)checkIn;
- (id)sleepAlarms;
- (void)reconnect;
- (id)alarms;
- (id)sleepAlarm;
- (id)updateAlarm:(id)a0;
- (id)removeAlarm:(id)a0;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeBedtimeNotification:(BOOL)a2;
- (id)nextAlarm;
- (id)addAlarm:(id)a0;
- (id)init;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)alarmWithIDString:(id)a0 includeSleep:(BOOL)a1;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (void).cxx_destruct;
- (id)sleepAlarmSync;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (void)dealloc;
- (unsigned long long)indexForAlarm:(id)a0;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)nextAlarmsInRangeSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (void)_getCachedAlarmsWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)alarmsSyncIncludingSleepAlarm:(BOOL)a0;
- (id)updateSleepAlarms;
- (id)_alarmWithIDStringAsync:(id)a0;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)sleepAlarmsSync;
- (id)nextAlarmSync;
- (id)alarmWithIDString:(id)a0;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (id)alarmAtIndex:(unsigned long long)a0;
- (unsigned long long)firingAlarmCount;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeBedtimeNotification:(BOOL)a2;
- (id)_sortedNextAlarmsAfterDate:(id)a0 includeSleepAlarm:(BOOL)a1 includeBedtimeNotification:(BOOL)a2 doSynchronous:(BOOL)a3;
- (id)_nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3 doSynchronous:(BOOL)a4;
- (id)snoozeAlarmWithIdentifier:(id)a0 snoozeAction:(unsigned long long)a1;
- (unsigned long long)alarmCount;
- (id)nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)dismissAlarmWithIdentifier:(id)a0 dismissAction:(unsigned long long)a1;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)_alarmsIncludingSleepAlarm:(BOOL)a0 doSynchronous:(BOOL)a1;
- (id)nextSleepAlarm;
- (id)_sortedNextAlarmsAfterDate:(id)a0 includeSleepAlarm:(BOOL)a1 includeBedtimeNotification:(BOOL)a2;
- (id)nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextAlarmsInRangeSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (unsigned long long)alarmCountIncludingSleepAlarm:(BOOL)a0;
- (id)initWithMetrics:(id)a0;
- (id)snoozeAlarmWithIdentifier:(id)a0;
- (id)_nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3 doSynchronous:(BOOL)a4;
- (id)resetSleepAlarmSnoozeState;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1;
- (id)alarmsSync;

@end
