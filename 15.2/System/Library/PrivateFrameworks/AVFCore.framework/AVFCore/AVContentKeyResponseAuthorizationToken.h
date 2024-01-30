@class NSData;

@interface AVContentKeyResponseAuthorizationToken : AVContentKeyResponse {
    NSData *_authorizationTokenData;
}

- (id)initWithAuthorizationTokenData:(id)a0;
- (void)dealloc;

@end
