@class NSString, NSObject, PXAssetsDataSourceManager;
@protocol OS_dispatch_queue;

@interface PXAssetsDataSourceCountsController : PXObservable <PXMutableAssetsDataSourceCountsController, PXAssetsDataSourceManagerObserver> {
    NSObject<OS_dispatch_queue> *_prepareCountsQueue;
}

@property (nonatomic) BOOL isPreparingAssetTypeCounts;
@property (nonatomic) BOOL hasUsableCounts;
@property (nonatomic) BOOL waitingToPrepare;
@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, nonatomic) struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } counts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateCounts;
- (void)prepareCountsIfNeeded;
- (void)setCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)a0;
- (void).cxx_destruct;
- (void)_handlePreparationCompletion;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_prepareCounts;
- (void)_dataSourceManagerDidChange;
- (void)_prepareFetchResults:(id)a0;

@end
