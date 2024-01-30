@class NSMutableArray, NSObject;
@protocol OS_dispatch_group, NAScheduler, OS_dispatch_queue, MTSyncChangeStore;

@interface MTSyncChangeQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *changesLoaded;
@property (retain, nonatomic) id<MTSyncChangeStore> changeStore;
@property (retain, nonatomic) NSMutableArray *changeQueue;

- (id)_resolveChange:(id)a0;
- (BOOL)hasPendingChanges;
- (void)_enqueueAction:(id)a0;
- (void)_enqueueChange:(id)a0 changeCompareBlock:(id /* block */)a1;
- (void)persistChanges;
- (void)dequeueChanges:(id)a0;
- (void)enqueueChange:(id)a0;
- (void).cxx_destruct;
- (void)removePendingChanges;
- (id)initWithChangeStore:(id)a0;
- (id)_resolveChange:(id)a0 resolutionHandler:(id /* block */)a1;
- (id)resolveChange:(id)a0;
- (void)performBlockOnceChangesAreLoaded:(id /* block */)a0 async:(BOOL)a1;
- (void)loadChanges;
- (id)pendingChanges;

@end
