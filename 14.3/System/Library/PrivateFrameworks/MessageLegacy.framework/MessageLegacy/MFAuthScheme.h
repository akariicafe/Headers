@interface MFAuthScheme : NSObject

+ (void)initialize;
+ (id)knownSchemes;
+ (id)schemeWithName:(id)a0;
+ (void)registerSchemeClass:(Class)a0;
+ (id)authSchemesForAccount:(id)a0 connection:(id)a1;

- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (Class)connectionClassForAccountClass:(Class)a0;
- (BOOL)hasEncryption;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (Class)authenticatorClass;
- (BOOL)requiresPassword;
- (id)humanReadableName;
- (id)name;
- (unsigned int)defaultPortForAccount:(id)a0;

@end
