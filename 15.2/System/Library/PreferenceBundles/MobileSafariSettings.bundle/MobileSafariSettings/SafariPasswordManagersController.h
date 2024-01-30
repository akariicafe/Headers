@class NSString, _ASCredentialProviderExtensionConfigurationViewController, PSSpecifier, MCProfileConnection;

@interface SafariPasswordManagersController : PSListController <MCProfileConnectionObserver, SFCredentialProviderExtensionManagerObserver, _ASCredentialProviderExtensionConfigurationViewControllerDelegate> {
    _ASCredentialProviderExtensionConfigurationViewController *_extensionConfigurationController;
    MCProfileConnection *_profileConnection;
    PSSpecifier *_passwordAutoFillSpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (id)specifiers;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)credentialProviderExtensionConfigurationViewControllerDidFinish:(id)a0 completion:(id /* block */)a1;
- (id)_formDataController;
- (void)_setValue:(id)a0 forPasswordAutoFillSpecifier:(id)a1;
- (id)_valueOfPasswordAutoFillSpecifier:(id)a0;
- (BOOL)_keychainAutoFillEnabled;
- (id)_valueOfThirdPartyPasswordManagerSpecifier:(id)a0;
- (void)_setKeychainAutoFillEnabled:(BOOL)a0;
- (void)_setValue:(id)a0 forThirdPartyPasswordManagerSpecifier:(id)a1;

@end
