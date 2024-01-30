@class PXMemoriesFeedDataSource, PHFetchResult, PHFetchOptions, NSString, NSDate, PHPhotoLibrary;

@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    BOOL _memoryGenerationHasStarted;
}

@property (class, readonly, nonatomic) NSDate *mostRecentCreationDate;

@property (readonly, nonatomic) PHFetchOptions *baseFetchOptions;
@property (nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) BOOL _generatingAdditionalEntries;
@property (retain, nonatomic) PHFetchResult *memoriesFetchResult;
@property (nonatomic) unsigned long long firstUngroupedMemoryIndex;
@property (readonly, nonatomic) PXMemoriesFeedDataSource *dataSource;
@property (readonly, nonatomic) BOOL hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseFetchOptions;
+ (id)_updatedFetchResultsForMemoriesForDatasource:(id)a0 changeDetails:(id)a1 changeInstance:(id)a2;
+ (id)generateEntriesFromMemories:(id)a0 startingFromIndex:(unsigned long long)a1 maximumNumberOfEntries:(unsigned long long)a2 finalMemoryIndex:(out unsigned long long *)a3;
+ (BOOL)shouldGroupTogetherMemoriesWithCreationDate:(id)a0 andCreationDate:(id)a1;

- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)fetchOptions;
- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)resetMemoriesFetchResult;
- (void)resumeLibraryUpdates;
- (void)pauseLibraryUpdates;
- (void)_clearPendingNotificationForMemory:(id)a0;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)startGeneratingMemories;
- (void)reloadMemories:(BOOL)a0;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleIncrementalFetchResultChange:(id)a0 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)a1;
- (void)handleNonIncrementalFetchResultChange:(id)a0;
- (void)handleChangedKeyAssetsForMemories:(id)a0;

@end
