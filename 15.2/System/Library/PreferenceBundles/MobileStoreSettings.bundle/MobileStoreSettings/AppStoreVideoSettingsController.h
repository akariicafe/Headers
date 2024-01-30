@interface AppStoreVideoSettingsController : PSListController

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_setAutoPlayVideoSetting:(id)a0;
- (void)_updateSpecifierValues;
- (id)_autoPlayVideoSetting;

@end
