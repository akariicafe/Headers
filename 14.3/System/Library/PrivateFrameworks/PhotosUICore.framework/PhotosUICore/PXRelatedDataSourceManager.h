@class PXPhotosDetailsContext, PHFetchResult, PXRelatedDataSource, NSDate, NSObject, PXRelatedSettings;
@protocol OS_dispatch_queue;

@interface PXRelatedDataSourceManager : PXSectionedDataSourceManager {
    BOOL _didStartLoading;
    BOOL _shouldCancelLoading;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXRelatedSettings *_settings;
    unsigned long long _fetchLimit;
    unsigned long long _initialBatchSize;
    unsigned long long _loadBatchSize;
    NSDate *_loadStartDate;
    BOOL _didLoadInitialDataSource;
}

@property (readonly, nonatomic) PXPhotosDetailsContext *_context;
@property (readonly, nonatomic) PHFetchResult *_collectionListFetchResult;
@property (nonatomic, getter=_isCanceled, setter=_setCanceled:) BOOL _canceled;
@property (retain, nonatomic, setter=_setRelatedCollections:) PHFetchResult *_relatedCollections;
@property (retain, nonatomic, setter=_setPreparedRelatedCollections:) PHFetchResult *_preparedRelatedCollections;
@property (readonly, nonatomic) BOOL useItemIndexPaths;
@property (nonatomic) unsigned long long initialBatchSize;
@property (nonatomic) unsigned long long loadBatchSize;
@property (readonly, nonatomic) PXRelatedDataSource *dataSource;

- (void)startLoading;
- (id)init;
- (void).cxx_destruct;
- (void)cancelLoading;
- (id)initWithPhotosDetailsContext:(id)a0;
- (void)_setDataSource:(id)a0 changeDetails:(id)a1;
- (id)initWithPhotosDetailsContext:(id)a0 useItemIndexPaths:(BOOL)a1;
- (id)createPhotosDataSourceForRelatedEntry:(id)a0;
- (void)_startBackgroundLoad;
- (void)_continueBackgroundLoadWithReferenceObject:(id)a0 attemptIndex:(long long)a1;
- (id)_collectionsRelatedToReferenceObject:(id)a0;
- (void)_continueBackgroundLoadWithReferenceObject:(id)a0 relatedCollections:(id)a1;
- (id)_referenceObject;
- (id)_referenceObjectFromCollectionListFetchResult:(id)a0;
- (id)_collectionListRelatedToObject:(id)a0;
- (id)_referenceAssetForReferenceObject:(id)a0;
- (id)_keyAssetFetchResultForRelatedCollection:(id)a0 referenceAsset:(id)a1;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;

@end
