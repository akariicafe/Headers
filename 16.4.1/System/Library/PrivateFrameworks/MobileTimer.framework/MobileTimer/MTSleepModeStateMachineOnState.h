@class NSDate;

@interface MTSleepModeStateMachineOnState : MTSleepModeStateMachineState

@property (readonly, nonatomic) NSDate *sleepModeEndDate;

- (BOOL)isEqualToState:(id)a0;
- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)a0;
- (id)initWithSleepModeEndDate:(id)a0 stateMachine:(id)a1;

@end
