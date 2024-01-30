@class NSDictionary, HMFTimer, HMDCameraSignificantEventServer, NSString, NSMutableSet, HMDCameraFeaturesDataSource, HMDCameraRecordingBulkSendDataReadEvent, HMDCameraRecordingManagerDependencyFactory, HMFMessageDispatcher, NSObject, NSSet, HMDCameraProfile, HMDCameraRecordingSession, HMDCameraRecordingResidentElector, HMDHAPAccessory, HMDCameraRecordingSessionRetryContext, NSUUID, HMDCameraRecordingBulkSendSessionInitiator, HMDCameraRecordingSessionNotificationTrigger, HMDCameraRecordingSettingsControl, HMDStreamDataChunkAssembler;
@protocol OS_dispatch_queue, HMDDataStreamBulkSendSession;

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMDCameraRecordingSessionDelegate, HMDHomeMessageReceiver, HMDCameraClipManagerDelegate, HMFTimerDelegate>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain) HMDStreamDataChunkAssembler *dataChunkAssembler;
@property (readonly) NSString *logIdentifier;
@property (readonly) HMDCameraRecordingResidentElector *recordingResidentElector;
@property (readonly) NSDictionary *homePresenceByPairingIdentity;
@property (retain) HMDCameraRecordingBulkSendDataReadEvent *readEvent;
@property BOOL didShutDown;
@property (readonly) NSString *bulkSendSessionOpenReason;
@property (readonly) HMDCameraFeaturesDataSource *dataSource;
@property (readonly) HMDCameraSignificantEventServer *significantEventServer;
@property (readonly, copy) NSUUID *cameraUUID;
@property (readonly) long long bulkSendSessionReadTimeoutFactor;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger;
@property (readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl;
@property (readonly) HMDCameraRecordingManagerDependencyFactory *dependencyFactory;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly, weak) HMDCameraProfile *camera;
@property (retain) id<HMDDataStreamBulkSendSession> currentBulkSendSession;
@property (readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator;
@property (retain) HMFTimer *readCallbackTimer;
@property (retain) HMFTimer *sessionRetryTimer;
@property (retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext;
@property (getter=isMotionActive) BOOL motionActive;
@property (retain) HMDCameraRecordingSession *currentRecordingSession;
@property (readonly) NSMutableSet *activeRecordingSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)shutDown;
- (void)_start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (void)start;
- (BOOL)supportsDeviceWithCapabilities:(id)a0;
- (id)initWithCamera:(id)a0 recordingManagementService:(id)a1 dependencyFactory:(id)a2;
- (void)_shutDown;
- (void)_resetRetryContextWithReason:(id)a0;
- (void)_coordinateRecordingSessionForTrigger:(unsigned long long)a0;
- (void)_clipManagerDidStartUpCloudZone;
- (void)_closeCurrentSessionsWithReason:(unsigned short)a0;
- (void)handleStartRecordingSessionRequest:(id)a0;
- (void)handleCameraSettingsDidChangeNotification:(id)a0;
- (void)_startRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1 reason:(id)a2;
- (void)_forwardRecordingSessionForTrigger:(unsigned long long)a0 withSortedDevices:(id)a1 withRetries:(long long)a2;
- (void)_startRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1 reason:(id)a2 completionCallback:(id /* block */)a3;
- (void)_createRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1;
- (void)_resetCurrentRecordingSession:(id)a0;
- (void)_handleBulkSendSessionCreated:(id)a0;
- (void)_submitReadEventWithStatus:(unsigned short)a0;
- (void)_startBulkSendDataReadEvent;
- (void)_readDataForCurrentSession;
- (void)_handleDataReceived:(id)a0;
- (void)_bulkSendReadDidReceiveStreamDataChunk:(id)a0;
- (void)_startSessionRetryTimer;
- (unsigned short)_closeEventReasonForRecordingSessionError:(id)a0;
- (void)notificationTrigger:(id)a0 didObserveTriggerType:(unsigned long long)a1 changeToActive:(BOOL)a2;
- (void)recordingSettingsControlDidConfigure:(id)a0;
- (void)session:(id)a0 didEndWithError:(id)a1;
- (void)clipManagerDidStartUpCloudZone:(id)a0;
- (void)clipManagerDidStop:(id)a0;
- (id)initWithCamera:(id)a0 recordingManagementService:(id)a1;

@end
