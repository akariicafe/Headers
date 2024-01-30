@interface _SFSettingsAuthentication : NSObject

+ (id)_localAuthenticationOptionsWithAuthenticationContext:(id)a0;
+ (void)authenticateForSettings:(id)a0 allowAuthenticationReuse:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (BOOL)authenticationRequiresPasscode;
+ (void)pushSettingsAfterAuthentication:(id)a0 onBehalfOfViewController:(id)a1 resourceDictionary:(id)a2 completionHandler:(id /* block */)a3;

@end
