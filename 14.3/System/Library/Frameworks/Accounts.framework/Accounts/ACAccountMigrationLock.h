@class CPExclusiveLock;

@interface ACAccountMigrationLock : NSObject <NSLocking> {
    CPExclusiveLock *_underlyingLock;
}

@property (class, readonly, getter=isMigrationFinished) BOOL migrationFinished;

+ (id)_currentSystemVersion;
+ (void)writeMigrationVersionPref;
+ (void)signalMigrationFinished;

- (void)unlock;
- (void)lock;
- (id)init;
- (void).cxx_destruct;

@end
