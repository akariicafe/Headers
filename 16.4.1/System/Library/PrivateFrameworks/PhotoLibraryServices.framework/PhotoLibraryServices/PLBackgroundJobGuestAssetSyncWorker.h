@class NSPersistentHistoryToken;

@interface PLBackgroundJobGuestAssetSyncWorker : PLBackgroundJobWorker

@property (copy) NSPersistentHistoryToken *cancelledWorkItem;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)_isTokenInvalidError:(id)a0;
+ (BOOL)usesMultipleLibrariesConcurrently;

- (id)_lastGuestAssetSyncTokenFromLibrary:(id)a0;
- (void)stopWorkingOnItem:(id)a0;
- (BOOL)isInterruptible;
- (id)_sourcePhotoLibraryWithName:(const char *)a0;
- (id)_anyPersistentHistoryTokenWithLibrary:(id)a0;
- (void)_saveGuestAssetSyncToken:(id)a0 toLibrary:(id)a1;
- (id)_transactionIteratorSinceTokenIfValid:(id)a0 sourceLibrary:(id)a1 error:(id *)a2;
- (id)_firstPersistenHistoryTokenInLibrary:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)_resetSyndicationProcessingInSourceLibrary:(id)a0 error:(id *)a1;
- (void)_markAsWasGuestAssetOnAssetWithSyndicationIdentifier:(id)a0 inLibrary:(id)a1;
- (void)_updateLastGuestAssetSyncTargetLibraryURLInSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (id)_transactionIteratorSinceLastToken:(id)a0 sourceLibrary:(id)a1 error:(id *)a2;
- (id)_lastGuestAssetSyncTargetLibraryURLFromSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)_processNextAssetInChangedObjectIDs:(id)a0 fromSourceLibrary:(id)a1 toDestLibrary:(id)a2 group:(id)a3 workItem:(id)a4 deletedUuids:(id)a5 errorHandler:(id /* block */)a6;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (BOOL)_shouldCancelCurrentWorkItem:(id)a0;
- (BOOL)_batchResetSyndicationProcessingInManagedObjectContext:(id)a0 error:(id *)a1;
- (void)_resetCancelledWorkItem;
- (BOOL)_checkSyndicationPreferencesEnabledAndCleanupGuestAssetsIfNeededWithPhotoLibrary:(id)a0;
- (void)_syncAsset:(id)a0 toLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)_batchResetGuestSavedAssetTypeInManagedObjectContext:(id)a0 error:(id *)a1;
- (void)_deleteAssetWithUuid:(id)a0 syndicationIdentifier:(id)a1 fromLibrary:(id)a2;
- (void).cxx_destruct;
- (BOOL)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)_deleteAllGuestAssetsInPhotoLibrary:(id)a0 reason:(id)a1;

@end
