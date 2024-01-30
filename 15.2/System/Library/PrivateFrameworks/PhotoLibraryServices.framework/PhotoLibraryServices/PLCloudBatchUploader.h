@class NSMutableDictionary, NSString, PLLibraryServicesManager, NSMutableSet, NSMutableArray;

@interface PLCloudBatchUploader : NSObject {
    PLLibraryServicesManager *_lsm;
    NSMutableArray *_uploadBatchArray;
    NSMutableSet *_downloadedDeleteRecords;
    NSMutableSet *_cameraAsset;
    NSMutableDictionary *_recordsToDelete;
    NSString *_recordsToDeletePlistPath;
    NSMutableSet *_momentSharesNeedingForceSync;
}

@property BOOL initialUpload;
@property BOOL shouldGenerateDerivatives;

- (void)_cleanUploadedResources:(id)a0 inLibrary:(id)a1;
- (id)pop;
- (void)_sendAssets:(id)a0 toBatchManager:(id)a1 inLibrary:(id)a2;
- (void)handleUploadBatchesFromLocalEvent:(id)a0 outInsertedPhotoCount:(unsigned long long *)a1 outInsertedVideoCount:(unsigned long long *)a2 shouldTriggerPrefetch:(BOOL *)a3 withUploadTracker:(id)a4 inLibrary:(id)a5;
- (void)_sendAlbums:(id)a0 toBatchManager:(id)a1 inLibrary:(id)a2;
- (void)clearUploadArray;
- (void)_addAsset:(id)a0 toAssetChanges:(id)a1 isInsert:(BOOL)a2 seenAssetUuid:(id)a3;
- (id)_fetchChangesFromLocalEvent:(id)a0 shouldTriggerPrefetch:(BOOL *)a1 inLibrary:(id)a2;
- (void)_processInvalidScopeCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 inLibrary:(id)a3;
- (void)quarantineRecord:(id)a0 uploadTracker:(id)a1 inLibrary:(id)a2;
- (void)_addLocalResourcesToRecord:(id)a0 inLibrary:(id)a1;
- (BOOL)hasBatchesToUpload;
- (void)_sortRelationshipData:(id)a0 forUploadChanges:(id)a1 inManagedObjectContext:(id)a2;
- (id)_personsToUploadIncludingReverseOrderedMergeTargetsForPersons:(id)a0;
- (void)recordMomentSharesNeedingForceSync:(id)a0 inLibrary:(id)a1;
- (void)processMomentSharesNeedingForceSyncInLibrary:(id)a0;
- (void)uploadFullPhotoLibraryToCloud:(id)a0;
- (id)_validateAssets:(id)a0 fromCloudUuidDeleteList:(id)a1;
- (id)processCommitError:(id)a0 andFinalizeError:(id)a1 forUploadBatchContainer:(id)a2 withUploadTracker:(id)a3 inLibrary:(id)a4;
- (void)_processGenerateDerivativesCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 inLibrary:(id)a3;
- (void)_processInvalidExpungeableResourceTypesCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 inLibrary:(id)a3;
- (void)_processQuarantineRecordsCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 uploadTracker:(id)a3 inLibrary:(id)a4;
- (void)_promptToFileRadarWithTitle:(id)a0 description:(id)a1;
- (void)_quarantineObject:(id)a0 uploadTracker:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_clearSuccessfullyPushedDeletedRecords:(id)a0;
- (void)addBatches:(id)a0;
- (void)_processChangeToFullRecordCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 inLibrary:(id)a3;
- (void)tryToFixCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 uploadTracker:(id)a3 inLibrary:(id)a4;
- (void)_handleInvalidAsset:(id)a0;
- (void)_promptForNilAssetUUID:(id)a0 isInsert:(BOOL)a1;
- (void)_processInvalidResourceCopySourceCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 inLibrary:(id)a3;
- (void)_push:(id)a0;
- (BOOL)_updateDeletionRecordListForKey:(id)a0 removingRecordID:(id)a1;
- (void)_processAlbumInserts:(id)a0 albumChanges:(id)a1 withBatchManager:(id)a2 inLibrary:(id)a3;
- (id)createBatchesForChanges:(id)a0 outInsertedPhotoCount:(unsigned long long *)a1 outInsertedVideoCount:(unsigned long long *)a2 withUploadTracker:(id)a3 inLibrary:(id)a4;
- (void)_incrementUploadAttemptsAndPushStateForAssets:(id)a0;
- (id)_syncDescriptionForObject:(id)a0;
- (void)_pushBatches:(id)a0;
- (void)_processPendingObjects:(id)a0 withBatchManager:(id)a1 inLibrary:(id)a2;
- (BOOL)_validateAsset:(id)a0 onRelatedObject:(id)a1;
- (BOOL)_processRepushAlbumError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 inLibrary:(id)a3;
- (void)recordDeletions:(id)a0;
- (void)_sortData:(id)a0 isInsert:(BOOL)a1 forUploadChanges:(id)a2 shouldTriggerPrefetch:(BOOL *)a3 inManagedObjectContext:(id)a4;
- (BOOL)_validateAdditionalAssetAttributes:(id)a0 onRelatedObject:(id)a1;
- (unsigned long long)numberOfBatchesToUpload;
- (id)_getLocalRecordFromCPLRecord:(id)a0 inLibrary:(id)a1;
- (void)_sendOneBatch:(id)a0 toBatchManager:(id)a1 inLibrary:(id)a2;
- (void)_processIncludeMasterCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 inLibrary:(id)a3;
- (void)uploadDeletedRecordsFromPlist:(id)a0;

@end
