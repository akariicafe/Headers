@interface _MFOAuth2TokenAuthenticator : MFSASLAuthenticator {
    BOOL _sentResponse;
}

- (id)saslName;
- (id)responseForServerData:(id)a0;
- (BOOL)justSentPlainTextPassword;
- (BOOL)supportsInitialClientResponse;

@end
