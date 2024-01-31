@interface RegistrationDataMigrator : DataClassMigrator

- (BOOL)performMigration;
- (float)estimatedDuration;
- (id)dataClassName;

@end
