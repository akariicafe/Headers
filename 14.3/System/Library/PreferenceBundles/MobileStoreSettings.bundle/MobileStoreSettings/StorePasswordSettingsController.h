@interface StorePasswordSettingsController : PSListController {
    BOOL _ignoreAccountStoreChangedNotification;
}

- (void)_accountStoreChangedNotification:(id)a0;
- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateSpecifierValues;
- (void)_setPurchasesPasswordSetting:(id)a0;
- (void)_setFreeDownloadsRequirePasswordEnabled:(id)a0 specifier:(id)a1;
- (id)_freeDownloadsRequirePasswordEnabled;
- (void)_updateAccountPasswordSettings:(id)a0;

@end
