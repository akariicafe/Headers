@class NSString, RTTimer, RTTimerManager, NSMutableArray, NSObject;
@protocol OS_os_transaction;

@interface RTLocationStore : RTStore <RTEnumerableStore> {
    RTTimerManager *_timerManager;
    NSObject<OS_os_transaction> *_flushTransaction;
}

@property (readonly, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) RTTimer *flushTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateFlushTimer;
- (void)_storeLocations:(id)a0 handler:(id /* block */)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromStoredLocationOptions:(id)a0;
- (void)removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeLocations:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_startFlushTimer;
- (id)initWithPersistenceManager:(id)a0;
- (void).cxx_destruct;
- (void)_flushCachedLocationsWithHandler:(id /* block */)a0;
- (id)init;
- (void)_fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsCountFromDate:(id)a0 toDate:(id)a1 uncertainty:(double)a2 limit:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)_fetchMetricsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredLocationsCountFromDate:(id)a0 toDate:(id)a1 uncertainty:(double)a2 limit:(unsigned long long)a3 handler:(id /* block */)a4;
- (id)initWithPersistenceManager:(id)a0 timerManager:(id)a1;
- (void)fetchMetricsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;

@end
