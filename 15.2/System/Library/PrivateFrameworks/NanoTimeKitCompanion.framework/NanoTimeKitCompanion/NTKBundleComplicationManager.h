@class NTKBundleComplicationDataSourceLoader;

@interface NTKBundleComplicationManager : NSObject

@property (readonly, nonatomic) NTKBundleComplicationDataSourceLoader *loader;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)sectionIdentifierForBundleIdentifier:(id)a0;
- (BOOL)bundleComplicationExistsForAppBundleIdentifier:(id)a0;
- (Class)dataSourceClassForBundleComplication:(id)a0;
- (BOOL)bundleExistsWithIdentifier:(id)a0 appBundleIdentifier:(id)a1;
- (id)groupIdentifierForBundleIdentifier:(id)a0;
- (id)localizedComplicationNameForBundleIdentifier:(id)a0;
- (void)enumerateBundlesForComplicationFamily:(long long)a0 device:(id)a1 withBlock:(id /* block */)a2;
- (id)allComplicationAppBundleIDs;
- (id)bundleComplicationsForBundleIdentifier:(id)a0;

@end
