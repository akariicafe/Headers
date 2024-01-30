@interface CKSettingsSharedWithYouController : PSListController

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setSharedWithYouEnabled:(id)a0 specifier:(id)a1;
- (id)sharedWithYouEnabled:(id)a0;
- (void)setupDefaultAppsIfRequired;
- (id)getAppSpecifiers;
- (void)updateAppPreferencesWith:(id)a0;
- (void)setAppIsEnabled:(id)a0 specifier:(id)a1 shouldPostNotification:(id)a2;
- (void)postNotificationForAppEnablementChanges;
- (id)getAppBundleIDsFromDefaults;
- (id)appIsEnabled:(id)a0;

@end
