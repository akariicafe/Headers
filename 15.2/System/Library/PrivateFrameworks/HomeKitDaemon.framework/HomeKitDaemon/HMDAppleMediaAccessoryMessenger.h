@class NSUUID, HMFMessageDispatcher, HMDAppleMediaAccessoryMessageRouter, HMDAppleMediaAccessoryLocalMessageHandler, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAppleMediaAccessoryMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDAppleMediaAccessoryMessageRouter *router;
@property (readonly) HMDAppleMediaAccessoryLocalMessageHandler *localHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)sendDeleteSiriHistoryRequestForAccessoryWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerForMessagesWithHome:(id)a0;
- (void)routeSiriEndpointDeleteSiriHistoryMessage:(id)a0;
- (id)initWithIdentifier:(id)a0 messageDispatcher:(id)a1 router:(id)a2 localHandler:(id)a3;

@end
