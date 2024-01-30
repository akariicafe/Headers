@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSnapshotCacheRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDSnapshotRequestHandlerProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSString *logString;
@property (readonly, nonatomic) NSMutableDictionary *snapshotCacheMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)requestSnapshot:(id)a0 streamingTierType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithWorkQueue:(id)a0 logID:(id)a1;
- (void)addSnapshotFileToCache:(id)a0;
- (void)removeSnapshotFileToCache:(id)a0 error:(id)a1;
- (void)setSnapshotFileToCache:(id)a0 proactiveSessionID:(id)a1;

@end
