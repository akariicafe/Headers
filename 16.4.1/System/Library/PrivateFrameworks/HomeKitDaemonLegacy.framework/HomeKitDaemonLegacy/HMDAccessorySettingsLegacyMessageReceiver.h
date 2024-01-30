@class HMFMessageDispatcher, NSUUID, NSString, HMDAccessorySettingsMessenger, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessorySettingsLegacyMessageReceiver : HMFObject <HMFMessageReceiver>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (weak) HMDAccessorySettingsMessenger *messenger;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
