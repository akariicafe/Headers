@class FPDDomain, NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FPDDomainDeadEndBackend : NSObject <FPDDomainBackend> {
    FPDDomain *_domain;
}

@property (readonly, copy) NSArray *rootURLs;
@property (readonly) NSObject<OS_dispatch_queue> *backendQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (void)enumerateWithSettings:(id)a0 lifetimeExtender:(id)a1 observer:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)createIndexerWithExtension:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
- (id)startProvidingItemAtURL:(id)a0 readingOptions:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)needsRootCreation;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 urlWrapper:(id)a2 options:(unsigned long long)a3 bounceOnCollision:(BOOL)a4 request:(id)a5 completionHandler:(id /* block */)a6;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)reimportItemsBelowItemWithID:(id)a0 removeCachedItems:(BOOL)a1 markItemDataless:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)itemForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLForItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)updateRootAfterDomainChangeWithError:(id *)a0;
- (id)evictItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)resolveProviderItemID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removeAllFilesWithError:(id *)a0;
- (void)itemIDForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)startAndGetSyncAnchor:(id *)a0;
- (void)itemChangedAtURL:(id)a0 request:(id)a1;
- (BOOL)isProviderForURL:(id)a0;
- (void)dumpStateTo:(id)a0 limitNumberOfItems:(BOOL)a1;
- (id)rootURLs;
- (void)valuesForAttributes:(id)a0 forURL:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)evictItemWithID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;
- (id)createRootByImportingURL:(id)a0 error:(id *)a1;
- (void)itemForItemID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchFSItemsForItemIdentifiers:(id)a0 materializingIfNeeded:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)isAllowedToProvideItemID:(id)a0 toConsumerWithIdentifier:(id)a1;

@end
