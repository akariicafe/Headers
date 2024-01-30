@interface ACPluginLoader : NSObject

+ (void)_populatePluginBundles:(id)a0 atSubpath:(id)a1 inAppleInternal:(BOOL)a2;
+ (id)_accountsPluginDirectoryURL:(id)a0 inAppleInternal:(BOOL)a1;
+ (id)_pluginWithName:(id)a0 inSubpath:(id)a1 inAppleInternal:(BOOL)a2;
+ (id)pluginWithName:(id)a0 inSubpath:(id)a1;
+ (id)pluginBundlesAtSubpath:(id)a0;
+ (id)_validatedBundleAtURL:(id)a0;
+ (BOOL)loadInternalPlugins;

@end
