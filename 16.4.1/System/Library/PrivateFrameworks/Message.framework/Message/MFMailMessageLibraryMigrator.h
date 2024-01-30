@class NSString, NSConditionLock, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue, MFMailMessageLibraryMigratorDelegate;

@interface MFMailMessageLibraryMigrator : NSObject <EFContentProtectionObserver, EFLoggable> {
    BOOL _needsSpotlightReindex;
    BOOL _needsRebuildTriggers;
    BOOL _needsRebuildMessageInfoIndex;
    NSMutableArray *_postMigrationBlocks;
}

@property (class, readonly) int currentVersion;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, weak, nonatomic) id<MFMailMessageLibraryMigratorDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) NSConditionLock *migrationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void).cxx_destruct;
- (long long)_checkContentProtectionState;
- (BOOL)_checkForeignKeysWithConnection:(id)a0;
- (long long)_runMigrationStepsFromVersion:(int)a0 connection:(id)a1 schema:(id)a2;
- (void)addPostMigrationBlock:(id /* block */)a0;
- (long long)attachProtectedDatabaseWithConnection:(id)a0;
- (void)detachProtectedDatabaseWithConnection:(id)a0;
- (BOOL)migrateWithDatabaseConnection:(id)a0 schema:(id)a1;
- (BOOL)needsRebuildMessageInfoIndex;
- (BOOL)needsRebuildTriggers;
- (BOOL)needsSpotlightReindex;
- (void)noteNeedsRebuildTriggers;
- (void)noteNeedsSpotlightReindex;
- (void)noteRebuildMessageInfoIndex;
- (void)resetTTRPromptAndForceReindex;
- (void)runPostMigrationBlocksWithConnection:(id)a0;

@end
