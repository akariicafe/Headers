@class NSString;

@interface OBBundleManager : NSObject

@property (retain, nonatomic) NSString *overrideBundleSearchPath;

+ (id)sharedManager;

- (id)_allPrivacyBundles;
- (id)bundlesWithIdentifiers:(id)a0;
- (id)_bundleSearchPath;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)allBundles;
- (id)bundleWithIdentifier:(id)a0 usingSearchPath:(id)a1 includePlaceholder:(BOOL)a2 isLinkBundle:(BOOL)a3;
- (id)privacyLinkBundleForBundles:(id)a0;
- (void).cxx_destruct;
- (id)orderedPrivacyBundles;
- (id)_providersByBundleNames;
- (id)bundleWithIdentifier:(id)a0;

@end
