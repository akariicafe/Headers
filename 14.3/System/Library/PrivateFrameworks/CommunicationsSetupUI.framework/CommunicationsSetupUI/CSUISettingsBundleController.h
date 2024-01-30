@interface CSUISettingsBundleController : PSBundleController

- (id)initWithParentListController:(id)a0;
- (void)_resetSpecifierAction:(id)a0;
- (id)settingsClassName;
- (Class)controllerClassToInstantiate:(id)a0;
- (id)name;
- (BOOL)_cnfreg_overrideForController:(id)a0 withDictionary:(id)a1;
- (void)bundleTappedWithSpecifier:(id)a0;
- (long long)serviceType;

@end
