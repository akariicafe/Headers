@class HMDCameraSnapshotSessionID, HMFOSTransaction, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStream : HMFObject <IDSServiceDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) IDSService *idsProxyService;
@property (retain, nonatomic) HMFOSTransaction *snapshotStreamTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
