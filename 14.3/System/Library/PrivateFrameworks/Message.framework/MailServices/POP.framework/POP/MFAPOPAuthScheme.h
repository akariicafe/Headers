@interface MFAPOPAuthScheme : ECAuthenticationScheme

+ (void)initialize;

- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (Class)connectionClassForAccountClass:(Class)a0;
- (BOOL)hasEncryption;
- (Class)authenticatorClass;
- (BOOL)requiresPassword;
- (id)humanReadableName;
- (id)name;
- (BOOL)supportsAccountType:(id)a0;

@end
