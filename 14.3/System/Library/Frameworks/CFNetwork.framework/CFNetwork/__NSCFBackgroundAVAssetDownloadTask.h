@class AVMediaSelection, NSArray, NSDictionary, NSURL, AVURLAsset, NSString, NSData;

@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {
    unsigned long long _downloadToken;
    NSURL *_temporaryDestinationURL;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    AVMediaSelection *_resolvedMediaSelection;
}

@property unsigned long long AVAssetDownloadToken;
@property (copy) NSURL *URL;
@property (copy) NSURL *destinationURL;
@property (retain) AVURLAsset *URLAsset;
@property (copy) NSDictionary *options;
@property (copy) NSArray *loadedTimeRanges;

- (void)_onqueue_didFinishDownloadforMediaSelectionPropertyList:(id)a0;
- (void)_onqueue_didLoadTimeRange:(id)a0 totalTimeRangesLoaded:(id)a1 timeRangeExpectedToLoad:(id)a2 forMediaSelectionPropertyList:(id)a3;
- (id)initWithTaskInfo:(id)a0 taskGroup:(id)a1 ident:(unsigned long long)a2;
- (BOOL)isKindOfClass:(Class)a0;
- (void)_onqueue_didFinishWithError:(id)a0;
- (id)initWithTaskGroup:(id)a0 URLAsset:(id)a1 URL:(id)a2 destinationURL:(id)a3 temporaryDestinationURL:(id)a4 assetTitle:(id)a5 assetArtworkData:(id)a6 ident:(unsigned long long)a7;
- (id)currentRequest;
- (id)originalRequest;
- (void)dealloc;
- (void)_onqueue_didResolveMediaSelectionPropertyList:(id)a0;
- (void)_onqueue_willDownloadToURL:(id)a0;
- (BOOL)_isAVAssetTask;
- (void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)a0 totalBytesExpectedToWrite:(long long)a1;
- (void)_onqueue_didFinishDownloadingToURL:(id)a0;
- (id)response;

@end
