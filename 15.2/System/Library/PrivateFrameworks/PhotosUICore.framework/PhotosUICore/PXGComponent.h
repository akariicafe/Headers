@class PXGMutableComponentDataStore, PXGComponentDataStore;
@protocol PXGComponentObserver;

@interface PXGComponent : NSObject {
    long long _nestedChanges;
}

@property (class, readonly, nonatomic) unsigned long long elementSize;
@property (class, readonly, nonatomic) BOOL shouldDiffForChanges;

@property (weak, nonatomic) id<PXGComponentObserver> observer;
@property (readonly, nonatomic) PXGMutableComponentDataStore *previousDataStore;
@property (readonly, nonatomic) PXGComponentDataStore *dataStore;
@property (readonly, nonatomic) PXGMutableComponentDataStore *mutableDataStore;

- (id)initWithDataStore:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)cleanupUnusedObjects;
- (void).cxx_destruct;
- (id)init;
- (void)willDestroyEntities:(const struct { unsigned int x0; } *)a0 count:(long long)a1;

@end
