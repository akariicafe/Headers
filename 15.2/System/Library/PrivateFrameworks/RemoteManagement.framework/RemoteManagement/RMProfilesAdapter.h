@interface RMProfilesAdapter : NSObject

- (id)profileNameForIdentifier:(id)a0;
- (id)installedProfileIdentifierByDeclarationKey;
- (void)installProfileData:(id)a0 store:(id)a1 declarationKey:(id)a2 completionHandler:(id /* block */)a3;
- (void)uninstallProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
