@class AVAssetDownloadURLSession, NSMutableDictionary, NSString;
@protocol TVPDownloadSessionDelegate;

@interface TVPDownloadSession : NSObject <AVAssetDownloadDelegate>

@property (retain, nonatomic) AVAssetDownloadURLSession *downloadSession;
@property (retain, nonatomic) NSMutableDictionary *taskIDsToDownloads;
@property (weak, nonatomic) id<TVPDownloadSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)aggregateAssetDownloadTaskWithURLAsset:(id)a0 mediaSelections:(id)a1 assetTitle:(id)a2 assetArtworkData:(id)a3 options:(id)a4;
- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 willDownloadToURL:(id)a2;
- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 didCompleteForMediaSelection:(id)a2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 didLoadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 totalTimeRangesLoaded:(id)a3 timeRangeExpectedToLoad:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 forMediaSelection:(id)a5;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)downloadForMediaItem:(id)a0;
- (void)initializeWithDownloadingMediaItems:(id)a0;
- (void)registerDownloadTask:(id)a0 forDownload:(id)a1;
- (void)unregisterDownloadTaskForDownload:(id)a0;

@end
