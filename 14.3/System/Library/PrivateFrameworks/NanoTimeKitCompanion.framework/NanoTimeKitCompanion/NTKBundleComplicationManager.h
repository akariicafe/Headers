@class NTKBundleComplicationDataSourceLoader;

@interface NTKBundleComplicationManager : NSObject

@property (readonly, nonatomic) NTKBundleComplicationDataSourceLoader *loader;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (BOOL)bundleComplicationExistsForAppBundleIdentifier:(id)a0;
- (Class)dataSourceClassForBundleComplication:(id)a0;
- (BOOL)bundleExistsWithIdentifier:(id)a0 appBundleIdentifier:(id)a1;
- (id)groupIdentifierForBundleIdentifier:(id)a0;
- (id)localizedComplicationNameForBundleIdentifier:(id)a0;
- (void)enumerateBundlesForComplicationFamily:(long long)a0 device:(id)a1 withBlock:(id /* block */)a2;

@end
