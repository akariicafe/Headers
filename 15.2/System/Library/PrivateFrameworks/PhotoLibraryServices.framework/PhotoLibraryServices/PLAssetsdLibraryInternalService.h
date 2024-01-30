@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdLibraryInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryInternalServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateReverseLocationDataOnAllAssetsWithReply:(id /* block */)a0;
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(id /* block */)a0;
- (void)setFetchFilterWithAssets:(id)a0 forApplication:(id)a1 withAuditToken:(struct { unsigned int x0[8]; })a2 completionHandler:(id /* block */)a3;
- (void)getSearchIndexProgressWithReply:(id /* block */)a0;
- (void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(id /* block */)a0;
- (void)repairMemoriesWithUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)getLibrarySizesFromDB:(BOOL)a0 reply:(id /* block */)a1;
- (void)getBackgroundJobServiceStatusCenterDumpWithReply:(id /* block */)a0;
- (void)forceRunBackgroundJobsOnLibraryPath:(id)a0 priority:(int)a1 completionHandler:(id /* block */)a2;
- (void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)metricsForLibraryAtURL:(id)a0 reply:(id /* block */)a1;
- (void)getAssetCountsWithReply:(id /* block */)a0;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (void)waitForSearchIndexExistenceWithReply:(id /* block */)a0;
- (void)getBackgroundJobServiceStateWithReply:(id /* block */)a0;
- (void)invalidateBehavioralScoreOnAllAssetsWithReply:(id /* block */)a0;
- (void)applyGraphUpdates:(id)a0 supportingData:(id)a1 reply:(id /* block */)a2;
- (void)updateAssetLocationDataWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)_assetCountInManagedObjectContext:(id)a0 forSyncedAssets:(BOOL)a1;
- (void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
- (void)applySearchIndexUpdates:(id)a0 reply:(id /* block */)a1;
- (void)getSizeOfResourcesToUploadByCPLWithReply:(id /* block */)a0;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(id /* block */)a0;
- (void)setAssetKeywords:(id)a0 forAssetUUID:(id)a1 reply:(id /* block */)a2;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)reloadMomentGenerationOptions;
- (void)resetLimitedLibraryAccessForApplication:(id)a0 completionHandler:(id /* block */)a1;

@end
