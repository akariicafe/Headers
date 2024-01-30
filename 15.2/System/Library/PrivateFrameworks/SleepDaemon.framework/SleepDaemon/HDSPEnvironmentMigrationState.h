@interface HDSPEnvironmentMigrationState : HDSPEnvironmentState

- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)dataMigrationDidComplete;
- (id)stateName;

@end
