@interface ACPluginLoader : NSObject

+ (id)_pluginWithName:(id)a0 inSubpath:(id)a1 inAppleInternal:(BOOL)a2;
+ (void)_populatePluginBundles:(id)a0 atSubpath:(id)a1 inAppleInternal:(BOOL)a2;
+ (id)_accountsPluginDirectoryURL:(id)a0 inAppleInternal:(BOOL)a1;
+ (id)pluginWithName:(id)a0 inSubpath:(id)a1;
+ (id)_validatedBundleAtURL:(id)a0;
+ (id)pluginBundlesAtSubpath:(id)a0;

@end
