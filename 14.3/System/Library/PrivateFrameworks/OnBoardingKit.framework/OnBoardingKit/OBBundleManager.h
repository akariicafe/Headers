@interface OBBundleManager : NSObject

+ (id)sharedManager;

- (id)bundlesWithIdentifiers:(id)a0;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)_allPrivacyBundles;
- (id)orderedPrivacyBundles;
- (id)_bundleSearchPath;
- (id)bundleWithIdentifier:(id)a0;
- (id)allBundles;

@end
