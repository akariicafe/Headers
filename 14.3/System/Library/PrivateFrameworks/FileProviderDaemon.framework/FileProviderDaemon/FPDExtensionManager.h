@class NSMutableDictionary, NSMapTable, FPDServer, FPDPushConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface FPDExtensionManager : NSObject {
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_providersLoadedGroup;
    id _matchingContext;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
}

@property (weak, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDPushConnection *pushConnection;

- (id)initWithServer:(id)a0;
- (id)clouddocsExtensionIdentifier;
- (id)domainFromItemID:(id)a0;
- (void).cxx_destruct;
- (id)providerWithIdentifier:(id)a0;
- (id)xattrForName:(id)a0 url:(id)a1;
- (void)_serializeAlternateContentsURLDictionary:(id)a0;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)a0;
- (void)loadProvidersAndMonitorWithUpdateHandler:(id /* block */)a0;
- (void)migrateEnabledStateIfNecessary:(id)a0;
- (id)_deserializedAlternateContentsDictionary;
- (id)providerDomainsByIDFromExtensionsByID:(id)a0;
- (id)providerWithTopLevelBundleIdentifier:(id)a0;
- (id)_domainForURL:(id)a0;
- (void)setAlternateContentsURL:(id)a0 forItemID:(id)a1;
- (id)providerDomainsByID;
- (id)alternateContentsURLForItemID:(id)a0;
- (id)extensionsByID:(id)a0;
- (id)uniquedExtensions:(id)a0;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)a0;
- (void)_updateProviderListForMatchingExtensions:(id)a0 allExtensionStartedHandler:(id /* block */)a1;
- (id)domainForURL:(id)a0;
- (id)nonEvictableSizeByProviderDomain;
- (void)_loadAlternateContentsDictionary;
- (void)afterFirstDiscovery;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)allProviders;
- (id)domainForActionOperationLocator:(id)a0;
- (void)garbageCollectDomainOwnedDirectoriesAtURL:(id)a0 isUserData:(BOOL)a1 installedProviderIdentifiers:(id)a2;

@end
