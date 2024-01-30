@class NSString, NSMutableDictionary;

@interface FigHTTPRequestSessionDataDelegate : NSObject <NSURLSessionDataDelegate> {
    NSMutableDictionary *_taskToFigHTTPRequest;
    struct OpaqueFigReentrantMutex { } *_taskToFigHTTPRequestMutex;
    unsigned char _doesIgnoreDidReceiveResponseDisposition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)restoreVoucher:(id)a0;
- (void)_deregisterFigHTTPRequestForDataTask:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (struct FigRetainProxy { } *)_copyAndLockRequestForTask:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithResponseDispositionOption:(BOOL)a0;
- (void)_registerFigHTTPRequest:(struct OpaqueFigHTTPRequest { } *)a0 forDataTask:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)adoptVoucherFromRetainProxy:(struct FigRetainProxy { } *)a0;
- (void)dealloc;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
