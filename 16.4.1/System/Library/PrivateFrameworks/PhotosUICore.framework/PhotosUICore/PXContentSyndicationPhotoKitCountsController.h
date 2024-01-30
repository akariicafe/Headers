@class NSString, PXAssetsDataSourceCountsController, PXFetchResultCountObserver;

@interface PXContentSyndicationPhotoKitCountsController : PXContentSyndicationCountsController <PXChangeObserver, PXFetchResultCountObserverDelegate> {
    PXAssetsDataSourceCountsController *_assetsCountsController;
    PXFetchResultCountObserver *_fetchResultCountObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateSavedCount;
- (void)_updateDetailedCounts;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (void).cxx_destruct;
- (void)didSetAssetCollection:(id)a0;

@end
