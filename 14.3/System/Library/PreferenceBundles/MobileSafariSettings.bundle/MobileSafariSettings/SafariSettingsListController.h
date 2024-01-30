@interface SafariSettingsListController : PSListController

- (BOOL)prepareHandlingURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 animatePush:(BOOL *)a2;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1 bundle:(id)a2;
- (void)reloadSpecifierAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)postDistributedNotificationNamed:(struct __CFString { } *)a0;
- (void)updateRestrictionsForSpecifiers:(id)a0;
- (id)safariDefaultsValueForKey:(id)a0;
- (void)setSafariDefaultsValue:(id)a0 forKey:(id)a1;
- (void)synchronizeSafariDefaults;
- (BOOL)_evaluateBoolSelectorWithPropertyKey:(id)a0 specifier:(id)a1 defaultValue:(BOOL)a2;
- (BOOL)userInterfaceIdiomIsPhone:(id)a0;
- (BOOL)userInterfaceIdiomIsPad:(id)a0;

@end
