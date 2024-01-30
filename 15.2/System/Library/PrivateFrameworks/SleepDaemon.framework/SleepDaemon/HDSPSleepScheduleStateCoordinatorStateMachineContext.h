@interface HDSPSleepScheduleStateCoordinatorStateMachineContext : NSObject

@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) BOOL isForWakeUpWithoutAlarm;
@property (readonly, nonatomic) BOOL isForAlarmTurnedOffWhileFiring;

+ (id)contextWithReason:(unsigned long long)a0;
+ (id)contextForWakeUpWithOutAlarm;
+ (id)contextForAlarmTurnedOffWhileFiring;

@end
