@class NSMutableDictionary, NSMapTable, FPDServer, FPDPushConnection, NSObject;
@protocol OS_dispatch_queue;

@interface FPDExtensionManager : NSObject {
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id _matchingContext;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    id /* block */ _updateHandler;
}

@property (weak, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDPushConnection *pushConnection;

- (void)purge:(id)a0;
- (id)clouddocsExtensionIdentifier;
- (id)providerDomainsByID;
- (id)uniquedExtensions:(id)a0;
- (id)domainForActionOperationLocator:(id)a0;
- (id)_deserializedAlternateContentsDictionary;
- (id)domainWithID:(id)a0;
- (id)initWithServer:(id)a0 updateHandler:(id /* block */)a1;
- (void)afterFirstDiscovery;
- (id)domainFromItemID:(id)a0;
- (id)_matchingAttributes;
- (void)accountsChanged:(id)a0;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)a0;
- (void)forceSynchronousProviderUpdate;
- (id)nonEvictableSizeByProviderDomain;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (void)_updateProviderListForMatchingExtensions:(id)a0 allExtensionStartedHandler:(id /* block */)a1;
- (void)migrateEnabledStateIfNecessary:(id)a0;
- (id)domainForURL:(id)a0;
- (id)providerDomainsByIDFromExtensionsByID:(id)a0;
- (id)allProviders;
- (void)updateActiveProvidersForSpotlight;
- (id)alternateContentsURLForItemID:(id)a0;
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)a0;
- (void)_serializeAlternateContentsURLDictionary:(id)a0;
- (id)_domainForURL:(id)a0;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)a0;
- (void)garbageCollectDomainsExceptIdentifiers:(id)a0 fromDirectory:(id)a1 isUserData:(BOOL)a2;
- (void)_updateWithMatchingExtensions:(id)a0;
- (id)providersWithGroupContainers:(id)a0 bundleIdentifier:(id)a1;
- (void)loadProvidersAndMonitor;
- (void)providerUpdateOnVolume:(id)a0;
- (void)setAlternateContentsURL:(id)a0 forItemID:(id)a1;
- (id)providersWithTopLevelBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)extensionsByID:(id)a0;
- (id)domainsForAppBundleIdentifier:(id)a0;
- (id)providerWithIdentifier:(id)a0;
- (void)_loadAlternateContentsDictionary;

@end
