@class FPDDomain, NSString, FPDExtensionSession, FPDServer, FPDXPCDomainServicerLifetimeExtender, NSObject, FPDProvider;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface FPDXPCDomainServicer : NSObject <FPDDomainServicing, FPDLifetimeServicing> {
    FPDServer *_server;
    FPDProvider *__provider;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id _activePresenterObservation;
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;
    BOOL _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
}

@property (readonly, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) FPDExtensionSession *sessionOrNil;
@property (readonly, nonatomic) FPDDomain *domainOrNil;

- (void).cxx_destruct;
- (int)pid;
- (void)dealloc;
- (void)_t_setFilePresenterObserver:(id)a0;
- (void)resolveItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDomainWithIdentifier:(id)a0 ejectable:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)description;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAndStartEnumeratingWithSettings:(id)a0 observer:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)didChangeItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidate;
- (void)stopExtendingLifetime;
- (void)_unregisterLifetimeExtension;
- (id)__providerIfExists;
- (void)_registerLifetimeExtension;
- (id)providerOrNil;
- (id)newFileProviderProxy;
- (id)initWithServer:(id)a0 providerDomainID:(id)a1 pid:(int)a2;
- (BOOL)clientCanAccessService:(id)a0 forConnection:(id)a1;
- (void)startExtendingLifetime;

@end
