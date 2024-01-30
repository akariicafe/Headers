@interface MFNewcastleAuthScheme : ECAuthenticationScheme

+ (void)initialize;

- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (Class)authenticatorClass;

@end
