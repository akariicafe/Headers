@class HMAccessory, COTimerManager, COAlarmManager;

@interface HUAlarmsAndTimersAccessMonitor : NSObject

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) COAlarmManager *alarmManager;
@property (retain, nonatomic) COTimerManager *timerManager;

- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (id)canAccessAccessoryFor:(unsigned long long)a0;
- (id)_canAlarmManagerControlAccessory;
- (id)_canTimerManagerControlAccessory;

@end
