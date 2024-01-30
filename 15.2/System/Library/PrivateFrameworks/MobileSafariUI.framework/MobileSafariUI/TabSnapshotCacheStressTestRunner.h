@class TabSnapshotCache, NSString, NSMutableOrderedSet;
@protocol TabSnapshotCacheStressTestRunnerDelegate;

@interface TabSnapshotCacheStressTestRunner : NSObject <TabSnapshotCacheDelegate>

@property (retain, nonatomic) TabSnapshotCache *cache;
@property (retain, nonatomic) NSMutableOrderedSet *currentUUIDs;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) unsigned long long cachesUntilNextIteration;
@property (nonatomic) unsigned long long maxIterations;
@property (weak, nonatomic) id<TabSnapshotCacheStressTestRunnerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tabSnapshotCacheShouldDeferNextSnapshotRequest:(id)a0;
- (unsigned long long)capacityForTabSnapshotCache:(id)a0;
- (void)tabSnapshotCache:(id)a0 didEvictSnapshotWithIdentifier:(id)a1;
- (void)tabSnapshotCache:(id)a0 didCacheSnapshotWithIdentifier:(id)a1;
- (void)start;
- (void)tabSnapshotCacheDidFinishUpdating:(id)a0;
- (void).cxx_destruct;
- (void)tabSnapshotCache:(id)a0 requestSnapshotWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)tabSnapshotCache:(id)a0 shouldRequestSavedSnapshotWithIdentifier:(id)a1;
- (id)snapshotsToPresistOnDiskForTabSnapshotCache:(id)a0;
- (void)_runIteration;
- (id)_mutableOrderedSetOfUUIDsWithCount:(unsigned long long)a0;
- (id)_mutatedUUIDsFromUUIDs:(id)a0;

@end
