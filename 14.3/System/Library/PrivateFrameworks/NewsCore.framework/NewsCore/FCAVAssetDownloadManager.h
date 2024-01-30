@class FCThreadSafeMutableDictionary, NFLazy, NSString, FCAsyncOnceOperation;
@protocol FCAVAssetCacheType, FCAVAssetKeyCacheType;

@interface FCAVAssetDownloadManager : NSObject <AVAssetDownloadDelegate>

@property (readonly, nonatomic) id<FCAVAssetCacheType> assetCache;
@property (readonly, nonatomic) id<FCAVAssetKeyCacheType> keyCache;
@property (readonly, nonatomic) FCAsyncOnceOperation *restoreBackgroundDownloadsOnce;
@property (readonly, nonatomic) NFLazy *URLSession;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *activeDownloadsByAssetID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)downloadAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)_callCompletionHandlersForAssetID:(id)a0 interestToken:(id)a1 error:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_restoreBackgroundDownloadsWithCompletionHandler:(id /* block */)a0;
- (void)_completeRequestForAssetID:(id)a0 withDownloadedURL:(id)a1 remoteURL:(id)a2 error:(id)a3;
- (BOOL)_isAssetInCache:(id)a0;
- (id)initWithAssetCache:(id)a0 keyCache:(id)a1;
- (void)_ensureAssetIsPurgeable:(id)a0;
- (id)interestTokenForCachedAsset:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (BOOL)_shouldUseAVAssetDownloadForAsset:(id)a0;
- (id)_handleAssetDownloadFromNetwork:(id)a0 completionHandler:(id /* block */)a1;
- (void)restoreBackgroundDownloadsWithCompletionHandler:(id /* block */)a0;

@end
