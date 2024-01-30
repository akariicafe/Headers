@class FPXExtensionContext, NSString, NSFileProviderDomain, NSURL, NSFileProviderRequest, NSObject;
@protocol OS_dispatch_queue;

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling> {
    NSObject<OS_dispatch_queue> *_extensionDispatchQueue;
    FPXExtensionContext *_extensionContext;
    NSFileProviderRequest *_currentRequest;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSURL *memberQueueDocumentStorageURL;
@property (copy, nonatomic) NSString *memberQueueProviderIdentifier;
@property (retain, nonatomic) NSFileProviderDomain *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_initializedByViewServices;
+ (id)_relativeComponentsOfURL:(id)a0 fromBaseURL:(id)a1;
+ (id)_resourceIDOfURL:(id)a0 outError:(id *)a1;
+ (id)placeholderURLForURL:(id)a0;
+ (BOOL)writePlaceholderAtURL:(id)a0 withMetadata:(id)a1 error:(id *)a2;

- (id)currentRequest;
- (id)providerIdentifier;
- (id)fetchThumbnailsForItemIdentifiers:(id)a0 requestedSize:(struct CGSize { double x0; double x1; })a1 perThumbnailCompletionHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)documentStorageURL;
- (void)importDidFinishWithCompletionHandler:(id /* block */)a0;
- (void)materializedItemsDidChangeWithCompletionHandler:(id /* block */)a0;
- (void)evictItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)providePlaceholderAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)performActionWithIdentifier:(id)a0 onItemsWithIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)deleteItemWithIdentifier:(id)a0 baseVersion:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)enumeratorForSearchQuery:(id)a0 error:(id *)a1;
- (id)URLForItemWithPersistentIdentifier:(id)a0;
- (BOOL)_fp_itemsMightBeTheSame:(id)a0 otherItem:(id)a1 url:(id)a2;
- (void)_withRequest:(id)a0 execute:(id /* block */)a1;
- (void)changeItem:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 contents:(id)a3 options:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)createDirectoryWithName:(id)a0 inParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 contents:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)deleteItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)disconnectWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)enumeratorForContainerItemIdentifier:(id)a0 error:(id *)a1;
- (id)fetchContentsForItemWithIdentifier:(id)a0 version:(id)a1 completionHandler:(id /* block */)a2;
- (id)fetchContentsForItemWithIdentifier:(id)a0 version:(id)a1 usingExistingContentsAtURL:(id)a2 existingVersion:(id)a3 completionHandler:(id /* block */)a4;
- (id)fetchPublishingURLForItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleEventsForBackgroundURLSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)importDocumentAtURL:(id)a0 toParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)itemChanged:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 contents:(id)a3 completionHandler:(id /* block */)a4;
- (void)itemChangedAtURL:(id)a0;
- (id)itemForIdentifier:(id)a0 error:(id *)a1;
- (id)persistentIdentifierForItemAtURL:(id)a0;
- (void)registerUpdateHandlerForPersistentIdentifier:(id)a0 updateHandler:(id /* block */)a1;
- (void)renameItemWithIdentifier:(id)a0 toName:(id)a1 completionHandler:(id /* block */)a2;
- (void)reparentItemWithIdentifier:(id)a0 toParentItemWithIdentifier:(id)a1 newName:(id)a2 completionHandler:(id /* block */)a3;
- (void)setFavoriteRank:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setLastUsedDate:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setTagData:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)startProvidingItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopProvidingItemAtURL:(id)a0;
- (id)supportedServiceSourcesForItemIdentifier:(id)a0 error:(id *)a1;
- (void)trashItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterUpdateHandlerForPersistentIdentifier:(id)a0;
- (void)untrashItemWithIdentifier:(id)a0 toParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
