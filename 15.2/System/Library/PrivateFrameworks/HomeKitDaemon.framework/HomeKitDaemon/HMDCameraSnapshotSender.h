@class HMDCameraSnapshotSessionID, NSUUID, HMDAccessory, NSString, NSObject, HMDDevice;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotSender : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
