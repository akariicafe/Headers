@class NSMutableDictionary, NSObject;

@interface RMAppInstallerController : NSObject {
    NSMutableDictionary *_terminationAssertions;
    NSObject *_terminationAssertionLock;
}

- (id)init;
- (void).cxx_destruct;
- (id)_bundleIDFromConfiguration:(id)a0 error:(id *)a1;
- (id)_personaIdentifierFromConfiguration:(id)a0;
- (void)_installUserAppForBundleID:(id)a0 personaIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_installDeviceLicensedAppWithBundleID:(id)a0 personaIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_downloadAppForBundleID:(id)a0 type:(long long)a1 personaIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)_removeTerminationAssertionForBundleIdentifier:(id)a0;
- (void)_uninstallAppWithBundleIdentifier:(id)a0 personaIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addTerminationAssertion:(id)a0 forBundleIdentifier:(id)a1;
- (void)_sendAppStoreRequestWithBundleIdentifier:(id)a0 appStoreAccountIdentifier:(id)a1 type:(long long)a2 skipDownloads:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)installAppWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAppWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
