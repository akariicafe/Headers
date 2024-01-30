@class FCThreadSafeMutableDictionary, NSString, NFLazy, FCAsyncOnceOperation;
@protocol FCAVAssetCacheType, FCAVAssetKeyCacheType;

@interface FCAVAssetDownloadManager : NSObject <AVAssetDownloadDelegate> {
    id<FCAVAssetCacheType> _assetCache;
    id<FCAVAssetKeyCacheType> _keyCache;
    FCAsyncOnceOperation *_restoreBackgroundDownloadsOnce;
    NFLazy *_URLSession;
    FCThreadSafeMutableDictionary *_activeDownloadsByAssetID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)_restoreBackgroundDownloadsWithCompletionHandler:(id /* block */)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
