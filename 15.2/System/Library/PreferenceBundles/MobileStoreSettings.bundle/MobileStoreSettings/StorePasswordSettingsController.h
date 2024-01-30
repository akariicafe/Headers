@interface StorePasswordSettingsController : PSListController {
    BOOL _ignoreAccountStoreChangedNotification;
}

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)_accountStoreChangedNotification:(id)a0;
- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateSpecifierValues;
- (void)_setPurchasesPasswordSetting:(id)a0;
- (void)_setFreeDownloadsRequirePasswordEnabled:(id)a0 specifier:(id)a1;
- (id)_freeDownloadsRequirePasswordEnabled;
- (void)_updateAccountPasswordSettings:(id)a0;

@end
