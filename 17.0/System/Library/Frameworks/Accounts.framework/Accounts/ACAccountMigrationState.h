@interface ACAccountMigrationState : NSObject

@property (class, readonly, getter=isMigrationFinished) BOOL migrationFinished;

+ (id)_currentSystemVersion;
+ (BOOL)migrationFinishedForKey:(struct __CFString { } *)a0;
+ (void)writeMigrationVersionPref;
+ (void)writeMigrationVersionPrefForKey:(struct __CFString { } *)a0;

@end
