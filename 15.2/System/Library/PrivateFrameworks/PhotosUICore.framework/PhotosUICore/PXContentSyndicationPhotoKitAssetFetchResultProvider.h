@class NSString, NSMutableDictionary, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXContentSyndicationPhotoKitAssetFetchResultProvider : NSObject <PHPhotoLibraryChangeObserver, PXContentSyndicationAssetFetchResultProvider> {
    PHPhotoLibrary *_photoLibrary;
    id /* block */ _fetchResultBlock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_fetchResults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerChangeObserver:(id)a0 forAssetCollection:(id)a1;
- (void)unregisterChangeObserver:(id)a0 forAssetCollection:(id)a1;
- (id)assetFetchResultForAssetCollection:(id)a0;
- (void)invalidateAllAssetFetchResults;
- (void)invalidateAssetFetchResultsInAssetCollections:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 fetchResultBlock:(id /* block */)a1;
- (id)_serialQueue_fetchResultAssetCollection:(id)a0 fetchResultBlock:(id /* block */)a1;
- (void)_serialQueue_invalidateAllAssetFetchResults;
- (void)_serialQueue_invalidateAssetFetchResultsInAssetCollections:(id)a0;
- (void)_serialQueue_registerChangeObserver:(id)a0 forAssetCollection:(id)a1 fetchResultBlock:(id /* block */)a2;
- (void)_serialQueue_unregisterChangeObserver:(id)a0 forAssetCollection:(id)a1;
- (void)_didChangeFetchResult:(id)a0 forAssetCollection:(id)a1 withChangeObservers:(id)a2;

@end
