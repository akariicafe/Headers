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

- (void)contentProtectionStateChanged:(int)a0 previousState:(int)a1;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (long long)_runMigrationStepsFromVersion:(int)a0 connection:(id)a1 schema:(id)a2;
- (long long)attachProtectedDatabaseWithConnection:(id)a0;
- (void)detachProtectedDatabaseWithConnection:(id)a0;
- (void)addPostMigrationBlock:(id /* block */)a0;
- (void)noteNeedsSpotlightReindex;
- (void)noteRebuildMessageInfoIndex;
- (void)noteNeedsRebuildTriggers;
- (void)resetTTRPromptAndForceReindex;
- (BOOL)_checkForeignKeysWithConnection:(id)a0;
- (BOOL)needsRebuildTriggers;
- (BOOL)needsRebuildMessageInfoIndex;
- (void)runPostMigrationBlocksWithConnection:(id)a0;
- (BOOL)needsSpotlightReindex;
- (long long)_checkContentProtectionState;
- (BOOL)migrateWithDatabaseConnection:(id)a0 schema:(id)a1;

@end
