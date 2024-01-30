@class PLPhotoLibrary, NSPersistentHistoryToken, NSObject, PLChangeHandlingNotificationObserver;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PLJournalManager : PLJournalManagerCore {
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibrary *_transientPhotoLibrary;
    PLChangeHandlingNotificationObserver *_changeHandlingNotificationObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_startupWaitGroup;
    unsigned short _state;
    NSPersistentHistoryToken *_currentHistoryToken;
    _Atomic BOOL _ignoreHistoryDuringSnapshot;
}

+ (id)entriesByPayloadClassIDFromHistoryToken:(id)a0 currentHistoryToken:(id *)a1 withManagedObjectContext:(id)a2 payloadIDsToSkipInserts:(id)a3 shouldStopBlock:(id /* block */)a4;
+ (Class)payloadClassForAdditionalEntityName:(id)a0;
+ (id)existingObjectWithID:(id)a0 managedObjectContext:(id)a1;
+ (id)payloadClasses;
+ (BOOL)assetJournalExists:(id)a0 error:(id *)a1;
+ (BOOL)existingJournalsCompatibleForRebuild:(id)a0 error:(id *)a1;

- (void)_start;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)_startAfterRebuild;
- (BOOL)forceFullSnapshot:(id *)a0;
- (void)_handleChangeHandlingNotificationWithTransaction:(id)a0;
- (void)_loadHistoryToken;
- (id)newTransientContext;
- (BOOL)_needSnapshot;
- (BOOL)_needFullSnapshot;
- (BOOL)_needPartialSnapshot:(id)a0;
- (BOOL)_performSnapshotsForceFull:(BOOL)a0 error:(id *)a1;
- (BOOL)_coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1;
- (BOOL)_appendEntriesByPayloadClassID:(id)a0 withCurrentHistoryToken:(id)a1;
- (BOOL)_replayFromCurrentHistoryToken;
- (void)_removeLegacyPersistedMetadataIfNecessary;
- (BOOL)_replayFromCurrentHistoryTokenWithPayloadIDsToSkipInserts:(id)a0;
- (void)recreateAllObjectsInManagedObjectContext:(id)a0 options:(unsigned char)a1;
- (void)_recreateAssetsInManagedObjectContext:(id)a0 options:(unsigned char)a1 progress:(id)a2;
- (void)_recreateNonAssetsInManagedObjectContext:(id)a0 progress:(id)a1;
- (id)assetsToImportFromAssetJournalInManagedObjectContext:(id)a0 outOnDiskURLs:(id)a1;
- (id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)a0 outOnDiskURLs:(id)a1;
- (void)stop;
- (void)_registerForChangeHandlingNotifications;
- (void)_unregisterForChangeHandlingNotifications;
- (void)start;
- (void)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 completionHandler:(id /* block */)a2;
- (void)snapshotJournalsForPayloadClassIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)recreateNonAssetsInManagedObjectContext:(id)a0 progress:(id)a1;
- (void)recreateAssetsInManagedObjectContext:(id)a0 options:(unsigned char)a1 progress:(id)a2;
- (void)notifyDidImportFileSystemAssets;
- (void)notifyWillImportFileSystemAssets;

@end
