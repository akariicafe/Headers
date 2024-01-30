@interface PLAssetsdDebugClient : PLAssetsdBaseClient

- (id)momentGenerationStatus;
- (void)resetDupesAnalysis;
- (BOOL)cleanupEmptyHighlightsWithError:(id *)a0;
- (BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithError:(id *)a0;
- (BOOL)updateHighlightTitlesWithError:(id *)a0;
- (BOOL)processUnprocessedMomentLocationsWithError:(id *)a0;
- (BOOL)processRecentHighlightsWithError:(id *)a0;
- (void)unloadImageFilesForAsset:(id)a0 minimumFormat:(int)a1 completionHandler:(id /* block */)a2;
- (BOOL)rebuildMomentsDeletingExistingMoments:(BOOL)a0 error:(id *)a1;
- (BOOL)rebuildHighlightsDeletingExistingHighlights:(BOOL)a0 error:(id *)a1;
- (BOOL)dumpMetadataForMomentsWithOutputPath:(id)a0 metadataDirectory:(id *)a1 error:(id *)a2;
- (BOOL)allMomentsMetadataWithOutputPath:(id)a0 metadataDictionary:(id *)a1 error:(id *)a2;
- (id)deferredLogDumpWithFormat:(id)a0;
- (void)dropSearchIndexWithCompletionHandler:(id /* block */)a0;
- (id)getCPLState;
- (void)setSearchIndexPaused:(BOOL)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)synchronouslySetSearchIndexPaused:(BOOL)a0 reason:(id)a1 error:(id *)a2;
- (BOOL)rebuildSearchIndexWithError:(id *)a0;
- (void)rebuildCloudFeed;
- (id)getXPCTransactionStatus;
- (BOOL)revertToOriginalForAsset:(id)a0 error:(id *)a1;
- (BOOL)debugSidecarFileURLsForAsset:(id)a0 debugSidecarFileURLs:(id *)a1 error:(id *)a2;
- (void)pruneAssets:(id)a0 resourceTypes:(id)a1;
- (void)prefetchResourcesForMemories:(id)a0;
- (void)prefetchResourcesForHighlights:(id)a0;
- (void)prefetchResourcesWithMode:(long long)a0;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)a0 resourceType:(unsigned long long)a1 highPriority:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)identifyAssetsWithInconsistentCloudState;
- (void)recoverAssetsInInconsistentCloudState;
- (void)enqueuePrefetch;
- (void)rebuildAllThumbnails;
- (void)updateSiriVocabulary;
- (void)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 completionHandler:(id /* block */)a2;
- (void)snapshotJournalsForPayloadClassIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)clearPrefetchState;
- (id)getStatus;

@end
