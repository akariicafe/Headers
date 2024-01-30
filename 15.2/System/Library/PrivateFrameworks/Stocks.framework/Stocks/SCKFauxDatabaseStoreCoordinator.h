@class NSObject;
@protocol OS_dispatch_queue, SCKDatabaseStore;

@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator>

@property (retain, nonatomic) id<SCKDatabaseStore> store;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<SCKDatabaseStore> underlyingStore;

- (void)readWithAccessor:(id /* block */)a0;
- (void)reloadWithAccessor:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)readZone:(id)a0 withAccessor:(id /* block */)a1;
- (void)writeZone:(id)a0 withAccessor:(id /* block */)a1;
- (void).cxx_destruct;
- (void)writeWithAccessor:(id /* block */)a0;
- (id)initWithDatabaseStore:(id)a0;

@end
