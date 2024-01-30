@class NSURLSession, NSString, NSURL, AVURLAsset, NSMutableData;

@interface LPMediaAssetFetcher : LPFetcher <NSURLSessionDataDelegate> {
    id /* block */ _completionHandler;
    AVURLAsset *_asset;
    BOOL _hasAudio;
    NSString *_MIMEType;
    NSURLSession *_session;
    NSMutableData *_receivedData;
}

@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_resolveVideo;
- (void)_completedWithVideo:(id)a0;
- (id)videoProperties;
- (id)audioProperties;
- (void)_completedWithAudio:(id)a0;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
