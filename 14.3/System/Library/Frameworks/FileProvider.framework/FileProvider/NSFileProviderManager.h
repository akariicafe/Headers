@class _FPFilePresenterObserver, NSString, NSArray, NSURL, NSXPCConnection, NSMutableDictionary, NSObject, NSFileProviderDomain;
@protocol FPDDomainServicing, FPDDaemon, OS_dispatch_source, OS_dispatch_semaphore, OS_dispatch_queue, NSXPCProxyCreating;

@interface NSFileProviderManager : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
    id<FPDDomainServicing, NSXPCProxyCreating> _remoteFileProvider;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection<FPDDaemon> *_connection;
    _FPFilePresenterObserver *_presentedFileObserver;
    NSURL *_documentStorageURL;
    NSString *_groupName;
    NSFileProviderDomain *_domain;
    NSObject<OS_dispatch_queue> *_signalUpdateQueue;
    NSObject<OS_dispatch_source> *_signalUpdateSource;
    NSMutableDictionary *_completionHandlersByItemID;
    unsigned long long _presenceAuthorizationStatus;
    BOOL _hasFetchedPresenceAuthorizationStatus;
}

@property (class, readonly) NSFileProviderManager *defaultManager;

@property (readonly, nonatomic) unsigned long long presenceAuthorizationStatus;
@property (copy) NSArray *presentedFiles;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSURL *documentStorageURL;

+ (BOOL)writePlaceholderAtURL:(id)a0 withDictionary:(id)a1 error:(id *)a2;
+ (void)addDomain:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)writePlaceholderAtURL:(id)a0 withMetadata:(id)a1 error:(id *)a2;
+ (id)managerForDomain:(id)a0;
+ (void)addDomain:(id)a0 forProviderIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getDomainsForProviderIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)getIdentifierForUserVisibleFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeDomain:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeDomain:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (void)removeAllDomainsWithCompletionHandler:(id /* block */)a0;
+ (void)getDomainsWithCompletionHandler:(id /* block */)a0;
+ (void)importDomain:(id)a0 fromDirectoryAtURL:(id)a1 completionHandler:(id /* block */)a2;
+ (id)placeholderURLForURL:(id)a0;
+ (void)removeAllDomainsForProviderIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeDomain:(id)a0 forProviderIdentifier:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)addDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)_signalPendingEnumerators;
- (id)_initWithProviderIdentifier:(id)a0 domain:(id)a1;
- (id)_initWithProviderIdentifier:(id)a0 groupName:(id)a1 domain:(id)a2;
- (void)remoteFileProviderWithCompletionHandler:(id /* block */)a0;
- (void)fetchRemoteFileProviderSynchronously:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_cacheProviderInfo;
- (id)itemIDForIdentifier:(id)a0;
- (void)_callCompletionHandlers:(id)a0 error:(id)a1;
- (void)_failToSignalPendingChangesWithError:(id)a0 completionHandlersByItemID:(id)a1;
- (void)setEjectable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)removeDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllDomainsWithCompletionHandler:(id /* block */)a0;
- (void)getDomainsWithCompletionHandler:(id /* block */)a0;
- (id)_initWithProviderIdentifier:(id)a0;
- (id)_initWithProviderIdentifier:(id)a0 groupName:(id)a1;
- (void)registerURLSessionTask:(id)a0 forItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getUserVisibleURLForItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)enumeratorForMaterializedItems;
- (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDownloadPolicy:(unsigned long long)a0 forItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestPresenceAuthorization;
- (void)ingestFromCacheItemWithIdentifier:(id)a0 requestedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)_connection;
- (void)evictItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)setConnected:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)signalEnumeratorForContainerItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
