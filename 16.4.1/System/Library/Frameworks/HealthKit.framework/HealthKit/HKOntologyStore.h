@class HKObserverSet, NSString, NSUUID, HKTaskServerProxyProvider;
@protocol HKOntologyStoreObserver;

@interface HKOntologyStore : NSObject <_HKXPCExportable, HKOntologyStoreClientInterface> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet<HKOntologyStoreObserver> *_observers;
}

@property (copy, nonatomic) id /* block */ unitTesting_didChangeObserverRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)remoteInterface;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void)downloadRequiredShardsWithCompletion:(id /* block */)a0;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)updateShardRegistryWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_callUnitTestHookObserving:(BOOL)a0 success:(BOOL)a1 error:(id)a2;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversAboutReconnect;
- (void)_observeOntologyStoreChanges:(BOOL)a0 completion:(id /* block */)a1;
- (void)_registerFirstObserver;
- (BOOL)_synchronouslyRegisterToObserveOntologyStoreChanges:(id *)a0;
- (void)_unregisterLastObserver;
- (void)client_didImportEntry:(id)a0;
- (void)client_didStageEntry:(id)a0;
- (void)importRequiredShardsWithCompletion:(id /* block */)a0;
- (void)insertEntries:(id)a0 completion:(id /* block */)a1;
- (void)markShardsWithIdentifiers:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)ontologyServerURLWithCompletion:(id /* block */)a0;
- (void)ontologyShardRegistryEntriesWithCompletion:(id /* block */)a0;
- (void)pruneOntologyWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)requestGatedOntologyUpdateWithCompletion:(id /* block */)a0;
- (void)setOntologyServerURL:(id)a0 completion:(id /* block */)a1;
- (void)shardRequirementStatusesWithCompletion:(id /* block */)a0;
- (void)unitTest_noOpWithCompletion:(id /* block */)a0;
- (void)updateOntologyForReason:(long long)a0 completion:(id /* block */)a1;

@end
