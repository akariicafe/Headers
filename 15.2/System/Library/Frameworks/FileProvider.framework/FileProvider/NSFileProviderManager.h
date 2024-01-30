@class _FPFilePresenterObserver, NSString, NSArray, NSURL, NSXPCConnection, NSMutableDictionary, FPProgressUpdater, NSObject, NSFileProviderDomain;
@protocol FPDDomainServicing, FPDDaemon, OS_dispatch_source, OS_dispatch_group, OS_dispatch_semaphore, FPXPCAutomaticErrorProxy, OS_dispatch_queue;

@interface NSFileProviderManager : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
    id<FPDDomainServicing, FPXPCAutomaticErrorProxy> _remoteFileProvider;
    BOOL _isIncomingConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection<FPDDaemon> *_connection;
    _FPFilePresenterObserver *_presentedFileObserver;
    NSURL *_documentStorageURL;
    NSString *_groupName;
    NSFileProviderDomain *_domain;
    NSObject<OS_dispatch_queue> *_signalUpdateQueue;
    NSObject<OS_dispatch_source> *_signalUpdateSource;
    NSObject<OS_dispatch_group> *_signalUpdateGroup;
    NSMutableDictionary *_completionHandlersByItemID;
    FPProgressUpdater *_downloadProxy;
    FPProgressUpdater *_uploadProxy;
}

@property (class, readonly) NSFileProviderManager *legacyDefaultManager;
@property (class, readonly) NSFileProviderManager *defaultManager;

@property (copy) NSArray *presentedFiles;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSURL *documentStorageURL;

+ (void)removeAllDomainsForProviderIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getDomainsWithCompletionHandler:(id /* block */)a0;
+ (void)addDomain:(id)a0 forProviderIdentifier:(id)a1 byImportingDirectoryAtURL:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getDomainsForProviderIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)addDomain:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeAllDomainsWithCompletionHandler:(id /* block */)a0;
+ (void)removeDomain:(id)a0 mode:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)removeDomain:(id)a0 completionHandler:(id /* block */)a1;
+ (id)managerForDomain:(id)a0;
+ (void)registerDomainServicer:(id)a0 forDomain:(id)a1;
+ (void)registerRootURL:(id)a0 forDomain:(id)a1;
+ (id)placeholderURLForURL:(id)a0;
+ (BOOL)writePlaceholderAtURL:(id)a0 withDictionary:(id)a1 error:(id *)a2;
+ (BOOL)writePlaceholderAtURL:(id)a0 withMetadata:(id)a1 error:(id *)a2;
+ (void)_registerNotificationsForProviderIdentifier:(id)a0;
+ (void)getIdentifierForUserVisibleFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)addDomain:(id)a0 forProviderIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)importDomain:(id)a0 fromDirectoryAtURL:(id)a1 completionHandler:(id /* block */)a2;

- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithProviderIdentifier:(id)a0 domain:(id)a1;
- (void)reconnectWithCompletionHandler:(id /* block */)a0;
- (id)_connection;
- (void)getDomainsWithCompletionHandler:(id /* block */)a0;
- (void)waitForSignalDeliveryWithCompletionHandler:(id /* block */)a0;
- (void)ingestFromCacheItemWithIdentifier:(id)a0 requestedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)lookupRequestingApplicationIdentifier:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)_failToSignalPendingChangesWithError:(id)a0 completionHandlersByItemID:(id)a1;
- (id)listAvailableTestingOperationsWithError:(id *)a0;
- (id)globalProgressForKind:(id)a0;
- (id)description;
- (void)removeDomain:(id)a0 options:(long long)a1 completionHandler:(id /* block */)a2;
- (id)_test_existingProgressForKind:(id)a0;
- (id)runTestingOperations:(id)a0 error:(id *)a1;
- (void)disconnectWithReason:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_signalPendingEnumerators;
- (void)addDomain:(id)a0 completionHandler:(id /* block */)a1;
- (id)temporaryDirectoryURLWithError:(id *)a0;
- (void)evictItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)startObservingGlobalProgressForKind:(id)a0;
- (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setConnected:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)enumeratorForMaterializedItems;
- (void).cxx_destruct;
- (void)getUserVisibleURLForItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)a0;
- (id)enumeratorForPendingItems;
- (void)removeAllDomainsWithCompletionHandler:(id /* block */)a0;
- (void)domainServicerWithCompletionHandler:(id /* block */)a0;
- (void)signalErrorResolved:(id)a0 completionHandler:(id /* block */)a1;
- (void)startObservingUploadProgress;
- (void)registerURLSessionTask:(id)a0 forItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_initWithProviderIdentifier:(id)a0 groupName:(id)a1;
- (void)removeDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)signalEnumeratorForContainerItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cacheProviderInfo;
- (id)_initWithProviderIdentifier:(id)a0 groupName:(id)a1 domain:(id)a2;
- (void)_callCompletionHandlers:(id)a0 error:(id)a1;
- (void)setDownloadPolicy:(unsigned long long)a0 forItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)startObservingDownloadProgress;
- (void)setEjectable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)itemIDForIdentifier:(id)a0;
- (void)fetchDomainServicerSynchronously:(BOOL)a0 useOutgoingConnection:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)isErrorSupportedForSignalResolved:(id)a0;
- (id)_initWithProviderIdentifier:(id)a0;

@end
