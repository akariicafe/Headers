@interface HDSPEnvironmentMigrationState : HDSPEnvironmentState

- (void)dataMigrationDidComplete;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;

@end
