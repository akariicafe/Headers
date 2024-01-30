@interface MFPlainAuthScheme : MFAuthScheme

- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (Class)authenticatorClass;
- (id)humanReadableName;
- (id)name;

@end
