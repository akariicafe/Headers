@class HMDHomeManager, NSUUID, NSString, NSObject, HMFMessageDestination;
@protocol OS_dispatch_queue;

@interface HMDKeyTransferAgent : HMFObject <HMFLogging, HMFMessageReceiver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *progressState;
@property (readonly, copy) HMFMessageDestination *messageDestination;
@property (readonly) unsigned long long residentProvisioningStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

@end
