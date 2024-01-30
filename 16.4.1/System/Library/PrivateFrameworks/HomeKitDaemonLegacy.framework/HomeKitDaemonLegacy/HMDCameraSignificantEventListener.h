@class HMFMessageDispatcher, NSMutableDictionary, NSString, NSUUID, NSObject;
@protocol OS_dispatch_queue, HMDCameraSignificantEventListenerDelegate;

@interface HMDCameraSignificantEventListener : HMFObject <HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayReceiverDelegate>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSMutableDictionary *fetchHeroFrameContextBySessionUUID;
@property (readonly) NSString *logIdentifier;
@property (copy) id /* block */ idsRelayReceiverFactory;
@property (weak) id<HMDCameraSignificantEventListenerDelegate> delegate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)start;
- (void).cxx_destruct;
- (id)initWithCamera:(id)a0;
- (void)handleCameraSignificantEventDidOccurMessage:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2 logIdentifier:(id)a3;
- (void)relayReceiver:(id)a0 didReceiveData:(id)a1 error:(id)a2;
- (void)relayReceiverDidAcceptIDSInvitation:(id)a0;
- (void)relayReceiverIDSSessionDidStart:(id)a0;

@end
