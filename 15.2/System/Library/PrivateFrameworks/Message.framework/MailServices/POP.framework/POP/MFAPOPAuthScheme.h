@interface MFAPOPAuthScheme : ECAuthenticationScheme

+ (void)initialize;

- (BOOL)supportsAccountType:(id)a0;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (Class)connectionClassForAccountClass:(Class)a0;
- (BOOL)hasEncryption;
- (Class)authenticatorClass;

@end
