@class NSUUID, HMDAppleMediaAccessory, HMFMessageDispatcher, NSString, NSObject, HMDDevice;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginMessageSender : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSUUID *target;
@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
