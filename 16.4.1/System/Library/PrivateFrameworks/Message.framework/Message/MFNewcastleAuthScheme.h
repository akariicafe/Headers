@interface MFNewcastleAuthScheme : ECAuthenticationScheme

+ (void)initialize;

- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (Class)authenticatorClass;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;

@end
