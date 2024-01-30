@class _KSTextReplacementLegacyStore, NSString, _KSTextReplacementCKStore, NSObject;
@protocol OS_dispatch_queue, _KSTextReplacementSyncProtocol, _KSMigrationDelegate;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol> {
    NSObject<OS_dispatch_queue> *_migrationQueue;
}

@property (retain, nonatomic) _KSTextReplacementCKStore *ckStore;
@property (retain, nonatomic) _KSTextReplacementLegacyStore *legacyStore;
@property (retain, nonatomic) NSObject<_KSTextReplacementSyncProtocol> *textReplacementStore;
@property (copy, nonatomic) NSString *directoryPath;
@property (nonatomic) BOOL didMigrateForCurrentAccount;
@property (nonatomic) BOOL deviceDidMigrateOnCloud;
@property (nonatomic) BOOL didCheckMigrationOnCloud;
@property (weak, nonatomic) id<_KSMigrationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textReplacementStoreWithTestDirectory:(id)a0 withDelegate:(id)a1 forceMigration:(BOOL)a2 forceCloudKitSync:(BOOL)a3;

- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)accountDidChange:(id)a0;
- (void)checkForMigration;
- (void)migrateLegacyStore;
- (void)notifyTextReplacementDidChange;
- (id)initWithDirectoryPath:(id)a0;
- (void)resetMigrationState;
- (void)_migrateEntriesSinceDate:(id)a0 repeatCount:(unsigned long long)a1;
- (double)minimumUptimeRemaining;
- (void)recordSyncStatus;
- (void)respondToMigrationCompletion;
- (void)pushAllLocalRecordsOnceIfNeeded;
- (BOOL)deviceDidMigrate;

@end
