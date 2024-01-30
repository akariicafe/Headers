@interface _MFPlainAuthenticator : MFSASLAuthenticator

- (id)saslName;
- (id)responseForServerData:(id)a0;
- (BOOL)justSentPlainTextPassword;

@end
