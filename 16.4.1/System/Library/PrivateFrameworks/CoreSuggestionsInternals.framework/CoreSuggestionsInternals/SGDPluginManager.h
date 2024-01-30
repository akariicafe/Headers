@class NSDictionary;

@interface SGDPluginManager : NSObject {
    NSDictionary *_plugins;
}

+ (id)sharedInstance;
+ (void)_processHistoricalDataRequestsForPluginIdentifier:(id)a0 result:(id)a1;

- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setPlugins:(id)a0;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1 completion:(id /* block */)a2;
- (id)_processSearchableItem:(id)a0 harvestMetrics:(id)a1 userAction:(id)a2;
- (void)processInteraction:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 completion:(id /* block */)a3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)pluginIdentifiers;
- (id)processUserAction:(id)a0 searchableItem:(id)a1;
- (void).cxx_destruct;
- (id)processSearchableItem:(id)a0 harvestMetrics:(id)a1;

@end
