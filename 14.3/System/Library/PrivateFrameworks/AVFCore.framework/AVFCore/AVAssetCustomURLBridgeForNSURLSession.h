@class NSURLSession, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate> {
    NSMutableDictionary *_taskToRequest;
    struct OpaqueFigCustomURLHandler { } *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (int)_cancelRequestID:(unsigned long long)a0;
- (id)init;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (void)dealloc;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_registerRequest:(struct __CFDictionary { } *)a0 id:(unsigned long long)a1 forDataTask:(id)a2;
- (void)_unregisterRequestForDataTask:(id)a0;
- (id)_lookupRequestForDataTask:(id)a0;
- (int)_handleRequest:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1 canHandleRequestOut:(BOOL *)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;

@end
