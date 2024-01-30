@interface DAAccountMigrator : DataClassMigrator

- (BOOL)performMigration;
- (float)migrationProgress;
- (float)estimatedDuration;
- (id)dataClassName;

@end
