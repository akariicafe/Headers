@interface HDSPEnvironmentNotReadyState : HDSPEnvironmentState

- (void)systemDidBecomeReady;
- (void)updateState;
- (void)enterMigrationOrReadyState;
- (id)stateName;

@end
