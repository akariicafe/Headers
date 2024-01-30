@interface HDSPEnvironmentMigrationState : HDSPEnvironmentState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)dataMigrationDidComplete;

@end
