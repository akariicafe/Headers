@class MTAlarmManager, NAFuture;

@interface HDSPMobileTimerBridge : NSObject

@property (readonly, nonatomic) MTAlarmManager *alarmManager;
@property (readonly, nonatomic) NAFuture *alarmServerReady;

+ (id)sleepScheduleModelFromSleepAlarm:(id)a0;
+ (BOOL)sleepAlarm:(id)a0 matchesSleepScheduleModel:(id)a1;

- (void)updateSleepAlarms;
- (void)resetSleepAlarmSnoozeState;
- (void)_alarmServerReady;
- (id)sleepAlarmsFuture;
- (id)sleepAlarmsFutureIgnoringCache:(BOOL)a0;
- (id)initWithAlarmManager:(id)a0;
- (void)_checkAlarmServer;
- (id)init;
- (void).cxx_destruct;

@end
