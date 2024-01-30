@class NSCountedSet, NSArray, NSMutableDictionary, PXReusableObjectPool, NSObject;
@protocol OS_dispatch_queue;

@interface PXVideoSessionManager : PXObservable {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    PXReusableObjectPool *_ivarQueue_playerPool;
    NSMutableDictionary *_ivarQueue_sessionsByIdentifier;
    NSCountedSet *_ivarQueue_sessionCounts;
}

@property (class, readonly, nonatomic) PXVideoSessionManager *sharedInstance;

@property (readonly, nonatomic) NSArray *activeSessions;

- (id)init;
- (void).cxx_destruct;
- (id)videoSessionForAsset:(id)a0 mediaProvider:(id)a1;
- (id)videoSessionForAsset:(id)a0 mediaProvider:(id)a1 livePhotosLoopCrossfadeDuration:(double)a2 loopTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3;
- (void)dealloc;
- (id)mutableChangeObject;
- (id)description;
- (id)checkOutSessionWithContentProvider:(id)a0;
- (void)checkInVideoSession:(id)a0;

@end
