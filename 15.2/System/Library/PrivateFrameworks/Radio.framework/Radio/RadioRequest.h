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
@property (readonly, nonatomic, getter=isCachedResponse) BOOL cachedResponse;
@property (copy, nonatomic) RadioRequestContext *requestContext;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) double retryInterval;
@property (readonly, copy, nonatomic) NSDictionary *unparsedResponseDictionary;

+ (void)loadServiceConfigurationWithCompletionHandler:(id /* block */)a0;
+ (id)defaultURLCache;

- (void)setErrorCode:(long long)a0;
- (void)setStatus:(long long)a0;
- (void)setRetryInterval:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setCachedResponse:(BOOL)a0;
- (void)dealloc;
- (void)cancel;
- (void)setUnparsedResponseDictionary:(id)a0;
- (void)_loadRadioStoreBagWithCompletionHandler:(id /* block */)a0;
- (void)_loadRadioStoreBagAndAllowRetry:(BOOL)a0 withCompletionHandler:(id /* block */)a1;

@end
