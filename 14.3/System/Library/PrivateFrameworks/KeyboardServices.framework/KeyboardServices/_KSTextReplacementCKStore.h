@class NSString, _KSCloudKitManager, NSObject, _KSTextReplacementCoreDataStore;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol> {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property (retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore;
@property (nonatomic) BOOL ckMigrationStatusOnCloud;
@property (nonatomic) unsigned long long numPullRequests;
@property (retain, nonatomic) _KSCloudKitManager *cloudKitManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMigrationCompleted;

- (void)removeAllEntries;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (id)userIdentity;
- (unsigned long long)totalPullRequestsUntilNow;
- (void)_requestSync:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)importSampleShortcutsIfNecessary;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)queryDeletedEntries;
- (unsigned long long)decayedSyncCountForTime:(id)a0;
- (void)dealloc;
- (id)cloudEntriesFromLocalEntries:(id)a0;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (id)queryUpdatedLocalEntries;
- (void)pullRemoteDataWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (void)accountDidChange:(id)a0;
- (void)userDidDeleteRecordZone:(id)a0;
- (void)queryMigrationStatusOnCloudWithCallback:(id /* block */)a0;
- (id)cloudRecordIDsForLocalEntries:(id)a0;
- (void)pushAllLocalData;
- (void)pushLocalChangesWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)countLocalEntriesToBeSynced;
- (void)queryCloudIfFirstPullOrAccountChanged;
- (id)initWithDirectoryPath:(id)a0;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestSyncIfPendingLocalChanges;
- (id)localEntriesFromCloudEntries:(id)a0;
- (void)_updateSyncCount:(unsigned long long)a0 success:(BOOL)a1;
- (id)textReplacementEntries;
- (void)recordSyncStatus;
- (unsigned long long)getSyncCountThrottleThreshold;
- (void)removeAllEntriesWithCompletionHandler:(id /* block */)a0;
- (BOOL)isAccountAvailable;
- (unsigned long long)getSyncCount;
- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (void)pushMigrationStatusToCloud:(BOOL)a0;

@end
