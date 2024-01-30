@class PXMemoriesFeedDataSource, PHFetchResult, NSString, PXDiscoveryFeedDataSourceManager, PHPhotoLibrary, NSDate;

@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver, PXMemoryForYouDataSourceManager> {
    BOOL _memoryGenerationHasStarted;
}

@property (nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) BOOL _generatingAdditionalEntries;
@property (retain, nonatomic) PXDiscoveryFeedDataSourceManager *discoveryDataSourceManager;
@property (retain, nonatomic) PHFetchResult *memoriesFetchResult;
@property (nonatomic) unsigned long long firstUngroupedMemoryIndex;
@property (readonly, nonatomic) PXMemoriesFeedDataSource *dataSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentCreationDate;
@property (readonly, nonatomic) BOOL hasAnyMemories;

+ (id)_updatedFetchResultsForMemoriesForDatasource:(id)a0 changeDetails:(id)a1 changeInstance:(id)a2;
+ (id)baseFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)generateEntriesFromMemories:(id)a0 startingFromIndex:(unsigned long long)a1 maximumNumberOfEntries:(unsigned long long)a2 finalMemoryIndex:(out unsigned long long *)a3;
+ (BOOL)shouldGroupTogetherMemoriesWithCreationDate:(id)a0 andCreationDate:(id)a1;

- (id)initWithPhotoLibrary:(id)a0;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (id)createInitialDataSource;
- (id)fetchOptions;
- (void)startObservingChanges;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (void)reloadMemories:(BOOL)a0;
- (void)_clearPendingNotificationForMemory:(id)a0;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleChangedKeyAssetsForMemories:(id)a0;
- (void)handleIncrementalFetchResultChange:(id)a0 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)a1;
- (void)handleNonIncrementalFetchResultChange:(id)a0;
- (void)loadMoreContentWithCompletionHandler:(id /* block */)a0;
- (void)resetMemoriesFetchResult;
- (void)startGeneratingMemories;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;

@end
