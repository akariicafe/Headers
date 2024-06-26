@class FPXDomainContext, NSString, NSMutableDictionary, NSMutableSet, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface FPXExtensionContext : NSExtensionContext <FPXVendor, FPItemHierarchyLookingUp> {
    NSMutableSet *_listenerDelegates;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_actionsQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_runningEnumerators;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSUserDefaults *_userDefaults;
    FPXDomainContext *_domainContext;
    BOOL _isBeingDeallocated;
}

@property (class, retain, nonatomic) Class principalClass;

@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) BOOL usesFPFS;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)applyFieldChangesToItem:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 contents:(id)a3 lastKnownVendorItem:(id)a4 extensionInstance:(id)a5 completionHandler:(id /* block */)a6;
- (void)applyItemChange:(id)a0 baseVersion:(id)a1 contents:(id)a2 completionHandler:(id /* block */)a3;
- (void)importDocumentAtURL:(id)a0 intoFolderWithIdentifier:(id)a1 originalName:(id)a2 extensionInstance:(id)a3 reply:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_setTransaction:(id)a0;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)a0;
- (void)dealloc;
- (void)itemForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)trashItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fpx_invalidate;
- (void)sendBlacklistedProcessNamesUpdate;
- (id)domainContextForIdentifier:(id)a0;
- (id)domainContextForURL:(id)a0;
- (id)domainContextForItemID:(id)a0;
- (id)domainContextForItemIDs:(id)a0;
- (void)_deleteIndexInDomainContexts:(id)a0 completionHandler:(id /* block */)a1;
- (id)instanceForURL:(id)a0;
- (void)startProvidingItemAtURL:(id)a0 readingOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)instanceForDomainIdentifier:(id)a0;
- (void)changeItem:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 contents:(id)a3 options:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)_indexOutOfBandUpdatedItems:(id)a0 deletedItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)_singleItemChange:(id)a0 changedFields:(unsigned long long)a1 bounce:(BOOL)a2 bounceIndex:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)instanceForItemID:(id)a0;
- (void)providePlaceholderAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)alternateContentsURLWrapperForItemID:(id)a0;
- (id)itemForItemID:(id)a0;
- (void)identifierForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_persistedDocumentURLForURL:(id)a0 itemID:(id)a1 extension:(id)a2 creatingPlaceholderIfMissing:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)singleItemChange:(id)a0 changedFields:(unsigned long long)a1 bounce:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)itemForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (id)_proxyWithCancellationHandler:(id)a0 forClientOperation:(id)a1;
- (void)addListenerDelegate:(id)a0;
- (void)_reparentItem:(id)a0 underParent:(id)a1 withNewName:(id)a2 shouldBounce:(BOOL)a3 bounceIndex:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)deleteItemsWithIDs:(id)a0 baseVersions:(id)a1 options:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)_createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 contents:(id)a2 options:(unsigned long long)a3 targetName:(id)a4 bounce:(BOOL)a5 bounceNumber:(id)a6 completionHandler:(id /* block */)a7;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 contents:(id)a2 options:(unsigned long long)a3 bounce:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)fetchTrashIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)fetchVendorEndpoint:(id /* block */)a0;
- (void)importDidFinishWithCompletionHandler:(id /* block */)a0;
- (void)startOperation:(id)a0 toFetchThumbnailsForItemIdentifiers:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)preflightReparentItemID:(id)a0 underParentID:(id)a1 reply:(id /* block */)a2;
- (void)bulkItemChanges:(id)a0 changedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchHierarchyForItemID:(id)a0 recursively:(BOOL)a1 reply:(id /* block */)a2;
- (void)fetchDefaultContainerForBundleIdentifier:(id)a0 defaultName:(id)a1 inDomainIdentifier:(id)a2 reply:(id /* block */)a3;
- (void)fetchItemID:(id)a0 reply:(id /* block */)a1;
- (void)preflightTrashItemIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchPublishingURLForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (id)disconnectDomainID:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)performActionWithIdentifier:(id)a0 onItemsWithIdentifiers:(id)a1 domainIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)wakeForSessionIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)userInteractionErrorsForPerformingAction:(id)a0 sourceItems:(id)a1 destinationItem:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchAndStartEnumeratingWithSettings:(id)a0 observer:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchOperationServiceEndpoint:(id /* block */)a0;
- (void)beginRequestWithDomain:(id)a0 alternateContentsDictionary:(id)a1 usesFPFS:(BOOL)a2;
- (void)evictItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)itemChangedAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)bulkEvictItemsWithItemIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchServicesForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dropDomainWithCompletionHandler:(id /* block */)a0;
- (void)fetchCustomPushTopicsWithCompletionHandler:(id /* block */)a0;
- (void)wakeForPushWithCompletionHandler:(id /* block */)a0;
- (void)valuesForAttributes:(id)a0 forItemID:(id)a1 completionHandler:(id /* block */)a2;
- (void)didChangeItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)indexOneBatchInDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)URLForItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)setAlternateContentsURL:(id)a0 forDocumentWithItemID:(id)a1 completionHandler:(id /* block */)a2;
- (void)didUpdateAlternateContentsDocumentForDocumentWithItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 domainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeTrashedItemsOlderThanDate:(id)a0 domainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)dumpInternalStateToTermDumper:(id)a0 domainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)indexOneBatchInDomain:(id)a0 fromAnchor:(id)a1 toAnchor:(id)a2 updatedItems:(id)a3 deletedItems:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchCurrentIndexingAnchorForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)dropIndexForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)dumpIndexStateForDomain:(id)a0 toFileHandler:(id)a1 completionHandler:(id /* block */)a2;
- (void)acknowledgeUserVisibleRootDidChangeForDomain:(id)a0 urlWrapper:(id)a1 completionHandler:(id /* block */)a2;
- (id)contentsForItemWithIdentifier:(id)a0 version:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (id)updateExistingContents:(id)a0 ofItemWithIdentifier:(id)a1 existingVersion:(id)a2 toVersion:(id)a3 request:(id)a4 completionHandler:(id /* block */)a5;
- (void)signalEnumeratorForMaterializedItemsWithCompletionHandler:(id /* block */)a0;
- (id)instanceForItemIDs:(id)a0;
- (void)setLastUsedDate:(id)a0 forItemIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumeratorWasInvalidated:(id)a0;
- (void)removeListenerDelegate:(id)a0;

@end
