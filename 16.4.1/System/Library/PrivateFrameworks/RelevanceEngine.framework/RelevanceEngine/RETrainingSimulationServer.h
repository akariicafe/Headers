@class NSXPCListener, NSString, NSMutableSet, REObserverStore, NSObject;
@protocol OS_dispatch_queue;

@interface RETrainingSimulationServer : NSObject <NSXPCListenerDelegate, RETrainingSimulationServerInterface> {
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    REObserverStore *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)addObserver:(id)a0;
- (id)_init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_safelyEnumerateObserversWithBlock:(id /* block */)a0 observerAccessBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)availableRelevanceEngines:(id /* block */)a0;
- (void)availableRelevanceEnginesDidChange;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllElementsInRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)relevanceEngine:(id)a0 createElementFromDescription:(id)a1 completion:(id /* block */)a2;
- (void)relevanceEngine:(id)a0 encodedObjectAtPath:(id)a1 completion:(id /* block */)a2;
- (void)relevanceEngine:(id)a0 performCommand:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)relevanceEngine:(id)a0 runActionOfElementWithDescription1:(id)a1 completion:(id /* block */)a2;

@end
