@interface HDSPEnvironmentNotReadyState : HDSPEnvironmentState

- (id)stateName;
- (id)_nextSystemReadyState;
- (void)systemDidBecomeReady;
- (id)nextStateWithContext:(id *)a0;

@end
