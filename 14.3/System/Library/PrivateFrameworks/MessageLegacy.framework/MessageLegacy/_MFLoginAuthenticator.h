@interface _MFLoginAuthenticator : MFSASLAuthenticator {
    BOOL _justSentPassword;
}

- (id)saslName;
- (id)responseForServerData:(id)a0;
- (BOOL)justSentPlainTextPassword;

@end
