@class HMFOSTransaction, NSString, NSUUID, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotIDSRelay : HMFObject <HMFLogging, IDSServiceDelegate>

@property (readonly) NSString *logIdentifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSUUID *sessionID;
@property (readonly) IDSService *idsStreamService;
@property (readonly) HMFOSTransaction *snapshotRelayTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)a0 logIdentifier:(id)a1 workQueue:(id)a2;

@end
