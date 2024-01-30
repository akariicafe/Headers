@class NSMutableDictionary, NSDictionary, REObserverStore, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface REElementCoordinator : RERelevanceEngineSubsystem <REElementCoordinatorProperties> {
    NSMutableDictionary *_displayElements;
    REObserverStore *_observers;
    BOOL _performingBatch;
    NSMutableArray *_updates;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) unsigned long long numberOfObservers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSDictionary *displayElements;

+ (id)applicationPrewarmIdentifiers;

- (void)enumerateObservers:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)elementAtPath:(id)a0;
- (unsigned long long)numberOfElementsInSection:(id)a0;
- (id)initWithRelevanceEngine:(id)a0;
- (void)insertElement:(id)a0 atPath:(id)a1;
- (void)moveElement:(id)a0 fromPath:(id)a1 toPath:(id)a2;
- (void)reloadElement:(id)a0 atPath:(id)a1;
- (void)removeElement:(id)a0 atPath:(id)a1;
- (id)pathForElement:(id)a0;
- (void)didAddObserver:(id)a0;
- (void)_enqueueOrPerformOperation:(id)a0;
- (void)_enumerateValidObservers:(id /* block */)a0;
- (void)_performOperation:(id)a0 toObserver:(id)a1;
- (void)_performOperationsToDisplayElements:(id)a0;
- (void)_performOperationsToDisplayElements:(id)a0 toSection:(id)a1;
- (void)didRemoveObserver:(id)a0;
- (void)performBatchUpdateBlock:(id /* block */)a0;
- (void)refreshElement:(id)a0 atPath:(id)a1;

@end
