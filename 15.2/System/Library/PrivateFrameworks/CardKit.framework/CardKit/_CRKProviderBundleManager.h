@class NSMutableSet;

@interface _CRKProviderBundleManager : CRBundleManager {
    NSMutableSet *_providerBundles;
}

+ (id)sharedInstance;
+ (id)bundleDirectoryName;
+ (Class)bundleClass;

- (void).cxx_destruct;
- (void)getProviderBundlesWithCompletion:(id /* block */)a0;

@end
