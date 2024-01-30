@class NSArray, MTAlarmManager, NAFuture, NSString;

@interface HDSPMobileTimerBridge : NSObject <HDSPSleepAlarmProvider>

@property (readonly, nonatomic) MTAlarmManager *alarmManager;
@property (readonly, nonatomic) NAFuture *alarmServerReady;
@property (readonly, nonatomic) NSArray *sleepAlarms;
@property (readonly, nonatomic) NAFuture *sleepAlarmsFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)sleepAlarm:(id)a0 matchesSleepScheduleModel:(id)a1;
+ (id)sleepScheduleModelFromSleepAlarm:(id)a0;

- (id)initWithAlarmManager:(id)a0;
- (id)init;
- (void)_checkAlarmServer;
- (void).cxx_destruct;
- (void)updateSleepAlarms;
- (id)sleepAlarmsIgnoringCache:(BOOL)a0;
- (void)_alarmServerReady;
- (void)resetSleepAlarmSnoozeState;

@end
