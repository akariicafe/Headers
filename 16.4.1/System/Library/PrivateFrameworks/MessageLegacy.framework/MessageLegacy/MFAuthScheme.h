@interface MFAuthScheme : NSObject

+ (void)initialize;
+ (void)registerSchemeClass:(Class)a0;
+ (id)schemeWithName:(id)a0;
+ (id)knownSchemes;
+ (id)authSchemesForAccount:(id)a0 connection:(id)a1;

- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (Class)connectionClassForAccountClass:(Class)a0;
- (Class)authenticatorClass;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (BOOL)hasEncryption;
- (unsigned int)defaultPortForAccount:(id)a0;

@end
