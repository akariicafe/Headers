@class NSObject, HMDSiriAccessoryMonitor, HMDSiriSession, NSString, HMDNotificationRegistration, HMDSiriRemoteInputServer;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface HMDSiriServer : NSObject <HMDDataStreamBulkSendListener, HMDSiriAccessoryMonitorDelegate, HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *audioWorkloop;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration;
@property (retain, nonatomic) HMDSiriRemoteInputServer *siriInputServer;
@property (retain, nonatomic) HMDSiriAccessoryMonitor *siriAccessoryMonitor;
@property (retain, nonatomic) HMDSiriSession *siriUISession;
@property (nonatomic) unsigned int targetControlIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedSiriServer;

- (id)init;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)_checkSiriSupportByAccessory:(id)a0;
- (id)_getBestAudioCodecConfiguration:(id)a0;
- (id)_getSiriSessionForAccessory:(id)a0;
- (void)_handleDisconnectForAccessory:(id)a0;
- (BOOL)_isAudioCodecSupported:(id)a0;
- (BOOL)_isSiriInputType:(long long)a0 supportedOnAccessory:(id)a1 siriAudioConfiguration:(id)a2;
- (void)_maybeTearDownSiriPlugin;
- (void)_removeDataStreamListenerForAccessory:(id)a0;
- (void)_setupSiriPlugin;
- (void)_setupSiriUIContext;
- (void)_tearDownSiriUIContext;
- (void)accessory:(id)a0 didReceiveBulkSessionCandidate:(id)a1;
- (void)accessoryDidCloseDataStream:(id)a0;
- (void)accessoryDidStartListening:(id)a0;
- (void)handleAccessoryConfigured:(id)a0;
- (void)handleAccessoryHasBulkSendDataStream:(id)a0;
- (void)handleAccessoryRemoved:(id)a0;
- (void)handleAccessoryUnconfigured:(id)a0;
- (void)monitor:(id)a0 needsSiriCapabilityForAccessory:(id)a1;
- (void)monitor:(id)a0 willAllowAccessoryForDragonSiri:(id)a1;
- (void)monitor:(id)a0 willNotAllowAccessoryForDragonSiri:(id)a1;
- (void)monitorHasNoAccessoriesForDragonSiri:(id)a0;
- (void)setTargetableAccessory:(id)a0 withControllers:(id)a1;

@end
