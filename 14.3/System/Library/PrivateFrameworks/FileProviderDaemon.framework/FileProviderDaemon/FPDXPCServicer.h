@class NSXPCConnection, NSHashTable, FPDServer, NSObject;
@protocol OS_dispatch_queue;

@interface FPDXPCServicer : NSObject <FPDDaemon> {
    NSHashTable *_providerServicers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) FPDServer *server;
@property (weak, nonatomic) NSXPCConnection *connection;

- (void)restoreUserURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDaemonOperationIDsWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)getDomainsForProviderIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setAlternateContentsURL:(id)a0 onDocumentURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)reindexAllSearchableItemsForBundleIDs:(id)a0 acknowledgementHandler:(id /* block */)a1;
- (void)forceIngestionForItemIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)backUpUserURL:(id)a0 outputUserURL:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)writeMetadata:(id)a0 onURL:(id)a1 error:(id *)a2;
- (void)documentURLFromItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)a0;
- (void)startAccessingOperationServiceForProviderDomainID:(id)a0 handler:(id /* block */)a1;
- (void)fetchDomainServicerForProviderDomainID:(id)a0 handler:(id /* block */)a1;
- (int)pid;
- (void)fetchListOfMonitoredApps:(id /* block */)a0;
- (void)setEnabled:(BOOL)a0 forDomainIdentifier:(id)a1 providerIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)evictItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)enumerateMaterializedSetForDomain:(id)a0 inProvider:(id)a1 syncAnchor:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)clientHasSandboxAccessToFile:(id)a0;
- (void)bookmarkableStringFromDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)dumpStateTo:(id)a0 limitNumberOfItems:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)currentMaterializedSetSyncAnchorForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateBlacklistedProcessNamesForProvider:(id)a0 processNames:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isNonSandboxedConnection;
- (void)wakeUpForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)reimportItemsBelowItemWithID:(id)a0 removeCachedItems:(BOOL)a1 markItemDataless:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)startOperation:(id)a0 toFetchIconsForAppBundleIDs:(id)a1 requestedSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 completionHandler:(id /* block */)a4;
- (void)pinItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)extendBookmarkForItemID:(id)a0 consumerID:(id)a1 completionHandler:(id /* block */)a2;
- (void)itemForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)startAccessingServiceForItemURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleActionOperationWithInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)startAccessingExtensionForProviderDomainID:(id)a0 handler:(id /* block */)a1;
- (id)createDomainServicerForProviderDomainID:(id)a0 enumerateEntitlementRequired:(BOOL)a1 error:(id *)a2;
- (void)trashItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)startProvidingItemAtURL:(id)a0 fromProviderID:(id)a1 forConsumerID:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateLastUsedDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)materializeURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (void)extendBookmarkForFileURL:(id)a0 toConsumerID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDownloadPolicy:(unsigned long long)a0 forItemWithID:(id)a1 completionHandler:(id /* block */)a2;
- (void)documentURLFromBookmarkableString:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)providerDomainsCompletionHandler:(id /* block */)a0;
- (void)_test_simulateInstallOfBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)makeTopologicallySortedItemsOnDisk:(id)a0 completionHandler:(id /* block */)a1;
- (void)ingestFromCacheItemWithID:(id)a0 requestedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)unpinItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteURLBecameFrontmost:(id)a0 inWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchIndexPropertiesForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_test_retrieveItemWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)extendSandboxForFileURL:(id)a0 fromProviderID:(id)a1 toConsumerID:(id)a2 completionHandler:(id /* block */)a3;
- (void)startAccessingServiceForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)startAccessingServiceForItemID:(id)a0 connection:(id)a1 enumerateEntitlementRequired:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getURLForContainerWithItemID:(id)a0 inDataScopeDomainWithIdentifier:(id)a1 documentsScopeDomainIdentifier:(id)a2 documentsFolderItemIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 urlWrapper:(id)a2 options:(unsigned long long)a3 bounceOnCollision:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)getSyncedRootsURLs:(id /* block */)a0;
- (id)providerForCurrentConnection;
- (void)startDownloadingItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchFSItemsForItemIdentifiers:(id)a0 providerIdentifier:(id)a1 domainIdentifier:(id)a2 materializingIfNeeded:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)providerForIdentifier:(id)a0 enumerateEntitlementRequired:(BOOL)a1 error:(id *)a2;
- (void)fetchAccessServicer:(id /* block */)a0;
- (void)_forceIngestionForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_test_simulateUninstallOfBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a0;
- (void)fetchDaemonOperationWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)valuesForAttributes:(id)a0 forItemAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)stageLocation;
- (void)providerDomainForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)providerDomainForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)evictItemAtURL:(id)a0 evenIfEnumeratingFP:(BOOL)a1 andClearACLForConsumer:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeAllDomainsForProviderIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAlternateContentsURLForDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceIngestionForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_test_callRemoveTrashedItemsOlderThanDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidate;
- (void)removeDomain:(id)a0 forProviderIdentifier:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)addDomain:(id)a0 forProviderIdentifier:(id)a1 byImportingDirectoryAtURL:(id)a2 completionHandler:(id /* block */)a3;

@end
