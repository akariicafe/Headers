@interface DAAccountMigrator : DataClassMigrator

- (BOOL)performMigration;
- (float)estimatedDuration;
- (float)migrationProgress;
- (id)dataClassName;

@end
