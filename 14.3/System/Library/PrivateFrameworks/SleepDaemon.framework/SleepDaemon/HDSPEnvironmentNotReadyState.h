@interface HDSPEnvironmentNotReadyState : HDSPEnvironmentState

- (void)updateState;
- (void)systemDidBecomeReady;
- (id)stateName;
- (void)enterMigrationOrReadyState;

@end
