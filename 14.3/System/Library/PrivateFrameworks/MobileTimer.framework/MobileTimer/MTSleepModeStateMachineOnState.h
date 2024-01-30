@class NSDate;

@interface MTSleepModeStateMachineOnState : MTSleepModeStateMachineState

@property (readonly, nonatomic) NSDate *sleepModeEndDate;

- (void).cxx_destruct;
- (id)initWithSleepModeEndDate:(id)a0 stateMachine:(id)a1;
- (void)didEnterWithPreviousState:(id)a0;
- (BOOL)isEqualToState:(id)a0;

@end
