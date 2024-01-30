@class NSDictionary;

@interface STUsageBundleRegistry : NSObject

@property (retain) NSDictionary *reporters;
@property (retain) NSDictionary *usageApps;

- (void).cxx_destruct;
- (id)init;
- (id)usageBundleForIdentifier:(id)a0;
- (id)loadReporters;
- (id)loadBundlesForReporters:(id)a0;
- (id)allAppsWithUsageBundles;

@end
