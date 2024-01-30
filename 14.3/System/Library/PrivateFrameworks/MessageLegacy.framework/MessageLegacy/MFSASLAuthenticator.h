@class MFConnection, MFAccount, MFAuthScheme;

@interface MFSASLAuthenticator : NSObject {
    MFConnection *_connection;
    MFAuthScheme *_authScheme;
    MFAccount *_account;
    int _authenticationState;
}

- (void)setMissingPasswordError;
- (id)saslName;
- (void)dealloc;
- (id)securityLayer;
- (id)account;
- (id)responseForServerData:(id)a0;
- (void)setAuthenticationState:(int)a0;
- (int)authenticationState;
- (BOOL)justSentPlainTextPassword;
- (id)authScheme;
- (BOOL)supportsInitialClientResponse;
- (BOOL)isUsingSSL;
- (BOOL)couldRetry;
- (id)initWithAuthScheme:(id)a0 account:(id)a1 connection:(id)a2;
- (BOOL)base64EncodeResponseData;

@end
