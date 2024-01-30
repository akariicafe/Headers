@interface HBXHealthAppPluginFactory : NSObject

+ (id)makeDataListViewControllerForHealthStore:(id)a0 displayType:(id)a1 predicate:(id)a2;
+ (id)_createPluginAddDataViewControllerProvidingFromPluginBundle:(id)a0;
+ (id)_loadBundleForPluginPath:(id)a0;
+ (id)_loadPluginBundleForDisplayType:(id)a0;
+ (id)_makeDataListViewControllerProvidingForDisplayType:(id)a0;
+ (id)_pluginPathForDisplayType:(id)a0;

@end
