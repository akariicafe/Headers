@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSnapshotCacheRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDSnapshotRequestHandlerProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_snapshotCacheMap;
}

@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)addSnapshotFileToCache:(id)a0;
- (id)initWithWorkQueue:(id)a0 logID:(id)a1;
- (BOOL)isSnapshotPresentForCharacteristicEventUUID:(id)a0;
- (void)removeSnapshotFileToCache:(id)a0 error:(id)a1;
- (void)requestSnapshot:(id)a0 streamingTierType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setSnapshotFileToCache:(id)a0 snapshotCharacteristicEventUUID:(id)a1;

@end
