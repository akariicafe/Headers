@interface MFNewcastleAuthScheme : MFAuthScheme

+ (void)load;

- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (Class)authenticatorClass;

@end
