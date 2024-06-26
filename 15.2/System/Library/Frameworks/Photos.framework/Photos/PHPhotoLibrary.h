@class NSHashTable, PAVideoConversionServiceClient, PLPhotoLibraryBundle, PLPhotoKitVariationCache, PAImageConversionServiceClient, PLLazyObject, NSString, NSError, PLFileSystemVolume, PLPhotoAnalysisServiceClient, NSMutableDictionary, PLPhotoLibrary, CPLStatus, NSObject, PHPhotoLibraryAppPrivateData, PHPerformChangesRequest, PLAssetsdClient, PLCacheMetricsCollectorClient, NSURL, NSProgress, PHPersistentChangeToken, NSManagedObjectID;
@protocol PLPhotoAnalysisServiceTaxonomyResolver, OS_dispatch_queue;

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource, CPLStatusDelegate, PHPerformChangesRequest> {
    PLLazyObject *_lazyPhotoLibrary;
    PLLazyObject *_lazyMainQueueConcurrencyPhotoLibrary;
    PLLazyObject *_lazyMainQueuePhotoLibrary;
    PLLazyObject *_lazyBackgroundQueuePhotoLibrary;
    PLLazyObject *_lazyUserInitiatedQueuePhotoLibrary;
    PLLazyObject *_lazyBackgroundQueueObjectFetchingPhotoLibrary;
    PLLazyObject *_lazyChangeHandlingPhotoLibrary;
    PLLazyObject *_lazyAlbumRootFolderObjectID;
    PLLazyObject *_lazyProjectAlbumRootFolderObjectID;
    PLLazyObject *_lazyAppPrivateData;
    PLLazyObject *_lazyCacheMetricsCollectorClient;
    PLLazyObject *_lazyCPLStatus;
    PLLazyObject *_lazyIsReadyForAnalysis;
    PLFileSystemVolume *_libraryFileSystemVolume;
    _Atomic BOOL _isCompletedPostOpenInitialization;
    long long _wellKnownPhotoLibraryIdentifier;
    BOOL _postsPersistentHistoryChangedNotifications;
}

@property (class, readonly) const char *systemPhotoLibraryURLChangeNotificationName;
@property (class, readonly) const char *systemPhotoLibraryAvailableNotificationName;

@property (readonly, nonatomic) NSString *uuid;
@property (retain, nonatomic) id<PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLPhotoLibrary *changeHandlingPhotoLibrary;
@property (readonly) PLPhotoLibrary *mainQueuePhotoLibrary;
@property (readonly) PLPhotoLibrary *userInitiatedQueuePhotoLibrary;
@property (readonly) PLPhotoLibrary *backgroundQueuePhotoLibrary;
@property (readonly) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary;
@property (readonly) PLPhotoLibrary *transactionPhotoLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;
@property (retain, nonatomic) PHPerformChangesRequest *performChangesRequest;
@property (retain, nonatomic) NSHashTable *fetchResults;
@property (retain, nonatomic) NSHashTable *internalObservers;
@property (retain, nonatomic) NSHashTable *externalObservers;
@property (retain, nonatomic) NSMutableDictionary *changeNotificationInfo;
@property (nonatomic) BOOL unknownMergeEvent;
@property (nonatomic) BOOL isChangeProcessingPending;
@property (nonatomic) double lastChangeProcessingStarted;
@property (retain, nonatomic) NSHashTable *availabilityObservers;
@property (retain) NSError *unavailabilityReason;
@property (readonly, nonatomic) NSManagedObjectID *albumRootFolderObjectID;
@property (readonly, nonatomic) NSManagedObjectID *projectAlbumRootFolderObjectID;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) long long wellKnownPhotoLibraryIdentifier;
@property (readonly, nonatomic) BOOL isSystemPhotoLibrary;
@property (readonly, nonatomic) BOOL isCloudPhotoLibrary;
@property (readonly, nonatomic, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property (readonly, nonatomic) BOOL isReadOnlyCloudPhotoLibrary;
@property (readonly, nonatomic) CPLStatus *cplStatus;
@property (readonly, nonatomic) NSURL *photoLibraryURL;
@property (readonly) PLPhotoLibraryBundle *photoLibraryBundle;
@property (readonly) PLPhotoKitVariationCache *variationCache;
@property (readonly, nonatomic) PLPhotoLibrary *mainQueueConcurrencyPhotoLibrary;
@property (readonly, nonatomic) NSProgress *postOpenProgress;
@property (readonly, nonatomic) PHPhotoLibraryAppPrivateData *appPrivateData;
@property (nonatomic) BOOL clearsOIDCacheAfterFetchResultDealloc;
@property (readonly, nonatomic) PLPhotoAnalysisServiceClient *photoAnalysisClient;
@property (readonly, nonatomic) PLAssetsdClient *assetsdClient;
@property (readonly, nonatomic) PLCacheMetricsCollectorClient *cacheMetricsCollector;
@property (retain, nonatomic) PAImageConversionServiceClient *imageConversionServiceClient;
@property (retain, nonatomic) PAVideoConversionServiceClient *videoConversionServiceClient;
@property BOOL postsPersistentHistoryChangedNotifications;
@property (readonly, nonatomic) PHPersistentChangeToken *currentToken;
@property (readonly, nonatomic) BOOL isReadyForAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)requestAuthorization:(id /* block */)a0;
+ (long long)authorizationStatusForAccessLevel:(long long)a0;
+ (id)predicateForAssetsAnalyzedForFacesWithAssetObjectIDs:(id)a0;
+ (id)uniquedOID:(id)a0;
+ (Class)classForFetchType:(id)a0;
+ (id)sharedPhotoLibrary;
+ (BOOL)isMultiLibraryModeEnabled;
+ (id)openPhotoLibraryWithWellKnownIdentifier:(long long)a0 error:(id *)a1;
+ (Class)PHObjectClassForEntityName:(id)a0;
+ (id)stringFromPHPhotoLibraryType:(unsigned short)a0;
+ (BOOL)_isInternalObserver:(id)a0;
+ (void)requestAuthorizationForAccessLevel:(long long)a0 handler:(id /* block */)a1;
+ (void)removeAllUniquedOIDs;
+ (id)sharedLazyPhotoLibraryForCMM;
+ (id)imagePickerPhotoLibrary;
+ (BOOL)setImagePickerPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)uniquedOIDsFromObjects:(id)a0;
+ (long long)_photosAccessAllowedForAccessLevel:(long long)a0;
+ (void)_requestAuthorizationForAccessLevel:(long long)a0 supportsLimited:(BOOL)a1 handler:(id /* block */)a2;
+ (void)_forceUserInterfaceReload;
+ (void)enableMultiLibraryMode;
+ (BOOL)createOrUpgradePhotoLibraryWithWellKnownIdentifier:(long long)a0 error:(id *)a1;
+ (BOOL)setSystemPhotoLibraryURL:(id)a0 error:(id *)a1;
+ (id)fetchTypeForLocalIdentifierCode:(id)a0;
+ (id)PHObjectClassesByEntityName;
+ (id)PHObjectClasses;
+ (Class)PHObjectClassForOID:(id)a0;
+ (id)_effectiveRootEntity:(id)a0;
+ (id)uniqueObjectIDCache;
+ (void)setNeedsToRepairKeyCuratedAssetForMemories:(id)a0;
+ (void)assertRunningInExtension;
+ (BOOL)hasSharedPhotoLibrary;
+ (void)setSharedPhotoLibrary:(id)a0;
+ (id)uniquedOIDs:(id)a0;
+ (BOOL)isSystemPhotoLibraryURL:(id)a0;
+ (double)nextOverrideTimeIntervalForSystemBudgets:(unsigned long long)a0;
+ (id)photoLibraryForCurrentTransaction;
+ (void)assertTransaction;
+ (id)systemPhotoLibraryURL;
+ (id)sharedMomentSharePhotoLibrary;
+ (unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)a0 error:(id *)a1;
+ (id)sharedContactStore;
+ (BOOL)checkAuthorizationStatusForAPIAccessLevel:(long long)a0;
+ (id)wellKnownPhotoLibraryURLForIdentifier:(long long)a0;
+ (BOOL)shouldDisplayMergeCandidates:(id)a0 forPerson:(id)a1;
+ (long long)authorizationStatus;
+ (long long)collectionListTypeForIdentifierCode:(id)a0;
+ (id)_sharedPhotoLibrary;

- (void)unregisterChangeObserver:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (id)pathManager;
- (id)managedObjectContext;
- (id)allowedEntities;
- (void)requestSyndicationProcessingWithOptions:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)countOfUnclusteredFaces;
- (id)inferredContactByPersonLocalIdentifierForPersonLocalIdentifiers:(id)a0;
- (void)close;
- (id)photoLibraryForCurrentQueueQoS;
- (BOOL)_preflightRequest:(id)a0 withError:(id *)a1;
- (void)performCancellableChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)performCancellableChangesAndWait:(id /* block */)a0 error:(id *)a1;
- (id)urlForApplicationDataFolderIdentifier:(long long)a0;
- (id)queryForType:(id)a0 withIdentifiers:(id)a1 local:(BOOL)a2;
- (id)fetchedObjectsForOIDs:(id)a0 propertySetClass:(Class)a1;
- (id)fetchPHObjectsForUUIDs:(id)a0 entityName:(id)a1;
- (void)accountDidChange:(id)a0;
- (void)_addObserver:(id)a0;
- (id)fetchDictionariesByPHClassForOIDs:(id)a0 propertyHint:(unsigned long long)a1 includeTrash:(BOOL)a2 overrideWithPHClass:(Class)a3;
- (void)handleMergeNotification:(id)a0;
- (id)fetchPersistentChangesSinceToken:(id)a0 error:(id *)a1;
- (id)fetchPersistentChangesWithRequest:(id)a0 error:(id *)a1;
- (id)_fetchPersistentChangesSinceToken:(id)a0 maximumChangeThreshold:(unsigned long long)a1 error:(id *)a2;
- (void)_removeObserver:(id)a0;
- (void)_notifyPersistentChangeObservers;
- (void)_callLegacyCompletionTarget:(id)a0 completionSelector:(SEL)a1 contextInfo:(void *)a2 withSuccess:(BOOL)a3 error:(id)a4;
- (void)legacySaveImageDataToCameraRoll:(id)a0 completionTarget:(id)a1 completionSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)legacySaveVideoToCameraRoll:(id)a0 completionTarget:(id)a1 completionSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)legacySaveImageToCameraRoll:(id)a0 completionTarget:(id)a1 completionSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)legacySaveScreenshotToCameraRoll:(id)a0 completionTarget:(id)a1 completionSelector:(SEL)a2 contextInfo:(void *)a3;
- (id)migrationDate;
- (id)_assetOIDsForHighlight:(id)a0 withContext:(id)a1;
- (unsigned long long)countOfUnprocessedFaceCrops;
- (void)_processPendingChanges;
- (BOOL)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)a0 withError:(id *)a1;
- (void)requestGenerateQuestionsWithOptions:(id)a0 reply:(id /* block */)a1;
- (double)_analysisProgressForHighlight:(id)a0 fetchCountBlock:(id /* block */)a1;
- (void)requestGraphRebuildWithOptions:(id)a0 progress:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)countOfDirtyFaceGroups;
- (unsigned long long)countOfFaceCropsToBeGenerated;
- (id)newUnclusteredFacesFetchOptions;
- (BOOL)requestAssetRevGeocodingWithError:(id *)a0;
- (void)simulateMemoriesNotificationWithOptions:(id)a0 reply:(id /* block */)a1;
- (BOOL)photoAnalysisClientAllowed;
- (BOOL)requestHighlightCollectionEnrichmentWithOptions:(id)a0 error:(id *)a1;
- (int)requestProcessingTypes:(unsigned long long)a0 forAssetsWithLocalIdentifiers:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)countOfReferencedMediaWithCompletionHandler:(id /* block */)a0;
- (void)statusDidChange:(id)a0;
- (id)pl_syncProgressAlbums;
- (id)fetchPHObjectsForOIDs:(id)a0 propertyHint:(unsigned long long)a1 includeTrash:(BOOL)a2 overrideResultsWithClass:(Class)a3;
- (id)changeRequestForUUID:(id)a0;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 withOptions:(id)a3 error:(id *)a4;
- (id)sceneTaxonomyDetectorNodeSceneIDsFromSceneID:(unsigned int)a0 sceneTaxonomy:(id)a1;
- (void)performChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)_observerCount;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 withOptions:(id)a2 error:(id *)a3;
- (id)requestSynonymsDictionariesWithError:(id *)a0;
- (id)_lazyPhotoLibrary;
- (id)objectFetchingManagedObjectContextForObject:(id)a0 propertySet:(id)a1;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)requestHighlightEnrichmentWithOptions:(id)a0 error:(id *)a1;
- (id)requestGraphSearchMetadataWithOptions:(id)a0 error:(id *)a1;
- (id)newFaceCropsToBeGeneratedFetchOptions;
- (id)newClusteringEligibleFacesFetchOptions;
- (void)requestTotalProgressCountsWithCompletion:(id /* block */)a0;
- (void)_requestAnalysisProgressWithCompletion:(id /* block */)a0;
- (void)requestAnalysisProgressCountsWithCompletion:(id /* block */)a0;
- (double)faceAnalysisProgressForHighlight:(id)a0 error:(id *)a1;
- (id)assetUUIDsAllowedForCurationFromAssets:(id)a0;
- (void).cxx_destruct;
- (BOOL)performChangesAndWait:(id /* block */)a0 error:(id *)a1;
- (void)assertTransaction;
- (id)fetchPHObjectsForOIDs:(id)a0;
- (id)faceAnalysisProgressCounts;
- (id)analysisProgressCountsForWorkerType:(short)a0;
- (double)ratioOfAssetsAtOrAboveSceneAnalysisVersion:(short)a0;
- (double)ratioOfAssetsWithScenesProcessed;
- (double)ratioOfAssetsWithFacesProcessed;
- (double)ratioOfAssetsWithFullAnalysisProcessed;
- (double)sceneAnalysisProgressForHighlight:(id)a0 usingSceneVersion:(short)a1;
- (id)init;
- (BOOL)requestEnrichmentWithOptions:(id)a0 error:(id *)a1;
- (id)librarySpecificFetchOptions;
- (id)initSharedLibrary;
- (id)initMomentShareLibrary;
- (id)_initializeAppPrivateData;
- (BOOL)_postOpenInitializationWithError:(id *)a0;
- (void)closeWithReason:(id)a0;
- (id)fetchUpdatedObject:(id)a0;
- (id)initWithPhotoLibraryURL:(id)a0;
- (id)initWithPLPhotoLibrary:(id)a0 type:(unsigned short)a1;
- (id)sharingSuggestionWithRandomPick:(BOOL)a0 fallbackToRecentMoments:(BOOL)a1 needsNotification:(BOOL)a2;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 withOptions:(id)a2 error:(id *)a3;
- (id)libraryID;
- (void)_endTransaction;
- (BOOL)createPhotoLibraryWithError:(id *)a0;
- (BOOL)createPhotoLibraryWithOptions:(unsigned long long)a0 error:(id *)a1;
- (BOOL)createPhotoLibraryUsingOptions:(id)a0 error:(id *)a1;
- (BOOL)createOrUpgradeLibraryUsingOptions:(id)a0 error:(id *)a1;
- (BOOL)shouldMobileSlideShowLaunchWithError:(id *)a0;
- (id)plLibraryOptionsFromPHOptions:(id)a0 createOptions:(unsigned long long *)a1;
- (BOOL)openAndWaitWithUpgrade:(BOOL)a0 options:(id)a1 error:(id *)a2;
- (BOOL)openAndWaitWithUpgrade:(BOOL)a0 error:(id *)a1;
- (id)bfa_photoLibrary;
- (id)_getCloudClient;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)a0 error:(id *)a1;
- (id)highlightDebugInformationForHighlightWithLocalIdentifier:(id)a0 error:(id *)a1;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)a0 error:(id *)a1;
- (id)curationDebugInformationForAssetCollectionWithLocalIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (id)graphStatusDescription:(id *)a0;
- (id)suggestedContactsForPersonLocalIdentifier:(id)a0;
- (id)inferredContactForPersonLocalIdentifier:(id)a0;
- (id)bfa_tombstoneObjectForOID:(id)a0 uuid:(id)a1 propertyHint:(unsigned long long)a2 overrideResultsWithClass:(Class)a3;
- (id)bfa_fetchObjectsForOIDs:(id)a0 propertyHint:(unsigned long long)a1 overrideResultsWithClass:(Class)a2;
- (id)bfa_fetchedObjectsForOIDs:(id)a0 propertySetClass:(Class)a1;
- (id)upgradePhotoLibraryUsingOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)isPHPhotoLibraryForCMM;
- (id)initWithPLPhotoLibrary:(id)a0;
- (id)initWithPhotoLibraryURL:(id)a0 type:(unsigned short)a1;
- (id)initWithPhotoLibraryBundle:(id)a0 type:(unsigned short)a1;
- (void)_invalidateEverythingWithReason:(id)a0;
- (id)_initializeCPLStatus;
- (id)_initializeIsReadyForAnalysis;
- (id)pl_photoLibraryForCMM;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)a0 andRelatedAssetCollectionForLocalIdentifier:(id)a1 options:(id)a2 precision:(unsigned long long)a3 relatedType:(unsigned long long)a4 error:(id *)a5;
- (id)sharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)a0 error:(id *)a1;
- (void)requestHighlightEstimatesWithCompletion:(id /* block */)a0;
- (id)exportGraphForPurpose:(id)a0 error:(id *)a1;
- (id)mainQueueManagedObjectContext;
- (id)objectFetchingContextForCurrentQueueQoS;
- (void)registerFetchResult:(id)a0;
- (void)unregisterFetchResult:(id)a0;
- (void)registerAvailabilityObserver:(id)a0;
- (void)unregisterAvailabilityObserver:(id)a0;
- (void)_startWatchingForLibraryAvailability;
- (void)_handleLibraryBecameUnavailable:(id)a0 reason:(id)a1;
- (id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)a0 andRelatedAssetCollectionForLocalIdentifier:(id)a1 options:(id)a2 precision:(unsigned long long)a3 relatedType:(unsigned long long)a4 error:(id *)a5;
- (id)sharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)a0 error:(id *)a1;
- (id)graphStatisticsDescription:(id *)a0;
- (BOOL)isFaceProcessingFinished;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_getPhotoKitClient;
- (id)_cloudIdentifierKeysByFetchType;
- (id)_getAssetLocalIdentifiersByFingerPrintForFingerPrints:(id)a0;
- (id)_fingerPrintsForAssetUUIDs:(id)a0;
- (id)_computeFingerprintsForAssetsWithObjectIDsByUUID:(id)a0;
- (id)lookupLocalIdentifiersForCloudIdentifiers:(id)a0;
- (void)_beginTransaction;
- (void)recordDeleteRequest:(id)a0;
- (void)_stopWatchingForLibraryAvailability;
- (void)_startWatchingFileSystemVolumeForLibraryAvailability;
- (void)_stopWatchingFileSystemVolumeForLibraryAvailability;
- (void)_startObservingServiceConnectionInvalidated;
- (void)_stopObservingServiceConnectionInvalidated;
- (void)_handleServiceConnectionClosed:(id)a0;
- (BOOL)invalidateTransientGraphCachesAndReturnError:(id *)a0;
- (BOOL)invalidatePersistentGraphCachesAndReturnError:(id *)a0;
- (void)requestGraphRebuildWithProgress:(id)a0 completion:(id /* block */)a1;
- (void)requestGraphRebuildProgressWithCompletion:(id /* block */)a0;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)requestSearchIndexUpdates:(id)a0 withCompletion:(id /* block */)a1;
- (void)runPFLWithAttachments:(id)a0 recipeUserInfo:(id)a1 resultBlock:(id /* block */)a2;
- (void)requestSearchIndexGraphUpdates:(id)a0 supportingData:(id)a1 withCompletion:(id /* block */)a2;
- (id)sortedArrayOfPersonIdentifiers:(id)a0 error:(id *)a1;
- (id)allSocialGroupsForPersonIdentifier:(id)a0 error:(id *)a1;
- (id)socialGroupsForPersonIdentifiers:(id)a0 error:(id *)a1;
- (id)assetIdentifiersForPersonIdentifiers:(id)a0 error:(id *)a1;
- (void)recordInsertRequest:(id)a0;
- (id)requestZeroKeywordsWithOptions:(id)a0 error:(id *)a1;
- (id)suggestedMePersonIdentifierWithError:(id *)a0;
- (void)personPromotionProcessingStatusForUserInterface:(id /* block */)a0;
- (id)suggestionsForPersonLocalIdentifier:(id)a0 clusterSequenceNumbers:(id)a1 excludePersonLocalIdentifiers:(id)a2 minimumSuggestionFaceCount:(unsigned long long)a3;
- (id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)lookupCloudIdentifiersForLocalIdentifiers:(id)a0;
- (id)localIdentifierMappingsForCloudIdentifiers:(id)a0;
- (id)cloudIdentifierMappingsForLocalIdentifiers:(id)a0;
- (id)localIdentifiersForCloudIdentifiers:(id)a0;
- (id)cloudIdentifiersForLocalIdentifiers:(id)a0;
- (void)_importIntoLibraryWithAssetCollection:(id)a0 assetBundles:(id)a1 resultHandler:(id /* block */)a2;
- (BOOL)_setUnavailabilityReason:(id)a0;
- (void)_notifyAvailabilityObserversWithReason:(id)a0;
- (void)_onQueueNotifyAvailabilityObserversWithReason:(id)a0;
- (void)appPrivateDataWriteFailedWithError:(id)a0;
- (void)_resumeChangeHandlingIfNeeded;
- (void)_pauseChangeHandlingIfNeeded;
- (void)_commitTransactionOnExecutionContext:(id)a0 withInstrumentation:(id)a1 completionHandler:(id /* block */)a2;
- (id)_popChangesRequest;
- (long long)_initialRetryCountForChangesRequest:(id)a0;
- (void)_sendChangesRequest:(id)a0 onExecutionContext:(id)a1 withInstrumentation:(id)a2 remainingRetryCount:(long long)a3 reply:(id /* block */)a4;
- (id)_errorForAuthorizationStatus:(long long)a0 accessLevel:(long long)a1;
- (void)resetFaceAnalysisWithResetLevel:(long long)a0 completionHandler:(id /* block */)a1;
- (void)importAssetsFromLibrary:(id)a0 assetIdentifiers:(id)a1 containerIdentifier:(id)a2 resultHandler:(id /* block */)a3;
- (void)_importRenderedAssets:(id)a0 assetCollection:(id)a1 bundleStagingDirectoryURL:(id)a2 resultHandler:(id /* block */)a3;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)a0 verifiedClusterSequenceNumbers:(id)a1;
- (void)requestTotalProgressCountsForWorkerType:(short)a0 states:(id)a1 completion:(id /* block */)a2;
- (id)_photoLibraryForAnalysisState;
- (id)_faceAnalysisProcessingCounts;
- (void)_importExportRequests:(id)a0 assetCollection:(id)a1 bundleStagingDirectoryURL:(id)a2 resultHandler:(id /* block */)a3;
- (BOOL)petVIPModelExists;
- (void)recordUpdateRequest:(id)a0;
- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)managedObjectContextForCurrentQueueQoS;
- (id)requestTextFeaturesForMomentLocalIdentifiers:(id)a0 error:(id *)a1;
- (void)setChangeRequest:(id)a0 forUUID:(id)a1;
- (unsigned long long)countOfClusteringEligibleFaces;
- (void)_sendChangesRequest:(id)a0 onExecutionContext:(id)a1 withInstrumentation:(id)a2 reply:(id /* block */)a3;
- (void)_cancelTransactionOnExecutionContext:(id)a0 withInstrumentation:(id)a1 completionHandler:(id /* block */)a2;
- (void)_denyTransactionOnExecutionContext:(id)a0 withInstrumentation:(id)a1 authorizationStatus:(long long)a2 accessLevel:(long long)a3 completionHandler:(id /* block */)a4;
- (void)resetLimitedLibraryAccessForApplication:(id)a0 completionHandler:(id /* block */)a1;

@end
