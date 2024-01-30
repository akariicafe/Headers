@class PXDiscoveryFeedDataSource, NSArray, PHPhotoLibrary, NSObject, PXDiscoveryFeedGenerationSession;
@protocol OS_dispatch_queue;

@interface PXDiscoveryFeedDataSourceManager : PXSectionedDataSourceManager {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSArray *_assetCollections;
    PXDiscoveryFeedGenerationSession *_session;
    struct atomic_flag { _Atomic BOOL _Value; } _hasDispatchedCallToGetAdditionalItems;
}

@property (readonly, nonatomic) PXDiscoveryFeedDataSource *dataSource;

- (id)createInitialDataSource;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void)loadMoreContentWithCompletionHandler:(id /* block */)a0;
- (void)_loadMoreContentWithCompletionHandler:(id /* block */)a0;
- (void)_handleMoreContentLoadedWithDataSource:(id)a0;
- (id)_requestMemoryWithCount:(long long)a0 beforeDate:(id)a1;

@end
