@interface RMProfilesAdapter : NSObject

- (id)allInstalledProfileIdentifiers;
- (void)installProfileData:(id)a0 configuration:(id)a1 deviceChannel:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)uninstallProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)profileNameForIdentifier:(id)a0;

@end
