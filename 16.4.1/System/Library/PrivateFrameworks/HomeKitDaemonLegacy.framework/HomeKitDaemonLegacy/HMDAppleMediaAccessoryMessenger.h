@class NSUUID, HMFMessageDispatcher, HMDAppleMediaAccessoryLocalMessageHandler, NSString, NSObject;
@protocol HMDMessageRouter, OS_dispatch_queue;

@interface HMDAppleMediaAccessoryMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDAppleMediaAccessoryLocalMessageHandler *localHandler;
@property (readonly) id<HMDMessageRouter> router;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 messageDispatcher:(id)a1 router:(id)a2 localHandler:(id)a3;
- (void)registerForMessagesWithHome:(id)a0;
- (void)routeSiriEndpointDeleteSiriHistoryMessage:(id)a0;
- (void)sendDeleteSiriHistoryRequestForAccessoryWithUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
