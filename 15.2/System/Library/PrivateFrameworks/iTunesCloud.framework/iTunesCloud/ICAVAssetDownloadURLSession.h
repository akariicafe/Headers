@class NSString;

@interface ICAVAssetDownloadURLSession : ICURLSession <AVAssetDownloadDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 didLoadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 totalTimeRangesLoaded:(id)a3 timeRangeExpectedToLoad:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 forMediaSelection:(id)a5;
- (void)enqueueAVDownloadRequest:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)enqueueAVDownloadRequest:(id)a0 toDestination:(id)a1 withAVURLAsset:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (id)_createURLSessionWithConfiguration:(id)a0;
- (void)enqueueAVDownloadRequest:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)enqueueAggregateAssetDownloadRequest:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)enqueueAggregateAssetDownloadRequest:(id)a0 toDestination:(id)a1 withOptions:(id)a2 resourceLoaderDelegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)_createURLSessionTaskForRequest:(id)a0 usingSession:(id)a1;
- (void)enqueueAggregateAssetDownloadRequest:(id)a0 toDestination:(id)a1 withAVURLAsset:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;

@end
