@class NSMapTable, NSMutableDictionary, NTKFaceSnapshotCacheRequest, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *snapshots;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue;
@property (readonly, nonatomic) NSMapTable *requestsByFace;
@property (readonly, nonatomic) NSMapTable *callCountsByFace;
@property (retain, nonatomic) NTKFaceSnapshotCacheRequest *servicingRequest;
@property (retain, nonatomic) NSMutableOrderedSet *highPriorityRequests;
@property (retain, nonatomic) NSMutableOrderedSet *lowPriorityRequests;

+ (id)snapshotCache;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_snapshotProcessInterrupted:(id)a0;
- (void)_invokeCallbacksOfFace:(id)a0 withSnapshot:(id)a1;
- (void)_attemptSnapshotForRequest:(id)a0;
- (void)_serviceRequestsIfIdle;
- (id)cachedSnapshotOfFace:(id)a0;
- (void)_attemptSnapshotOfFace:(id)a0 atQOS:(unsigned int)a1;
- (void)cancelSnapshotRequest:(id)a0;
- (void)fetchSnapshotWithRequest:(id)a0;

@end
