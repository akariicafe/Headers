@interface _MFPlainAuthenticator : MFSASLAuthenticator

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;

@end
