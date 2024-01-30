@class PLPhotoLibraryBundle, PLLocalCreationDateCreator, NSMutableDictionary, PLFrequentLocationManager, NSMutableArray, NSMutableOrderedSet, PLMomentGenerationThrottle, NSObject;
@protocol PLMomentGenerationDataManagement, OS_dispatch_queue, PLHighlightItemModelReader;

@interface PLMomentGeneration : NSObject {
    unsigned long long _inProgressCount;
    NSMutableOrderedSet *_pendingInsertsAndUpdates;
    NSMutableDictionary *_pendingDeletes;
    NSMutableOrderedSet *_pendingUpdatesForHighlights;
    NSMutableOrderedSet *_pendingMomentUpdatesForHighlights;
    NSMutableArray *_pendingCompletionBlocks;
    NSObject<OS_dispatch_queue> *_incrementalGenerationStateQueue;
    PLFrequentLocationManager *_frequentLocationManager;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    PLMomentGenerationThrottle *_incrementalMomentGenThrottle;
    PLPhotoLibraryBundle *_libraryBundle;
}

@property (readonly, weak, nonatomic) id<PLMomentGenerationDataManagement, PLHighlightItemModelReader> momentGenerationDataManager;

+ (id)dateIntervalsAroundSortedDates:(id)a0 minimumIntervalDuration:(double)a1;

- (id)momentGenerationStatus;
- (BOOL)regenerateMonthHighlightTitlesWithManager:(id)a0 error:(id *)a1;
- (id)_highlightGenerator;
- (BOOL)rebuildAllMomentsWithManager:(id)a0 error:(id *)a1;
- (BOOL)isGenerationPassInProgress;
- (void)updateHighlightTitlesWithCompletionBlock:(id /* block */)a0;
- (id)_detailsForMoment:(id)a0;
- (void).cxx_destruct;
- (void)_runMomentAndHighlightGenerationForAssets:(id)a0 hiddenAssets:(id)a1 updatedAssetIDsForHighlights:(id)a2 updatedMomentIDsForHighlights:(id)a3 affectedMoments:(id)a4 highlightsWithDeletedMoments:(id)a5 insertedOrUpdatedMoments:(id *)a6;
- (id)initWithMomentGenerationDataManager:(id)a0 bundle:(id)a1;
- (void)validateLibraryWithCompletionBlock:(id /* block */)a0;
- (void)_clearReplayLog;
- (BOOL)_isAsset:(id)a0 identicalToAssetForMoments:(id)a1;
- (id)allMomentsMetadataWriteToFile:(id)a0;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithForceUpdateLocale:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)_runIncrementalMomentGenerationIfItemsArePendingWithCompletion:(id /* block */)a0;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id /* block */)a0;
- (BOOL)_writeDetails:(id)a0 toFilepath:(id)a1 withDefaultFilename:(id)a2;
- (void)generateWithIncrementalDataCompletionHandler:(id /* block */)a0;
- (void)saveChangesForAssetInsertsAndUpdates:(id)a0 assetDeletes:(id)a1 assetUpdatesForHighlights:(id)a2 momentUpdatesForHighlights:(id)a3;
- (void)processUnprocessedMomentLocationsWithCompletionBlock:(id /* block */)a0;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)a0;
- (void)rebuildAllHighlightsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)processRecentHighlightsWithCompletionBlock:(id /* block */)a0;
- (void)cleanupEmptyHighlightsWithCompletionBlock:(id /* block */)a0;
- (void)_appendAssetsToReplayLog:(id)a0 forBatchUpdate:(BOOL)a1;
- (void)_updateIncrementalMomentGeneration;
- (void)generateWithAssetInsertsAndUpdates:(id)a0 assetDeletes:(id)a1 assetUpdatesForHighlights:(id)a2 momentUpdatesForHighlights:(id)a3 completionHandler:(id /* block */)a4;
- (void)rebuildAllMomentsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)_logEntryForAssets:(id)a0 isBatchUpdate:(BOOL)a1;
- (void)_runIncrementalGenerationPassWithCompletionHandler:(id /* block */)a0;
- (id)allAssetMetadataWriteToFile:(id)a0;
- (BOOL)_hasWorkWorkRemainingWithCompletionBlocks:(id *)a0;
- (id)_detailsForAsset:(id)a0 simpleOnly:(BOOL)a1;

@end
