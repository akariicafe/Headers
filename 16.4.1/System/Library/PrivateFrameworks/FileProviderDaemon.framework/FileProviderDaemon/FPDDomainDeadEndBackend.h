@class FPDDomain, NSArray, NSString, NSData, NSFileProviderDomainVersion;

@interface FPDDomainDeadEndBackend : NSObject <FPDDomainBackend> {
    FPDDomain *_domain;
}

@property (readonly, copy) NSArray *rootURLs;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) NSData *backingStoreIdentity;
@property (readonly, nonatomic) BOOL backgroundActivityIsPaused;
@property (readonly, nonatomic) long long errorGenerationCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemChangedAtURL:(id)a0 request:(id)a1;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)evictItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)valuesForAttributes:(id)a0 forURL:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDomain:(id)a0;
- (void)evictItemWithID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)startWithReason:(id)a0;
- (BOOL)isProviderForURL:(id)a0;
- (void)URLForItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)reimportItemsBelowItemWithID:(id)a0 removeCachedItems:(BOOL)a1 markItemDataless:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)itemIDForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchFSItemsForItemIdentifiers:(id)a0 materializingIfNeeded:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)movingItemAtURL:(id)a0 requiresProvidingWithDestinationURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)bulkItemChanges:(id)a0 changedFields:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (id)rootURLs;
- (void)waitForStabilizationForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)wakeForPushWithCompletionHandler:(id /* block */)a0;
- (void)copyDatabaseToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchThumbnailsAtURL:(id)a0 versions:(id)a1 size:(struct CGSize { double x0; double x1; })a2 perThumbnailCompletionHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)trashItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)forceUpdateBlockedProcessNamesFromDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchServicesForItemID:(id)a0 allowRestrictedSources:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)enumerateWithSettings:(id)a0 lifetimeExtender:(id)a1 observer:(id)a2 completionHandler:(id /* block */)a3;
- (void)materializeItemWithID:(id)a0 requestedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)resolveConflictAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)workingSetDidChangeWithCompletionHandler:(id /* block */)a0;
- (void)hasNonUploadedFilesWithCompletionHandler:(id /* block */)a0;
- (id)startProvidingItemAtURL:(id)a0 readerID:(id)a1 readingOptions:(unsigned long long)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)dumpStateTo:(id)a0 limitNumberOfItems:(BOOL)a1;
- (id)createIndexerWithExtension:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
- (void)itemForItemID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)itemForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;
- (BOOL)updateRootAfterDomainChangeWithError:(id *)a0;
- (void)hierarchyForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)needsRootsCreation;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)stateWithCompletionHandler:(id /* block */)a0;
- (void)listRemoteVersionsOfItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createRootByImportingURL:(id)a0 error:(id *)a1;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 urlWrapper:(id)a2 options:(unsigned long long)a3 bounceOnCollision:(BOOL)a4 request:(id)a5 completionHandler:(id /* block */)a6;
- (void)fetchVendorEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isAllowedToProvideItemID:(id)a0 toConsumerWithIdentifier:(id)a1;

@end
