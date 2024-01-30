@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject {
    NSMutableDictionary *_requestIDToDownload;
    struct OpaqueFigCustomURLHandler { } *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void)_cancelPendingRequests;
- (void)_didFinish:(id)a0 error:(struct __CFError { } *)a1;
- (int)_handleRequest:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1;
- (void)_cancelRequestID:(unsigned long long)a0;
- (void)_didReceiveData:(id)a0 data:(struct __CFData { } *)a1;
- (void)_didReceiveResponse:(id)a0 response:(struct _CFURLResponse { } *)a1;
- (void)_cancelAndFinishRequest:(id)a0 error:(struct __CFError { } *)a1;
- (BOOL)_willSendRequest:(id)a0 request:(struct _CFURLRequest { } *)a1 redirectionResponse:(struct _CFURLResponse { } *)a2;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;

@end
