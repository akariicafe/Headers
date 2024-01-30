@interface DMClientAPIController : NSObject

@property (nonatomic) unsigned long long connectionMigrationMaximumAttempts;
@property (nonatomic) double connectionMigrationTimeIntervalToLastRetryDate;

- (id)init;
- (BOOL)_migrateWithConnection:(id)a0 checkNecessity:(BOOL)a1 lastRelevantPlugin:(id)a2 testMigrationInfrastructureOnly:(BOOL)a3;

@end
