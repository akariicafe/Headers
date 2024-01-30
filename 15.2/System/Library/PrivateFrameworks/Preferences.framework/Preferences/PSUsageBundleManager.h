@class NSDictionary, NSArray, NSMutableArray;

@interface PSUsageBundleManager : NSObject {
    NSDictionary *_bundleMap;
    NSArray *_usageBundleApps;
    NSMutableArray *_storageReporters;
}

- (id)allUsageBundleApps;
- (void)_loadUsageBundlesWithHandler:(id /* block */)a0;
- (void)vendUsageBundleAppsWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
