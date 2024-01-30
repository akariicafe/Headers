@class NSTimer, NSExtension;

@interface SafariWebExtensionsPermissionsSettingsController : SafariSettingsListController <WBSExtensionsControllerObserver> {
    NSExtension *_extension;
    NSTimer *_reloadSpecifiersTimer;
}

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (id)_tabOverrideTopLevelDetailString;
- (void)_webExtensionPermissionDidChange:(id)a0;
- (void)_reloadSpecifiersSoon;
- (void)_setExtensionIfNeeded;
- (void)_setWebExtensionEnabled:(id)a0 forSpecifier:(id)a1;
- (id)_enabledStateOfWebExtensionForSpecifier:(id)a0;
- (id)_hostAppDisplayName:(id)a0;
- (id)_specifiersForExtensionErrors;
- (void)_showWebExtensionPreferencesButtonTapped:(id)a0;
- (id)_perDomainSpecifierForMatchPattern:(id)a0 withName:(id)a1;
- (void)_setDomainPermission:(id)a0 forSpecifier:(id)a1;
- (id)_domainPermissionForSpecifier:(id)a0;

@end
