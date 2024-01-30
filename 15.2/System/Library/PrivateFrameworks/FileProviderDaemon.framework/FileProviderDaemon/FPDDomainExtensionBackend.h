@class NSData, NSString, NSArray, NSFileProviderDomainVersion, NSURL, NSMutableDictionary, NSObject, FPDDomain;
@protocol OS_dispatch_queue;

@interface FPDDomainExtensionBackend : NSObject <FPDDomainBackend> {
    FPDDomain *_domain;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;
    NSMutableDictionary *_provideFileCompletionsByURL;
}

@property (readonly, copy) NSArray *rootURLs;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) NSData *backingStoreIdentity;
@property (readonly, copy) NSURL *temporaryDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemChangedAtURL:(id)a0 request:(id)a1;
- (void)enumerateWithSettings:(id)a0 lifetimeExtender:(id)a1 observer:(id)a2 completionHandler:(id /* block */)a3;
- (void)valuesForAttributes:(id)a0 forURL:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDomain:(id)a0;
- (void)waitForStabilizationForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (BOOL)updateRootAfterDomainChangeWithError:(id *)a0;
- (id)startProvidingItemAtURL:(id)a0 readerID:(id)a1 readingOptions:(unsigned long long)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (id)nsfpRequest:(id)a0;
- (void)movingItemAtURL:(id)a0 requiresProvidingWithDestinationURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)createIndexerWithExtension:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
- (void)fetchFSItemsForItemIdentifiers:(id)a0 materializingIfNeeded:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)bulkItemChanges:(id)a0 changedFields:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)evictItemWithID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)_cancelProvidingItemAtURL:(id)a0 withKey:(id)a1 request:(id)a2;
- (id)newFileProviderProxyWithRequest:(id)a0;
- (void)fetchServicesForItemID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)workingSetDidChangeWithCompletionHandler:(id /* block */)a0;
- (BOOL)start;
- (void)dumpStateTo:(id)a0 limitNumberOfItems:(BOOL)a1;
- (void)itemForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)trashItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)itemForItemID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reimportItemsBelowItemWithID:(id)a0 removeCachedItems:(BOOL)a1 markItemDataless:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)createRootByImportingURL:(id)a0 error:(id *)a1;
- (void)copyDatabaseToURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)needsRootsCreation;
- (id)newFileProviderProxyWithTimeout:(BOOL)a0 request:(id)a1;
- (id)evictItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)itemIDForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)checkForPendingSetChanges;
- (void)didIndexOneBatchWithError:(id)a0 updatedItems:(id)a1 deletedIDs:(id)a2 anchor:(id)a3;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 urlWrapper:(id)a2 options:(unsigned long long)a3 bounceOnCollision:(BOOL)a4 request:(id)a5 completionHandler:(id /* block */)a6;
- (void)URLForItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)isProviderForURL:(id)a0;
- (void)fetchVendorEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
