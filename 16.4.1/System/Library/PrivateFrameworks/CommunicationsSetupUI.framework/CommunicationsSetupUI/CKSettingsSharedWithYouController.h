@interface CKSettingsSharedWithYouController : PSListController

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (id)appIsEnabled:(id)a0;
- (id)getAppBundleIDsFromDefaults;
- (id)getAppSpecifiers;
- (void)postNotificationForAppEnablementChanges;
- (void)setAppIsEnabled:(id)a0 specifier:(id)a1 shouldPostNotification:(id)a2;
- (void)setSharedWithYouEnabled:(id)a0 specifier:(id)a1;
- (void)setupDefaultAppsIfRequired;
- (id)sharedWithYouEnabled:(id)a0;
- (void)updateAppPreferencesWith:(id)a0;

@end
