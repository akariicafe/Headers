@class NSUUID, HMFMessageDispatcher, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSettingMessageMapper : HMFObject <HMFMessageReceiver>

@property (readonly) NSUUID *identifier;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
