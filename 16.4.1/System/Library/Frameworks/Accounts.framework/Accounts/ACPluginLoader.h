@interface ACPluginLoader : NSObject

+ (id)pluginBundlesAtSubpath:(id)a0;
+ (id)_accountsPluginDirectoryURLs:(id)a0 inAppleInternal:(BOOL)a1;
+ (id)_pluginWithName:(id)a0 inSubpath:(id)a1 inAppleInternal:(BOOL)a2;
+ (void)_populatePluginBundles:(id)a0 atSubpath:(id)a1 inAppleInternal:(BOOL)a2;
+ (id)_validatedBundleAtURL:(id)a0;
+ (id)pluginWithName:(id)a0 inSubpath:(id)a1;

@end
