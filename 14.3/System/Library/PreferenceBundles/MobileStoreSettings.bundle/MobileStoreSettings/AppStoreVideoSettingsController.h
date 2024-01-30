@interface AppStoreVideoSettingsController : PSListController

- (id)init;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setAutoPlayVideoSetting:(id)a0;
- (void)_updateSpecifierValues;
- (id)_autoPlayVideoSetting;

@end
