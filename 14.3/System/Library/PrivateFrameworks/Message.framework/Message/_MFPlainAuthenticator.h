@interface _MFPlainAuthenticator : ECSASLAuthenticator

- (id)saslName;
- (id)responseForServerData:(id)a0;
- (BOOL)justSentPlainTextPassword;

@end
