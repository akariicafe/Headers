@interface CSUISettingsBundleController : PSBundleController

- (id)initWithParentListController:(id)a0;
- (long long)serviceType;
- (void)bundleTappedWithSpecifier:(id)a0;
- (Class)controllerClassToInstantiate:(id)a0;
- (BOOL)_cnfreg_overrideForController:(id)a0 withDictionary:(id)a1;
- (id)settingsClassName;
- (id)name;
- (void)_resetSpecifierAction:(id)a0;

@end
