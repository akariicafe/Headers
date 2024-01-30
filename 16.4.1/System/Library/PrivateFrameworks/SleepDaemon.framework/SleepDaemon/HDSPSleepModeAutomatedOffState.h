@interface HDSPSleepModeAutomatedOffState : _HDSPSleepModeTurnedOffState

- (id)stateName;
- (unsigned long long)defaultChangeReason;
- (void)sleepModeTurnedOnForUnknownReason;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;

@end
