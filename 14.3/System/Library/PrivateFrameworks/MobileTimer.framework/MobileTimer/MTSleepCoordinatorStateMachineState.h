@class NSString;

@interface MTSleepCoordinatorStateMachineState : MTStateMachineState <MTSleepCoordinatorStateMachineEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (void)updateStateForSleepAlarm:(id)a0;
- (id)determineNextStateForSleepAlarm:(id)a0;
- (void)userWentToBed;
- (void)userWokeUp;
- (void)userBedTimeReached:(id)a0;
- (void)userWakeTimeReached:(id)a0;
- (void)userWakeUpAlarmFired;
- (void)wakeUpAlarmTimedOut;

@end
