@interface MFAPOPAuthScheme : ECAuthenticationScheme

+ (void)initialize;

- (BOOL)requiresPassword;
- (BOOL)supportsAccountType:(id)a0;
- (id)name;
- (id)humanReadableName;
- (Class)connectionClassForAccountClass:(Class)a0;
- (Class)authenticatorClass;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (BOOL)hasEncryption;

@end
