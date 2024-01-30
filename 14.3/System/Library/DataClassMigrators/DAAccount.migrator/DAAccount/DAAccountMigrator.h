@interface DAAccountMigrator : DataClassMigrator

- (float)migrationProgress;
- (BOOL)performMigration;
- (float)estimatedDuration;
- (id)dataClassName;

@end
