@interface _MFLoginAuthenticator : ECSASLAuthenticator {
    BOOL _justSentPassword;
}

- (id)saslName;
- (id)responseForServerData:(id)a0;
- (BOOL)justSentPlainTextPassword;

@end
