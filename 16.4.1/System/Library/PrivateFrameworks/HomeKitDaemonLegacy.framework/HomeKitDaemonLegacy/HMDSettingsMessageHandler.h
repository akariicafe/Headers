@class NSUUID, NSString, HMFMessageDispatcher, HMDUserMessagePolicy, NSObject;
@protocol HMDSettingsMessageController, OS_dispatch_queue;

@interface HMDSettingsMessageHandler : HMFObject <HMFMessageReceiver, HMDSettingsMessageHandlerProtocol, HMFLogging> {
    HMFMessageDispatcher *_messageDispatcher;
    NSObject<OS_dispatch_queue> *_queue;
    HMDUserMessagePolicy *_anyUserAllowedPolicy;
}

@property (retain, nonatomic) NSUUID *messageTargetUUID;
@property (weak) id<HMDSettingsMessageController> privateMessageController;
@property (weak) id<HMDSettingsMessageController> sharedMessageController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
