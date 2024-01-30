@interface _MFLoginAuthenticator : ECSASLAuthenticator {
    BOOL _justSentPassword;
}

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;

@end
