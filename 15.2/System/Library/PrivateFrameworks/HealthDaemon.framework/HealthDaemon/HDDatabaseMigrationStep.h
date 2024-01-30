@class NSString;

@interface HDDatabaseMigrationStep : NSObject

@property (readonly, copy, nonatomic) id /* block */ migrationHandler;
@property (readonly, nonatomic) long long finalSchemaVersion;
@property (nonatomic) long long foreignKeyStatus;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly, nonatomic) long long requiredPrimarySchemaVersion;

+ (id)migrationStepWithForeignKeysDisabledFrom:(long long)a0 to:(long long)a1 handler:(id /* block */)a2;
+ (id)migrationStepFrom:(long long)a0 to:(long long)a1 handler:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeys:(long long)a3 handler:(id /* block */)a4;

@end
