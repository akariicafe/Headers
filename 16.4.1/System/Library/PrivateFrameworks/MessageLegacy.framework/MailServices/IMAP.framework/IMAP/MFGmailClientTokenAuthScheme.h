@interface MFGmailClientTokenAuthScheme : MFAuthScheme

- (id)name;
- (id)humanReadableName;
- (Class)authenticatorClass;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;

@end
