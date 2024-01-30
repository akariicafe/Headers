@interface HDSPSleepModeAutomatedOffState : _HDSPSleepModeTurnedOffState

- (void)updateState;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (id)stateName;
- (unsigned long long)defaultChangeReason;

@end
