@class NTKCompanionBundleComplicationSyncCoordinator, NTKBundleComplicationDataSourceLoader;

@interface NTKBundleComplicationManager : NSObject

@property (readonly, nonatomic) NTKBundleComplicationDataSourceLoader *loader;
@property (readonly, nonatomic) NTKCompanionBundleComplicationSyncCoordinator *syncCoordinator;

+ (id)sharedManager;

- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)allComplicationAppBundleIDs;
- (BOOL)bundleComplicationExistsForAppBundleIdentifier:(id)a0;
- (id)bundleComplicationsForBundleIdentifier:(id)a0;
- (BOOL)bundleExistsWithIdentifier:(id)a0 appBundleIdentifier:(id)a1;
- (Class)dataSourceClassForBundleComplication:(id)a0;
- (void)enumerateBundlesForComplicationFamily:(long long)a0 device:(id)a1 withBlock:(id /* block */)a2;
- (id)groupIdentifierForBundleIdentifier:(id)a0;
- (id)localizedComplicationNameForBundleIdentifier:(id)a0;
- (id)sectionIdentifierForBundleIdentifier:(id)a0;
- (void)updateDescriptors;

@end
