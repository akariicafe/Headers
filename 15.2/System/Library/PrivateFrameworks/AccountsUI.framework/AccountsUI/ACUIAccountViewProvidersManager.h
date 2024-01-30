@class NSDictionary, NSMutableDictionary;

@interface ACUIAccountViewProvidersManager : NSObject {
    NSDictionary *_accountTypeToPluginNameMap;
    NSMutableDictionary *_pluginCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)localizedStringForDataclass:(id)a0 withSuffix:(id)a1 forAccount:(id)a2;
- (id)configurationInfoForCreatingAccountWithType:(id)a0;
- (Class)viewControllerClassForCreatingAccountWithType:(id)a0;
- (BOOL)setDelegate:(id)a0 forSignInController:(id)a1 forAccountWithType:(id)a2;
- (Class)controllerClassForCreatingAccountWithType:(id)a0;
- (id)_accountViewProviderPluginForAccountTypeID:(id)a0;
- (Class)viewControllerClassForViewingAccount:(id)a0;
- (Class)controllerClassForCreatingRemoteAccountWithType:(id)a0;
- (id)configurationInfoForViewingAccount:(id)a0;
- (id)_loadAccountViewProviderPluginWithName:(id)a0;

@end
