@interface _MFOAuth2TokenAuthenticator : ECSASLAuthenticator {
    BOOL _sentResponse;
}

- (id)saslName;
- (id)responseForServerData:(id)a0;
- (BOOL)justSentPlainTextPassword;
- (BOOL)supportsInitialClientResponse;

@end
