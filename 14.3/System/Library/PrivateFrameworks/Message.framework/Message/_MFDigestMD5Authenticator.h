@class NSData;

@interface _MFDigestMD5Authenticator : ECSASLAuthenticator {
    unsigned short _maxbuf : 16;
    unsigned char _securityLevel : 2;
    NSData *_expectedResponse;
    void *_cryptInfo;
}

- (void)dealloc;
- (id)responseForServerData:(id)a0;
- (void)setAuthenticationState:(long long)a0;
- (void)setSecurityLevel:(long long)a0;
- (void)setMaxBuffer:(unsigned int)a0;
- (void)setCryptInfo:(void *)a0;
- (void)setExpectedResponse:(id)a0;
- (long long)securityLevel;

@end
