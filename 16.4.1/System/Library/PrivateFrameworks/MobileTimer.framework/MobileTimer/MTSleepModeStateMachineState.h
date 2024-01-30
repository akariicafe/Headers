@class NSString;

@interface MTSleepModeStateMachineState : MTStateMachineState <MTSleepModeStateMachineEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState:(BOOL)a0;
- (id)determineNextState:(BOOL)a0;
- (id)nextSleepModeEndDate;
- (id)nextSleepModeEndDateAfterDate:(id)a0;
- (id)nextSleepModeStartDate;
- (id)nextSleepModeStartDateAfterDate:(id)a0;
- (void)sleepModeEnabled:(BOOL)a0 userRequested:(BOOL)a1 date:(id)a2;
- (void)updateModeKeepOffUntilDateIfNecessary;
- (void)userWokeUp;

@end
