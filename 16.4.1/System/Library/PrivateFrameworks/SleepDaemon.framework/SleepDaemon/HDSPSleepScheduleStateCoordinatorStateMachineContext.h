@interface HDSPSleepScheduleStateCoordinatorStateMachineContext : NSObject

@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) BOOL isForAlarmTurnedOffWhileFiring;

+ (id)contextForAlarmTurnedOffWhileFiring;
+ (id)contextWithReason:(unsigned long long)a0;

@end
