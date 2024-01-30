@class HMFMessageDispatcher, NSUUID, HMDHome, NSString, NSObject;
@protocol OS_dispatch_queue, HMDHomeMediaSystemMessageHandlerDelegate;

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFMessageReceiver>

@property (readonly, weak) HMDHome *home;
@property (readonly, weak) id<HMDHomeMediaSystemMessageHandlerDelegate> delegate;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_registerForMessages;
- (id)messageDestination;
- (void)_handleAddMediaSystem:(id)a0;
- (void)_handleRemoveMediaSystem:(id)a0;
- (id)preProcessMediaSystemMessage:(id)a0;
- (void)_handleAddMediaSystemWithPreProcessedMessage:(id)a0;
- (id)initWithQueue:(id)a0 home:(id)a1 messageDispatcher:(id)a2 delegate:(id)a3;
- (void)handleUpdateMediaSystem:(id)a0;

@end
