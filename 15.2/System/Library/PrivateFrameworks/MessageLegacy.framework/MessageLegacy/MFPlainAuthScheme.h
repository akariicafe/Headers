@interface MFPlainAuthScheme : MFAuthScheme

- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (Class)authenticatorClass;

@end
