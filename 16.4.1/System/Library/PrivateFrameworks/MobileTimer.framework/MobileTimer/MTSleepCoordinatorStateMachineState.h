@class NSString;

@interface MTSleepCoordinatorStateMachineState : MTStateMachineState <MTSleepCoordinatorStateMachineEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (id)determineNextStateForSleepAlarm:(id)a0;
- (void)updateStateForSleepAlarm:(id)a0;
- (void)userBedTimeReached:(id)a0;
- (void)userWakeTimeReached:(id)a0;
- (void)userWakeUpAlarmFired;
- (void)userWentToBed;
- (void)userWokeUp;
- (void)wakeUpAlarmTimedOut;

@end
