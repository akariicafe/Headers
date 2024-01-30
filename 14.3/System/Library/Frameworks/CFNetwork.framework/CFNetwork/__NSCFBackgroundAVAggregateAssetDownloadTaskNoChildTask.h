@interface __NSCFBackgroundAVAggregateAssetDownloadTaskNoChildTask : __NSCFBackgroundAVAssetDownloadTask

- (void)_onqueue_didFinishDownloadforMediaSelectionPropertyList:(id)a0;
- (void)_onqueue_didLoadTimeRange:(id)a0 totalTimeRangesLoaded:(id)a1 timeRangeExpectedToLoad:(id)a2 forMediaSelectionPropertyList:(id)a3;
- (BOOL)isKindOfClass:(Class)a0;
- (id)currentRequest;
- (id)originalRequest;
- (void)_onqueue_didResolveMediaSelectionPropertyList:(id)a0;
- (void)_onqueue_willDownloadToURL:(id)a0;
- (void)_onqueue_didFinishDownloadingToURL:(id)a0;
- (id)response;

@end
