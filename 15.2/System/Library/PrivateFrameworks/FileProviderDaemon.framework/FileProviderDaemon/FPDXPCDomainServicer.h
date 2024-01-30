@class FPDExtensionSession, NSString, FPDServer, NSXPCConnection, FPDProvider, FPDXPCDomainServicerLifetimeExtender, NSObject, FPDDomain;
@protocol OS_os_log, OS_os_transaction, OS_dispatch_queue, FPProgressProtocol;

@interface FPDXPCDomainServicer : NSObject <FPDDomainServicing, FPDLifetimeServicing> {
    FPDServer *_server;
    FPDProvider *__provider;
    FPDDomain *_domain;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id _activePresenterObservation;
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;
    BOOL _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) FPDExtensionSession *sessionOrNil;
@property (readonly, nonatomic) FPDDomain *domainOrNil;
@property (retain, nonatomic) id<FPProgressProtocol> uploadProxy;
@property (retain, nonatomic) id<FPProgressProtocol> downloadProxy;

- (void)subscribeToUploadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)_unregisterLifetimeExtension;
- (void)ingestFromCacheItemWithIdentifier:(id)a0 requestedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_t_setFilePresenterObserver:(id)a0;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDomainEjectable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)fetchAndStartEnumeratingWithSettings:(id)a0 observer:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)_registerLifetimeExtension;
- (void)didChangeItemID:(id)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (id)initWithServer:(id)a0 providerDomainID:(id)a1 domain:(id)a2 connection:(id)a3;
- (void)temporaryDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)evictItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopExtendingLifetime;
- (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)a0;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)startExtendingLifetime;
- (id)newFileProviderProxy;
- (void)signalErrorResolved:(id)a0 completionHandler:(id /* block */)a1;
- (id)providerOrNil;
- (void)listAvailableTestingOperationsWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setDownloadPolicy:(unsigned long long)a0 forItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (int)pid;
- (void)runTestingOperations:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeToDownloadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (id)__providerIfExists;

@end
