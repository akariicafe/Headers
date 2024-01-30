@class NSMutableDictionary, NSSet, HMFMessageDispatcher, NSObject, NSDictionary, NSMutableArray, HMDSnapshotRequestHandler, NSString, HMDSnapshotCacheRequestHandler, HMDHAPAccessory, HMDCameraStreamSnapshotHandler, HMDNotificationRegistration, HMDSnapshotLocalSession, HMFNetMonitor, HMDSnapshotSlotManager, HMDCameraSnapshotMonitorEvents, HMDCameraResidentMessageHandler, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotManager : HMFObject <HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMFTimerDelegate, HMFLogging, HMDCameraStreamSnapshotHandlerDelegate, HMDHomeMessageReceiver>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDSnapshotLocalSession *currentLocalSession;
@property (retain, nonatomic) NSMutableDictionary *currentRemoteSessions;
@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *imageCacheDirectory;
@property (readonly, nonatomic) NSString *logID;
@property (readonly, nonatomic) HMDCameraSnapshotMonitorEvents *monitorServicesManager;
@property (readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler;
@property (readonly, nonatomic) HMDSnapshotCacheRequestHandler *snapshotCacheRequestHandler;
@property (readonly) HMDSnapshotSlotManager *snapshotSlotManager;
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly, nonatomic) NSMutableArray *pendingSnapshotRequestDuringStreamSetup;
@property (readonly, nonatomic) NSMutableArray *pendingRemoteSnapshotRequestDuringStreamSetup;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration;
@property (retain, nonatomic) HMFNetMonitor *networkMonitor;
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSDictionary *encodedMostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (void)auditSnapshotDirectories:(id)a0;

- (void).cxx_destruct;
- (void)registerForMessages;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)handleCameraSettingsDidChangeNotification:(id)a0;
- (void)snapshotStreamSender:(id)a0 didStartCaptureImage:(id)a1 sessionID:(id)a2;
- (void)snapshotStreamSender:(id)a0 didCompleteSendImage:(id)a1 sessionID:(id)a2;
- (void)snapshotLocal:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)streamSnapshotHandler:(id)a0 didGetNewSnapshot:(id)a1;
- (void)streamSnapshotHandler:(id)a0 didGetLastSnapshot:(id)a1;
- (void)streamSnapshotHandler:(id)a0 didChangeStreamSetupInProgress:(BOOL)a1;
- (void)handleAccessoryDisconnected:(id)a0;
- (void)snapshotRelayStream:(id)a0 didStartCaptureImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelayStream:(id)a0 didCompleteSendImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelayReceiver:(id)a0 didStartGettingImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelayReceiver:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)takeSnapshot:(id)a0;
- (void)releaseSnapshot:(id)a0;
- (void)_removeAllPendingRequests:(id)a0;
- (void)_handleSnapshotRequest:(id)a0;
- (void)_handleSnapshotRemoteRequest:(id)a0;
- (void)_handleSnapshotReceived:(id)a0;
- (void)_handleSnapshotSendFailure:(id)a0;
- (void)_handleReleaseSnapshot:(id)a0;
- (void)_handleCreateSnapshotFromBulletinContext:(id)a0;
- (id)_createSnapshotSessionIDWithMessage:(id)a0 error:(id *)a1;
- (void)_sendStreamSnapshotRequest:(id)a0 snapshotSessionID:(id)a1;
- (void)_sendSnapshotRequestLocal:(id)a0 snapshotSessionID:(id)a1;
- (void)_sendSnapshotRequestStreamReceiver:(id)a0 snapshotSessionID:(id)a1;
- (void)_sendSnapshotRequestRelayReceiver:(id)a0 snapshotSessionID:(id)a1;
- (void)_sendSnapshotRequestRelayInitiator:(id)a0 snapshotSessionID:(id)a1;
- (void)_sendSnapshotRequestStreamInitiator:(id)a0 snapshotSessionID:(id)a1;
- (void)_sendSnapshotRequestRelayStream:(id)a0 snapshotSessionID:(id)a1;
- (void)_issueGetSnapshot:(id)a0;
- (void)_sendResponse:(id)a0 error:(id)a1 sessionID:(id)a2;
- (id)_findSessionWithID:(id)a0;
- (void)_endSession:(id)a0 error:(id)a1;
- (void)_sendRemoteResponse:(id)a0 sessionID:(id)a1;
- (void)snapshotRelaySender:(id)a0 didStartCaptureImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelaySender:(id)a0 didCompleteSendImage:(id)a1 sessionID:(id)a2;
- (void)snapshotStreamReceiver:(id)a0 didStartGettingImage:(id)a1 sessionID:(id)a2;
- (void)snapshotStreamReceiver:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 uniqueIdentifier:(id)a3 logID:(id)a4 msgDispatcher:(id)a5 networkMonitor:(id)a6;

@end
