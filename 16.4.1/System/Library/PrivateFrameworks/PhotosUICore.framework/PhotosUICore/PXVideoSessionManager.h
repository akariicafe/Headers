@class NSCountedSet, NSArray, NSString, PXReusableObjectPool, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXVideoSessionManager : PXObservable <PXChangeObserver> {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    PXReusableObjectPool *_ivarQueue_playerPool;
    NSMutableDictionary *_ivarQueue_sessionsByIdentifier;
    NSCountedSet *_ivarQueue_sessionCounts;
    BOOL _ivarQueue_canStoreReusablePlayers;
}

@property (class, readonly, nonatomic) PXVideoSessionManager *sharedInstance;

@property (readonly, nonatomic) NSArray *activeSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLivePhotoStabilizationEnabled;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })livePhotoCrossfadeDuration;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)mutableChangeObject;
- (id)init;
- (void).cxx_destruct;
- (void)_handleMediaServicesWereResetNotification:(id)a0;
- (void)_ivarQueue_flushReusablePlayerPool;
- (void)_updateCanStoreReusablePlayers;
- (void)checkInVideoSession:(id)a0;
- (id)checkOutSessionWithContentProvider:(id)a0;
- (id)contentProviderForAsset:(id)a0 withOptions:(id)a1 mediaProvider:(id)a2 requestURLOnly:(BOOL)a3;
- (id)videoSessionForAsset:(id)a0 mediaProvider:(id)a1;
- (id)videoSessionForAsset:(id)a0 withOptions:(id)a1 mediaProvider:(id)a2;

@end
