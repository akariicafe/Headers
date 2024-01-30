@class NSString, FBServiceClientAuthenticator;

@interface SBApplicationShortcutService : NSObject <SBApplicationServerShortcutDelegate> {
    FBServiceClientAuthenticator *_serviceClientFullAccessEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientCustomImageEntitlementAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationServer:(id)a0 client:(id)a1 setDynamicApplicationShortcutItems:(id)a2 forBundleIdentifier:(id)a3;
- (void)applicationServer:(id)a0 client:(id)a1 fetchApplicationShortcutItemsOfTypes:(unsigned long long)a2 forBundleIdentifier:(id)a3 withCompletion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)_authenticateClient:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_checkEntitlementsForClient:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_sanitizeApplicationShortcutItems:(id)a0 withEntitlements:(unsigned long long)a1;

@end
