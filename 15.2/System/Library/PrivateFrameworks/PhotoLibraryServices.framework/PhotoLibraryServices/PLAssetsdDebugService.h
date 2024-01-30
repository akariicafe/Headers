@class NSString, PLAssetsdCPLResourceDownloader, PLPhotoLibraryBundleController;

@interface PLAssetsdDebugService : PLAbstractLibraryServicesManagerService <PLAssetsdDebugServiceProtocol> {
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
    PLPhotoLibraryBundleController *_bundleController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_persistentStoreCoordinator;
- (void)clearPrefetchState;
- (void)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 reply:(id /* block */)a2;
- (id)initWithLibraryServicesManager:(id)a0 resourceDownloader:(id)a1 bundleController:(id)a2;
- (void).cxx_destruct;
- (void)statusWithReply:(id /* block */)a0;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id /* block */)a0;
- (void)asynchronousUnloadImageFilesForAssetWithObjectURI:(id)a0 minimumFormat:(unsigned short)a1 reply:(id /* block */)a2;
- (void)identifyAssetsWithInconsistentCloudState;
- (void)recoverAssetsInInconsistentCloudState;
- (void)momentGenerationStatusWithReply:(id /* block */)a0;
- (void)rebuildMomentsDeletingExistingMoments:(BOOL)a0 reply:(id /* block */)a1;
- (void)rebuildHighlightsDeletingExistingHighlights:(BOOL)a0 reply:(id /* block */)a1;
- (void)dropSearchIndexWithReply:(id /* block */)a0;
- (void)dumpMetadataForMomentsToPath:(id)a0 reply:(id /* block */)a1;
- (void)dumpMomentsMetadataToPath:(id)a0 reply:(id /* block */)a1;
- (void)deferredLogDumpWithFormat:(id)a0 reply:(id /* block */)a1;
- (void)setSearchIndexPaused:(BOOL)a0 reason:(id)a1 reply:(id /* block */)a2;
- (void)rebuildSearchIndexWithReply:(id /* block */)a0;
- (void)rebuildCloudFeedWithReply:(id /* block */)a0;
- (void)rebuildAllThumbnails;
- (void)rebuildTableThumbsWithReply:(id /* block */)a0;
- (void)getXPCTransactionStatusWithReply:(id /* block */)a0;
- (void)enqueuePrefetch;
- (void)getTaskConstraintStatusWithReply:(id /* block */)a0;
- (void)getCPLStateForDebug:(BOOL)a0 withReply:(id /* block */)a1;
- (void)revertToOriginalWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (void)debugSidecarURLsWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (void)pruneAssetsWithUUID:(id)a0 resourceTypes:(id)a1 reply:(id /* block */)a2;
- (void)prefetchResourcesForMemories:(id)a0 reply:(id /* block */)a1;
- (void)prefetchResourcesForHighlights:(id)a0 reply:(id /* block */)a1;
- (void)prefetchResourcesWithMode:(long long)a0 reply:(id /* block */)a1;
- (void)resetDupesAnalysis;
- (void)processRecentHighlightsWithReply:(id /* block */)a0;
- (void)processUnprocessedMomentLocationsWithReply:(id /* block */)a0;
- (void)updateHighlightTitlesWithReply:(id /* block */)a0;
- (void)cleanupEmptyHighlightsWithReply:(id /* block */)a0;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)a0 resourceType:(unsigned long long)a1 highPriority:(BOOL)a2 reply:(id /* block */)a3;
- (void)snapshotJournalsForPayloadClassIDs:(id)a0 reply:(id /* block */)a1;
- (void)updateSiriVocabulary;

@end
