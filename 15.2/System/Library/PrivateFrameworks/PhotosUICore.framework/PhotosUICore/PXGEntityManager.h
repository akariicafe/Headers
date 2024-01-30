@class PXGEffectComponent, NSMapTable, NSMutableIndexSet, PXGLoadingStatusComponent, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXGEntityManager : NSObject <PXGComponentObserver> {
    NSMapTable *_observersByComponent;
    NSMapTable *_componentByClass;
    NSMutableArray *_components;
    NSMapTable *_componentByDataStore;
    NSMutableIndexSet *_reusableEntityIDs;
    long long _componentsPerformingChangesCount;
}

@property (readonly, nonatomic) PXGLoadingStatusComponent *loadingStatus;
@property (readonly, nonatomic) PXGEffectComponent *effectComponent;
@property (nonatomic) long long capacity;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)destroyEntities:(const struct { unsigned int x0; } *)a0 count:(long long)a1;
- (id)initWithQueue:(id)a0;
- (void)_configureComponent:(id)a0;
- (void)cleanupUnusedObjects;
- (void)destroyEntity:(struct { unsigned int x0; })a0;
- (id)componentsForComponentClasses:(id)a0;
- (id)description;
- (void)componentWillPerformChanges:(id)a0;
- (void).cxx_destruct;
- (BOOL)_hasObserversForComponent:(id)a0;
- (id)init;
- (struct { unsigned int x0; })createEntity;
- (id)componentForClass:(Class)a0;
- (void)componentDidPerformChanges:(id)a0;
- (void)createEntitiesWithCount:(long long)a0 addingToArray:(struct { unsigned int x0; } *)a1;
- (void)_notifyChangesForComponent:(id)a0;
- (void)registerObserver:(id)a0 forComponents:(id)a1;

@end
