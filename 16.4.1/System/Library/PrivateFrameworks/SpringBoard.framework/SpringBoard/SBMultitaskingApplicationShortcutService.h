@class NSString, FBServiceClientAuthenticator;

@interface SBMultitaskingApplicationShortcutService : NSObject <SBApplicationServerMultitaskingShortcutDelegate> {
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (long long)_switcherShortcutActionForRequestedAction:(long long)a0;
- (void)applicationServer:(id)a0 client:(id)a1 fetchSupportedShortcutActionsForBundleIdentifier:(id)a2 withCompletion:(id /* block */)a3;
- (void)applicationServer:(id)a0 client:(id)a1 performShortcutAction:(long long)a2 forBundleIdentifier:(id)a3;

@end
