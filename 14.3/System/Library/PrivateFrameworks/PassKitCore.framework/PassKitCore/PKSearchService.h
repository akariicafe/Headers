@class NSMutableDictionary, NSHashTable, NSObject, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKSearchService : NSObject <PKSearchServiceClientExportedInterface> {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockObservers;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockResults;
    NSMutableDictionary *_results;
}

- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)searchWithQuery:(id)a0;
- (void)cancelQueryWithIdentifier:(id)a0;
- (void)resetRegionsCoordinatesWithCompletion:(id /* block */)a0;
- (void)regionsWithCompletion:(id /* block */)a0;
- (void)invalidateSearchResults;
- (void)updateRegionWithIdentifier:(id)a0 localizedName:(id)a1 boundingRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a2 mapsIdentifier:(unsigned long long)a3 providerIdentifier:(int)a4 completion:(id /* block */)a5;
- (void)resetRegionsWithCompletion:(id /* block */)a0;
- (void)transactionsMissingRegionsWithCompletion:(id /* block */)a0;
- (void)indexedTransactionsWithCompletion:(id /* block */)a0;
- (void)indexedTransactionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)indexedPassesWithCompletion:(id /* block */)a0;
- (void)searchDidReceivePartialResults:(id)a0 forIdentifier:(id)a1;
- (void)searchDidCompleteWithError:(id)a0 forIdentifier:(id)a1;
- (id /* block */)errorHandlerForMethod:(SEL)a0 completion:(id /* block */)a1;
- (BOOL)canProvideFullResults;
- (BOOL)hasSearchableContent;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)unregisterObserver:(id)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
