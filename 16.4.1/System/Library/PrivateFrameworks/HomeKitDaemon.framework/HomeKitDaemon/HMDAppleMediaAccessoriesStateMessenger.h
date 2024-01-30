@class NSUUID, HMFMessageDispatcher, NSString, NSObject;
@protocol OS_dispatch_queue, HMDAppleMediaAccessoriesStateMessengerDelegate;

@interface HMDAppleMediaAccessoriesStateMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (weak) id<HMDAppleMediaAccessoriesStateMessengerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)handleAppleMediaAccessoryModelIdentifierRequestMessage:(id)a0;
- (id)initWithIdentifier:(id)a0 messageDispatcher:(id)a1;
- (void)registerForMessagesWithHome:(id)a0;
- (id)relayMessageName:(id)a0 payload:(id)a1 toAppleMediaAccessory:(id)a2;
- (void)sendModelIdentifierRequestMessageToAppleMediaAccessory:(id)a0 withAccessoryIdentifier:(id)a1 completion:(id /* block */)a2;

@end
