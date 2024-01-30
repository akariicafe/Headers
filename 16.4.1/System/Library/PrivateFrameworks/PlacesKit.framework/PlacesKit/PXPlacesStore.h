@class NSSet, NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol PXPlacesGeotaggedItemDataSourceDelegate, OS_dispatch_semaphore;

@interface PXPlacesStore : NSObject <PXPlacesGeotaggedItemDataSource> {
    struct _PXQuadTreeStoreNode { struct _PXQuadTreeStoreNode *x0; struct _PXQuadTreeStoreNode *x1; struct _PXQuadTreeStoreNode *x2; struct _PXQuadTreeStoreNode *x3; unsigned long long x4; unsigned long long x5; struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } x6; id x7; struct *x8; } *_rootNode;
    _Atomic int _updateCount;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    NSObject<OS_dispatch_semaphore> *_itemChangeSemaphore;
}

@property struct { struct { double x; double y; } origin; struct { double width; double height; } size; } rect;
@property (retain) NSMutableSet *itemsToAdd;
@property (retain) NSMutableArray *itemsToAddArray;
@property (retain) NSMutableSet *itemsToRemove;
@property id<PXPlacesGeotaggedItemDataSourceDelegate> delegate;
@property (readonly) unsigned long long capacityPerNode;
@property (readonly) NSSet *allItems;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)traceStoreLog;
+ (id)traceStoreQueryLog;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (void)addItemsFromArray:(id)a0;
- (void)removeItems:(id)a0;
- (void)dealloc;
- (id)init;
- (void)endUpdates;
- (void)addItems:(id)a0;
- (void)beginUpdates;
- (void)_commitChanges;
- (id)_findItemsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)findItemsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithCapacityPerNode:(unsigned long long)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })minimalEncompassingMapRect;
- (void)runNodeDebugCollector:(id /* block */)a0;

@end
