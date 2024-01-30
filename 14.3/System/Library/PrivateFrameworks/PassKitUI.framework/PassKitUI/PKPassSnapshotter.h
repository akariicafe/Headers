@class UIWindow, PKPassLibrary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKPassSnapshotter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PKPassLibrary *_passLibrary;
    NSObject<OS_dispatch_semaphore> *_snapshotSem;
    UIWindow *_snapshotWindow;
    double _scale;
    NSMutableArray *_currentSnapshotKeys;
}

@property (nonatomic) BOOL runsInBackgroundProcess;

+ (id)sharedInstance;
+ (void)purgeCache;
+ (void)purgeCacheOfPassSnapshotsWithUinqueID:(id)a0;

- (id)init;
- (void)snapshotWithPass:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)snapshotWithPass:(id)a0 size:(struct CGSize { double x0; double x1; })a1 suppressedContent:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)snapshotWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)snapshotWithUniqueID:(id)a0 manifestHash:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)_snapshotWithPass:(id)a0 size:(struct CGSize { double x0; double x1; })a1 suppressedContent:(unsigned long long)a2 withCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)snapshotWithUniqueID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)snapshotWithUniqueID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 suppressedContent:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)passLibrary;
- (BOOL)_cachedImageWithKey:(id)a0 completion:(id /* block */)a1;
- (void)_prepareSnapshotViewWithPass:(id)a0 size:(struct CGSize { double x0; double x1; })a1 suppressedContent:(unsigned long long)a2 cacheKey:(id)a3 completion:(id /* block */)a4;
- (void)_performSnapshot:(id)a0 size:(struct CGSize { double x0; double x1; })a1 cacheKey:(id)a2 completion:(id /* block */)a3;
- (void)_cacheItem:(id)a0 withKey:(id)a1;
- (void)snapshotWithPass:(id)a0 completion:(id /* block */)a1;

@end
