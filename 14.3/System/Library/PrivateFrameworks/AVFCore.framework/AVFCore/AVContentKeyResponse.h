@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject {
    AVContentKeyResponseInternal *_keyResponse;
}

+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)a0;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)a0 renewalDate:(id)a1;
+ (id)contentKeyResponseWithClearKeyData:(id)a0 initializationVector:(id)a1;
+ (id)contentKeyResponseWithAuthorizationTokenData:(id)a0;

- (void)dealloc;
- (id)keySystem;
- (id)initWithKeySystem:(id)a0;

@end
