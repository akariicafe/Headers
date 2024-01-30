@interface MFAuthScheme : NSObject

+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)a0;
+ (id)schemeWithName:(id)a0;
+ (id)authSchemesForAccount:(id)a0 connection:(id)a1;

- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (Class)connectionClassForAccountClass:(Class)a0;
- (BOOL)hasEncryption;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (Class)authenticatorClass;
- (unsigned int)defaultPortForAccount:(id)a0;

@end
