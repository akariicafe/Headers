@class NSDictionary, RadioRequestContext, NSObject;
@protocol OS_dispatch_queue;

@interface RadioRequest : NSObject {
    BOOL _cachedResponse;
    long long _errorCode;
    NSObject<OS_dispatch_queue> *_queue;
    RadioRequestContext *_requestContext;
    double _retryInterval;
    long long _status;
    NSDictionary *_unparsedResponseDictionary;
}

@property (nonatomic, getter=isAsynchronousBackgroundRequest) BOOL asynchronousBackgroundRequest;
@property (readonly, getter=isCachedResponse) BOOL cachedResponse;
@property (copy) RadioRequestContext *requestContext;
@property (readonly) long long status;
@property (readonly) long long errorCode;
@property (readonly) double retryInterval;
@property (readonly, copy) NSDictionary *unparsedResponseDictionary;

+ (id)defaultURLCache;
+ (void)loadServiceConfigurationWithCompletionHandler:(id /* block */)a0;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)setStatus:(long long)a0;
- (void)dealloc;
- (void)setErrorCode:(long long)a0;
- (void)setCachedResponse:(BOOL)a0;
- (void)setRetryInterval:(double)a0;
- (void)_loadRadioStoreBagWithCompletionHandler:(id /* block */)a0;
- (void)_loadRadioStoreBagAndAllowRetry:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)setUnparsedResponseDictionary:(id)a0;

@end
