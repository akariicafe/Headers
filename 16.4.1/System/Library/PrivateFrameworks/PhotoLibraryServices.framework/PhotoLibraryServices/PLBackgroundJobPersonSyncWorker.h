@class PLPhotoLibraryBundle, NSSet, NSPersistentHistoryToken;

@interface PLBackgroundJobPersonSyncWorker : PLBackgroundJobWorker {
    NSSet *_propertiesToIgnore;
}

@property (copy) NSPersistentHistoryToken *cancelledWorkItem;
@property (retain) PLPhotoLibraryBundle *testingSourceBundle;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)_isTokenInvalidError:(id)a0;
+ (BOOL)usesMultipleLibrariesConcurrently;

- (void)stopWorkingOnItem:(id)a0;
- (BOOL)isInterruptible;
- (id)_sourcePhotoLibraryWithName:(const char *)a0;
- (id)_anyPersistentHistoryTokenWithLibrary:(id)a0;
- (void)_deletePersonWithUuid:(id)a0 fromLibrary:(id)a1;
- (void)_updateLastPersonSyncSourceLibraryURLWithSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (id)_transactionIteratorSinceTokenIfValid:(id)a0 sourceLibrary:(id)a1 error:(id *)a2;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)_faceCropUuidsMissingFromList:(id)a0 inLibrary:(id)a1 error:(id *)a2;
- (BOOL)_syncFaceCropsFromLibrary:(id)a0 toLibrary:(id)a1 error:(id *)a2;
- (id)_faceCropUuidsFromLibrary:(id)a0 error:(id *)a1;
- (void)_syncPerson:(id)a0 toLibrary:(id)a1 completion:(id /* block */)a2;
- (id)_transactionIteratorSinceLastToken:(id)a0 sourceLibrary:(id)a1 error:(id *)a2;
- (BOOL)_resetPersonSyncInTargetLibrary:(id)a0 error:(id *)a1;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (BOOL)_shouldCancelCurrentWorkItem:(id)a0;
- (void)_resetFacesProcessingForPerson:(id)a0;
- (void)_savePersonSyncToken:(id)a0 toLibrary:(id)a1;
- (void)_setupPropertiesToIgnoreWithSourceLibrary:(id)a0;
- (void)_processNextPersonInChangedObjectIDs:(id)a0 fromSourceLibrary:(id)a1 toDestLibrary:(id)a2 group:(id)a3 workItem:(id)a4 deletedUuids:(id)a5 errorHandler:(id /* block */)a6;
- (id)_lastPersonSyncSourceLibraryURLFromSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)_resetCancelledWorkItem;
- (id)_lastPersonSyncTokenFromLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)a0 targetLibrary:(id)a1;

@end
