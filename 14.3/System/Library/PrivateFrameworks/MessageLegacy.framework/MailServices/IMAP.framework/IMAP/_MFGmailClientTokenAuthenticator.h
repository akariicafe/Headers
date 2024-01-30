@interface _MFGmailClientTokenAuthenticator : MFSASLAuthenticator {
    BOOL _sentResponse;
}

- (id)saslName;
- (id)responseForServerData:(id)a0;
- (BOOL)justSentPlainTextPassword;
- (BOOL)supportsInitialClientResponse;

@end
