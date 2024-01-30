@class NSURL, AVPersistableContentKeyRequest, NSData;
@protocol FCAVAssetKeyServiceType, FCAVAssetKeyCacheType;

@interface FCAVAssetKeyFetchOperation : FCOperation {
    NSData *_resultCKCData;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (readonly, nonatomic) AVPersistableContentKeyRequest *keyRequest;
@property (readonly, nonatomic) NSURL *keyURI;
@property (readonly, nonatomic) id<FCAVAssetKeyServiceType> service;
@property (readonly, nonatomic) id<FCAVAssetKeyCacheType> cache;

- (void)resetForRetry;
- (unsigned long long)maxRetries;
- (id)initWithKeyRequest:(id)a0 keyURI:(id)a1 service:(id)a2 cache:(id)a3;
- (id)_promiseAppCertificate;
- (id)_promiseSPCDataForKeyRequest:(id)a0 keyURI:(id)a1 appCertificate:(id)a2;
- (id)_promiseContentKeyForKeyRequest:(id)a0 keyURI:(id)a1 spcData:(id)a2;
- (void).cxx_destruct;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
