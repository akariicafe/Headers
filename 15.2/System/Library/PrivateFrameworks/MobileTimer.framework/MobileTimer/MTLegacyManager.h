@class UNUserNotificationCenter, NSArray, Alarm, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MTLegacyManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSArray *scheduledNotifications;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) Alarm *sleepAlarm;
@property (nonatomic) double defaultDuration;
@property (copy, nonatomic) NSString *defaultSound;
@property (nonatomic) BOOL loaded;
@property (nonatomic) BOOL purged;

+ (id)sharedManager;
+ (id)alarmFromOldAlarm:(id)a0;
+ (id)_bundleIDForUNSchedule;
+ (unsigned long long)repeatScheduleFromOldAlarm:(id)a0;
+ (id)soundFromOldAlarm:(id)a0;
+ (id)_numberFromString:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_upgrade;
- (void)loadLegacyData;
- (void)purgeLegacyData;
- (void)cancelNotifications;
- (void)_loadUserPreferences;
- (void)_loadScheduledNotifications;
- (void)_upgradeFromSpringboardDefaults;
- (void)_loadAlarms;
- (void)_reconcileAlarmsAndNotifications;
- (void)_loadTimerDefaults;
- (BOOL)_upgradeIfNeverAttempted;
- (BOOL)_discardOldVersion;
- (BOOL)_upgradeAlarms;
- (BOOL)_upgradeTimers;
- (id)_copyLegacyAlarmsFromPreferences;
- (BOOL)_discardOldAlarms;
- (BOOL)_discardOldTimers;
- (id)_copyLegacySleepAlarmFromPreferences;
- (void)_purgeAlarmsAndTimers;
- (void)_cancelNotifications;

@end
