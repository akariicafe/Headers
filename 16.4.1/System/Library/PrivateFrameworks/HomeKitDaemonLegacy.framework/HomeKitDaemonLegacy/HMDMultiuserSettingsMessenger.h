@class HMFMessageDispatcher, NSString, HMDHome, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMultiuserSettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

@end
