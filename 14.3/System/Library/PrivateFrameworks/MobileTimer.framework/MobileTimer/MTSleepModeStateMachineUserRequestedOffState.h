@class NSDate;

@interface MTSleepModeStateMachineUserRequestedOffState : MTSleepModeStateMachineOffState

@property (retain, nonatomic) NSDate *keepOffUntilDate;

- (void)updateState:(BOOL)a0;
- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)a0;
- (BOOL)isEqualToState:(id)a0;
- (id)initWithKeepOffUntilDate:(id)a0 stateMachine:(id)a1;

@end
