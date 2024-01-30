@interface HDSPWakeDetectionWaitingState : HDSPWakeDetectionStateMachineState

- (id)stateName;
- (id)expirationDate;
- (BOOL)schedulesExpiration;

@end
