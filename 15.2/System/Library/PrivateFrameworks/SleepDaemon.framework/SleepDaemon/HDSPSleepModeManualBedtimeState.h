@interface HDSPSleepModeManualBedtimeState : HDSPSleepModeBedtimeState

- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0;
- (void)updateState;
- (void)_handleSleepFocusModeDeletionIfNecessary;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepFocusModeDidChange;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (id)stateName;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)a0;
- (unsigned long long)defaultChangeReason;

@end
