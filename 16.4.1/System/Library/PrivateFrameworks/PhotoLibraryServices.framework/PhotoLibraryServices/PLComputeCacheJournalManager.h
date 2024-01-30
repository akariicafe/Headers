@class PLLibraryServicesManager, NSObject, PLJournalManager;
@protocol OS_dispatch_queue;

@interface PLComputeCacheJournalManager : NSObject <PLJournalManager> {
    PLLibraryServicesManager *_lsm;
    PLJournalManager *_journalManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)name;
+ (BOOL)isEnabledWithPathManager:(id)a0 error:(id *)a1;
+ (id)_urlForLocation:(long long)a0 pathManager:(id)a1 createIfNeeded:(BOOL)a2 error:(id *)a3;
+ (id)baseURLFromPathManager:(id)a0;
+ (id)payloadClasses;

- (id)initWithLibraryServicesManager:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (BOOL)_archiveSnapshotWithError:(id *)a0;
- (id)_newTransientContext;
- (BOOL)_performSnapshotForPayloadClassIDs:(id)a0 error:(id *)a1;
- (BOOL)_recreateAllObjectsInLibrary:(id)a0 progress:(id)a1 error:(id *)a2;
- (BOOL)_recreateComputeCacheInManagedObjectContext:(id)a0 progress:(id)a1 error:(id *)a2;
- (BOOL)_removeLocation:(long long)a0 error:(id *)a1;
- (BOOL)_saveChangesInManagedObjectContext:(id)a0 reason:(id)a1;
- (BOOL)_snapshotJournalsForPayloadClassIDs:(id)a0 error:(id *)a1;
- (BOOL)_transferAndPrepareComputeCacheFromBackupToRestoreLocationWithError:(id *)a0;
- (BOOL)_transferToBackupLocationWithError:(id *)a0;
- (BOOL)backupJournalArchiveWithError:(id *)a0;
- (void)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 completionHandler:(id /* block */)a2;
- (BOOL)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 error:(id *)a2;
- (BOOL)recreateAllObjectsWithProgress:(id)a0 error:(id *)a1;
- (BOOL)snapshotJournalsForPayloadClassIDs:(id)a0 error:(id *)a1;
- (void)snapshotJournalsForPayloadClassIDs:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
