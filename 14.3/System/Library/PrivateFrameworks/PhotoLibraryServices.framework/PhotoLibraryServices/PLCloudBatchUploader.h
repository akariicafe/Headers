@class PLPhotoLibrary, NSMutableDictionary, NSMutableSet, NSString, NSMutableArray;

@interface PLCloudBatchUploader : NSObject {
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_uploadBatchArray;
    NSMutableSet *_downloadedDeleteRecords;
    NSMutableSet *_cameraAsset;
    NSMutableDictionary *_recordsToDelete;
    NSString *_recordsToDeletePlistPath;
    NSMutableSet *_momentSharesNeedingForceSync;
}

@property BOOL initialUpload;
@property BOOL shouldGenerateDerivatives;

- (void).cxx_destruct;
- (void)_push:(id)a0;
- (void)clearUploadArray;
- (void)addBatches:(id)a0;
- (BOOL)hasBatchesToUpload;
- (unsigned long long)numberOfBatchesToUpload;
- (void)_pushBatches:(id)a0;
- (void)recordDeletions:(id)a0;
- (BOOL)_validateAdditionalAssetAttributes:(id)a0 onRelatedObject:(id)a1;
- (void)_sortRelationshipData:(id)a0 forUploadChanges:(id)a1 inManagedObjectContext:(id)a2;
- (void)_sortData:(id)a0 isInsert:(BOOL)a1 forUploadChanges:(id)a2 shouldTriggerPrefetch:(BOOL *)a3 inManagedObjectContext:(id)a4;
- (BOOL)_validateAsset:(id)a0 onRelatedObject:(id)a1;
- (void)_promptToFileRadarWithTitle:(id)a0 description:(id)a1;
- (id)_syncDescriptionForObject:(id)a0;
- (void)_addAsset:(id)a0 toAssetChanges:(id)a1 isInsert:(BOOL)a2 seenAssetUuid:(id)a3;
- (void)_handleInvalidAsset:(id)a0;
- (void)_promptForNilAssetUUID:(id)a0 isInsert:(BOOL)a1;
- (id)_fetchChangesFromLocalEvent:(id)a0 shouldTriggerPrefetch:(BOOL *)a1;
- (void)handleUploadBatchesFromLocalEvent:(id)a0 outInsertedPhotoCount:(unsigned long long *)a1 outInsertedVideoCount:(unsigned long long *)a2 shouldTriggerPrefetch:(BOOL *)a3 withUploadTracker:(id)a4;
- (void)_processAlbumInserts:(id)a0 albumChanges:(id)a1 withBatchManager:(id)a2;
- (id)_validateAssets:(id)a0 fromCloudUuidDeleteList:(id)a1;
- (id)createBatchesForChanges:(id)a0 outInsertedPhotoCount:(unsigned long long *)a1 outInsertedVideoCount:(unsigned long long *)a2 withUploadTracker:(id)a3;
- (void)_incrementUploadAttemptsAndPushStateForAssets:(id)a0;
- (void)_sendOneBatch:(id)a0 toBatchManager:(id)a1;
- (void)_sendAlbums:(id)a0 toBatchManager:(id)a1;
- (void)_sendAssets:(id)a0 toBatchManager:(id)a1;
- (void)_processPendingObjects:(id)a0 withBatchManager:(id)a1;
- (id)_personsToUploadIncludingReverseOrderedMergeTargetsForPersons:(id)a0;
- (void)uploadDeletedRecordsFromPlist:(id)a0;
- (void)uploadFullPhotoLibraryToCloud;
- (void)_cleanUploadedResources:(id)a0;
- (id)_getLocalRecordFromCPLRecord:(id)a0;
- (void)_processChangeToFullRecordCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2;
- (void)_processIncludeMasterCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2;
- (void)quarantineRecord:(id)a0 uploadTracker:(id)a1;
- (void)_quarantineObject:(id)a0 uploadTracker:(id)a1;
- (void)_processQuarantineRecordsCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 uploadTracker:(id)a3;
- (void)_processInvalidScopeCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2;
- (BOOL)_processRepushAlbumError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2;
- (void)_processInvalidResourceCopySourceCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2;
- (void)_processInvalidExpungeableResourceTypesCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2;
- (void)_addLocalResourcesToRecord:(id)a0;
- (void)tryToFixCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2 uploadTracker:(id)a3;
- (void)_processGenerateDerivativesCommitError:(id)a0 inUploadBatch:(id)a1 forRecords:(id)a2;
- (BOOL)_updateDeletionRecordListForKey:(id)a0 removingRecordID:(id)a1;
- (void)_clearSuccessfullyPushedDeletedRecords:(id)a0;
- (id)processCommitError:(id)a0 andFinalizeError:(id)a1 forUploadBatchContainer:(id)a2 withUploadTracker:(id)a3;
- (void)recordMomentSharesNeedingForceSync:(id)a0;
- (void)processMomentSharesNeedingForceSync;
- (id)initWithLibrary:(id)a0;
- (id)pop;

@end
