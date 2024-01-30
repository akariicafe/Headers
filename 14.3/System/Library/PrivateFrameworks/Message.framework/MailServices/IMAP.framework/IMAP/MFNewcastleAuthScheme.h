@interface MFNewcastleAuthScheme : ECAuthenticationScheme

+ (void)initialize;

- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (Class)authenticatorClass;
- (BOOL)requiresPassword;
- (id)humanReadableName;
- (id)name;

@end
