@class NSURLSession, NSString, NSURL, AVURLAsset, NSMutableData;

@interface LPMediaAssetFetcher : LPFetcher <NSURLSessionDataDelegate> {
    id /* block */ _completionHandler;
    AVURLAsset *_asset;
    BOOL _hasAudio;
    NSString *_MIMEType;
    NSURLSession *_session;
    NSMutableData *_receivedData;
    BOOL _loadingIsNonAppInitiated;
}

@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) BOOL shouldDownloadIfPossible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)stopLoading;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancel;
- (void)_resolveVideo;
- (void)_completedWithVideo:(id)a0;
- (id)videoProperties;
- (id)audioProperties;
- (void)_completedWithAudio:(id)a0;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
