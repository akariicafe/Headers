@class NSDate, NSString, PXUpdater, PXStateBasedMemoriesDataSource, PHPhotoLibrary, NSObject, PHFetchResult, PXFetchResultBasedMemoriesDataSourceManager;
@protocol OS_dispatch_queue;

@interface PXStoryMemoryForYouDataSourceManager : PXSectionedDataSourceManager <PXStoryMutableMemoryForYouDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXMemoryForYouDataSourceManager>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL queue_isInitialized;
@property (nonatomic) BOOL queue_forYouMemoriesDataSourceDidChangeDuringInitialization;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *forYouMemoriesDataSourceManager;
@property (retain, nonatomic) PXStateBasedMemoriesDataSource *previousForYouMemoriesDataSource;
@property (readonly, nonatomic) PHFetchResult *memories;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentCreationDate;
@property (readonly, nonatomic) BOOL hasAnyMemories;

- (void)setIsActive:(BOOL)a0;
- (void)_updateDataSource;
- (id)createInitialDataSource;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)_invalidateDataSource;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_rebuildDataSource;
- (id)forYouMemoryFetchOptions;
- (id)dailyMemoriesFromMemoryFetchResult:(id)a0;
- (id)dataSourceFromFetchResult:(id)a0;

@end
