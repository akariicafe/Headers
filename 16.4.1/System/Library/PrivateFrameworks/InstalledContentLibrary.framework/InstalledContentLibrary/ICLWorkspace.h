@interface ICLWorkspace : NSObject

+ (id)defaultWorkspace;
+ (id)_connectionToInstallationDaemonWithError:(id *)a0;

- (id)init;
- (BOOL)enumerateBuiltInSystemContentWithBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)enumerateCryptexContentWithBlock:(id /* block */)a0 error:(id *)a1;
- (void)triggerRegistrationForContainerizedContentWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)bundleIDsForContainerizedContentWithError:(id *)a0;
- (id)bundleRecordsForLaunchServicesWithWrapperURL:(id)a0 forBundleIdentifier:(id)a1 withError:(id *)a2;
- (id)infoForLaunchServicesWithWrapperURL:(id)a0 forBundleIdentifier:(id)a1 withError:(id *)a2;
- (BOOL)triggerRegistrationForContainerizedContentWithOptions:(id)a0 withError:(id *)a1;

@end
