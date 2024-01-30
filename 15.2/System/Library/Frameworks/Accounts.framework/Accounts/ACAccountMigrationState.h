@interface ACAccountMigrationState : NSObject

@property (class, readonly, getter=isMigrationFinished) BOOL migrationFinished;

+ (void)writeMigrationVersionPref;
+ (id)_currentSystemVersion;

@end
