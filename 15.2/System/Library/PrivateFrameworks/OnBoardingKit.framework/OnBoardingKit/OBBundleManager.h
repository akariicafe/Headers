@interface OBBundleManager : NSObject

+ (id)sharedManager;

- (id)_bundleSearchPath;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)orderedPrivacyBundles;
- (id)bundleWithIdentifier:(id)a0;
- (id)_allPrivacyBundles;
- (id)bundlesWithIdentifiers:(id)a0;
- (id)allBundles;

@end
