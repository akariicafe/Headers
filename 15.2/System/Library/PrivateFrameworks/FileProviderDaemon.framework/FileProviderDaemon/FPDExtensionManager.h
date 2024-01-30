@class NSMutableDictionary, NSMapTable, FPDServer, FPDPushConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface FPDExtensionManager : NSObject {
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_providersLoadedGroup;
    id _matchingContext;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    id /* block */ _updateHandler;
}

@property (weak, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDPushConnection *pushConnection;

- (void)afterFirstDiscovery;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)a0;
- (id)nonEvictableSizeByProviderDomain;
- (void)_updateWithMatchingExtensions:(id)a0;
- (id)alternateContentsURLForItemID:(id)a0;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)a0;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (void)_serializeAlternateContentsURLDictionary:(id)a0;
- (id)domainWithID:(id)a0;
- (id)providersWithTopLevelBundleIdentifier:(id)a0;
- (id)providerDomainsByIDFromExtensionsByID:(id)a0;
- (id)extensionsByID:(id)a0;
- (void)forceSynchronousProviderUpdate;
- (id)_matchingAttributes;
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)a0;
- (id)domainFromItemID:(id)a0;
- (id)domainForActionOperationLocator:(id)a0;
- (void).cxx_destruct;
- (id)_deserializedAlternateContentsDictionary;
- (id)allProviders;
- (void)_loadAlternateContentsDictionary;
- (void)_updateProviderListForMatchingExtensions:(id)a0 allExtensionStartedHandler:(id /* block */)a1;
- (id)initWithServer:(id)a0 updateHandler:(id /* block */)a1;
- (id)domainForURL:(id)a0;
- (id)providersWithGroupContainers:(id)a0 bundleIdentifier:(id)a1;
- (id)providerDomainsByID;
- (id)providerWithIdentifier:(id)a0;
- (void)setAlternateContentsURL:(id)a0 forItemID:(id)a1;
- (void)migrateEnabledStateIfNecessary:(id)a0;
- (id)_domainForURL:(id)a0;
- (void)garbageCollectDomainsWithIdentifiers:(id)a0 fromDirectory:(id)a1 isUserData:(BOOL)a2;
- (id)uniquedExtensions:(id)a0;
- (void)accountsChanged;
- (id)clouddocsExtensionIdentifier;
- (void)loadProvidersAndMonitor;

@end
