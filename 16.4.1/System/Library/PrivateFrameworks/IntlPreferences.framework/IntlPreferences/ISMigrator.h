@class NSString;

@interface ISMigrator : NSObject

@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *previousVersion;
@property (copy, nonatomic) NSString *currentVersion;
@property (nonatomic) unsigned long long previousSchemaVersion;
@property (nonatomic) BOOL newUserAccount;

+ (unsigned long long)currentPlatform;
+ (id)migratorForNewUserAccountWithVersion:(id)a0;
+ (id)migratorFromSchemaVersion:(unsigned long long)a0;
+ (id)migratorFromVersion:(id)a0 toVersion:(id)a1;
+ (id)migratorFromVersion:(id)a0 toVersion:(id)a1 platform:(unsigned long long)a2;
+ (id)migratorFromVersion:(id)a0 toVersion:(id)a1 platform:(unsigned long long)a2 newUserAccount:(BOOL)a3;

- (void).cxx_destruct;
- (id)performMigrationForPreferences:(id)a0;
- (id)performMigrationForUserPreferences:(id)a0 systemPreferences:(id)a1;
- (BOOL)previousVersionIsOlderThanMacOS:(id)a0 iOS:(id)a1 watchOS:(id)a2 tvOS:(id)a3;

@end
