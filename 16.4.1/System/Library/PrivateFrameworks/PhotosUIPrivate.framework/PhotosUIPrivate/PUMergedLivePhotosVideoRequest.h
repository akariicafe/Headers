@class PUAssetReference, NSString, PUCompositeVideoGenerator, PUAssetsDataSource, NSError, NSObject, PUMergedLivePhotosVideo;
@protocol OS_dispatch_queue;

@interface PUMergedLivePhotosVideoRequest : PXObservable <PXChangeObserver> {
    unsigned long long _requestLogID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    PUCompositeVideoGenerator *_workQueue_generator;
    long long _stateQueue_state;
    PUMergedLivePhotosVideo *_stateQueue_mergedVideo;
    NSError *_stateQueue_error;
}

@property (readonly, nonatomic) PUAssetReference *assetReference;
@property (readonly, nonatomic) PUAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) PUMergedLivePhotosVideo *mergedVideo;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)cancel;
- (id)mutableChangeObject;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (id)_workQueue_fetchMergeableAssets;
- (void)_stateQueue_signalStateChange;
- (void)_workQueue_finishWithMergedVideo:(id)a0 error:(id)a1;
- (void)_workQueue_generateVideoUsingAssets:(id)a0;
- (void)_workQueue_handleGeneratorDidChangeState;
- (void)_workQueue_start;
- (id)initWithAssetReference:(id)a0 dataSource:(id)a1;

@end
