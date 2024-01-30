@class NSOperationQueue, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FPItemManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_activeCollections;
}

+ (void)_promoteItemToAppLibraryIfNeeded:(id)a0;
+ (BOOL)isAnyDocumentRecentlyUsed:(id)a0 excludedFileTypes:(id)a1 allowedFileProviderIdentifiers:(id)a2;
+ (id)defaultManager;

- (void)addOperation:(id)a0;
- (void)fetchItemForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchURLForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)fetchParentsForItemID:(id)a0 recursively:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchItemForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchVendorServiceForProviderDomainID:(id)a0 handler:(id /* block */)a1;
- (void)fetchRemoteDomainForProviderDomainID:(id)a0 handler:(id /* block */)a1;
- (id)newCollectionWithItemID:(id)a0;
- (id)newTrashCollection;
- (id)rootCollectionForProviderDomain:(id)a0;
- (id)collectionWithIdentifier:(id)a0 domainIdentifier:(id)a1 providerIdentifier:(id)a2 fileTypes:(id)a3;
- (id)collectionForFolderItem:(id)a0;
- (id)rootCollectionForProvider:(id)a0 fileTypes:(id)a1;
- (id)collectionForFolderItem:(id)a0 fileTypes:(id)a1;
- (id)collectionWithIdentifier:(id)a0 domainIdentifier:(id)a1 providerIdentifier:(id)a2 sortDescriptors:(id)a3;
- (id)collectionWithIdentifier:(id)a0 providerIdentifier:(id)a1 fileTypes:(id)a2;
- (id)newRecentsCollection;
- (id)newSearchCollection;
- (BOOL)_itemIsOfArchiveType:(id)a0;
- (void)_fetchURLForItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_fetchItemForURL:(id)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)itemForURL:(id)a0 error:(id *)a1;
- (void)_fetchHierarchyForItemID:(id)a0 recursively:(BOOL)a1 depth:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_fetchParentsForItemID:(id)a0 recursively:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchRootItemForProviderDomain:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isValidDestination:(id)a0;
- (void)fetchServicesForItemAtURL:(id)a0 synchronously:(BOOL)a1 handler:(id /* block */)a2;
- (void)fetchDefaultLocationForApplication:(id)a0 defaultProviderDomain:(id)a1 completionHandler:(id /* block */)a2;
- (id)rootCollectionForProvider:(id)a0;
- (id)trashCollectionForProviderDomain:(id)a0;
- (id)newFavoritesCollection;
- (id)newEvictableCollection;
- (id)newNonAutoEvictableCollection;
- (id)newCollectionForProvider:(id)a0;
- (id)newTagCollection;
- (id)newCollectionForTag:(id)a0;
- (id)newSharedItemsCollection;
- (id)newSearchTrashCollection;
- (id)thumbnailsFetchOperationForItems:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (id)__itemForURLWithBuggyNullability:(id)a0 error:(id *)a1;
- (void)extendBookmarkForItem:(id)a0 receivingBundleID:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchParentForItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAllParentsForItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRootItemForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDefaultLocationForApplication:(id)a0 defaultProvider:(id)a1 completionHandler:(id /* block */)a2;
- (id)eligibleActionsForItems:(id)a0;
- (id)eligibleActionsForDroppingItems:(id)a0 underItem:(id)a1;
- (id)eligibleActionsForDroppingUTIs:(id)a0 underItem:(id)a1;
- (id)operationForAction:(id)a0 items:(id)a1;
- (id)servicesForItemAtURL:(id)a0 error:(id *)a1;
- (void)recursivelyExportItem:(id)a0 toURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchIndexPropertiesForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchFSItemsForItemIdentifiers:(id)a0 providerIdentifier:(id)a1 domainIdentifier:(id)a2 materializingIfNeeded:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)evictItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchURLForItem:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_fetchHierarchyForItemID:(id)a0 recursively:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchOperationServiceForProviderDomainID:(id)a0 handler:(id /* block */)a1;
- (void)fetchURLForItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleAction:(id)a0;

@end
