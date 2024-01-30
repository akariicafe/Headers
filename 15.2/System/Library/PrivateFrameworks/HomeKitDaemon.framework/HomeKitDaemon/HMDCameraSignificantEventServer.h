@class NSUUID, HMDCameraSignificantEventServerDataSource, NSString, NSMutableDictionary, HMFMessageDispatcher, HMDNotificationRegistry, NSObject, NSMapTable, HMDCharacteristic;
@protocol OS_dispatch_queue;

@interface HMDCameraSignificantEventServer : HMFObject <HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFTimerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSMutableDictionary *heroFrameDataByNotificationUUID;
@property (readonly) NSMutableDictionary *relayInitiatorBySessionUUID;
@property (readonly) NSMapTable *notificationUUIDByHeroFrameExpiryTimer;
@property (readonly) HMDCharacteristic *motionCharacteristic;
@property (readonly) HMDNotificationRegistry *notificationRegistry;
@property (readonly) HMDCameraSignificantEventServerDataSource *dataSource;
@property (readonly) NSString *logIdentifier;
@property (copy) id /* block */ heroFrameExpiryTimerFactory;
@property (copy) id /* block */ idsRelayInitiatorFactory;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0 camera:(id)a1;
- (void)relayInitiatorIDSSessionDidStart:(id)a0;
- (void)relayInitiatorDidSendIDSInvitation:(id)a0;
- (void)relayInitiator:(id)a0 didEndIDSSessionWithError:(id)a1;
- (void)relayInitiatorDidSendDataSuccessfully:(id)a0;
- (void)relayInitiatorDidStartDataSend:(id)a0;
- (void)notifyListenersAboutEvent:(id)a0;
- (id)initWithWorkQueue:(id)a0 logIdentifier:(id)a1 messageDispatcher:(id)a2 messageTargetUUID:(id)a3 motionCharacteristic:(id)a4 notificationRegistry:(id)a5 dataSource:(id)a6;
- (void)_notifyDevice:(id)a0 aboutEvent:(id)a1;
- (void)handleCameraSignificantEventFetchHeroFrameMessage:(id)a0;

@end
