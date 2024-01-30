@class NSString;

@interface DMTManagedConfigurationBackedProfileInstallationPrimitives : NSObject <DMTProfileInstallationPrimitives>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)installProfileData:(id)a0 error:(id *)a1;
- (BOOL)uninstallProfileWithIdentifier:(id)a0 error:(id *)a1;

@end
