@class RTPersistenceManager, NSMutableDictionary, RTInvocationDispatcher;

@interface RTStore : RTService

@property (retain, nonatomic) NSMutableDictionary *contexts;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (nonatomic) unsigned long long availability;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;

+ (id)availabilityToString:(unsigned long long)a0;
+ (id)contextTypeToString:(unsigned long long)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)initWithPersistenceManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)storeWritableObjects:(id)a0 handler:(id /* block */)a1;
- (void)removeAll:(id)a0 handler:(id /* block */)a1;
- (void)purgePredating:(id)a0 predicateMappings:(id)a1 handler:(id /* block */)a2;
- (void)_performBlock:(id /* block */)a0 contextType:(unsigned long long)a1 errorHandler:(id /* block */)a2;
- (void)executeDeleteRequests:(id)a0 context:(id)a1 handler:(id /* block */)a2;
- (void)enumerateType:(Class)a0 fetchRequest:(id)a1 enumerationBlock:(id /* block */)a2;
- (void)updateWritableObjects:(id)a0 handler:(id /* block */)a1;
- (void)fetchAvailabilityWithHandler:(id /* block */)a0;
- (void)onPersistenceManagerNotification:(id)a0;
- (void)_setupContextsHandler:(id /* block */)a0;
- (void)_onPersistenceManagerNotification:(id)a0;
- (void)_storeWritableObjects:(id)a0 handler:(id /* block */)a1;
- (void)_updateWritableObjects:(id)a0 handler:(id /* block */)a1;
- (void)_removeAll:(id)a0 handler:(id /* block */)a1;
- (void)_purgePredating:(id)a0 predicateMappings:(id)a1 handler:(id /* block */)a2;
- (void)fetchReadableObjectsOfType:(Class)a0 fetchRequest:(id)a1 handler:(id /* block */)a2;
- (void)_fetchReadableObjectsOfType:(Class)a0 fetchRequest:(id)a1 handler:(id /* block */)a2;

@end
