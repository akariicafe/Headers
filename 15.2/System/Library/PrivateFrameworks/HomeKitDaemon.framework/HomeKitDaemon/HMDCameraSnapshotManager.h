@class NSMutableDictionary, NSDictionary, HMFMessageDispatcher, NSObject, NSMutableArray, HMDSnapshotRequestHandler, NSString, NSSet, HMDHAPAccessory, HMDSnapshotCacheRequestHandler, HMDCameraStreamSnapshotHandler, HMDSnapshotLocalSession, HMFNetMonitor, HMDSnapshotSlotManager, HMDCameraSnapshotMonitorEvents, HMDCameraResidentMessageHandler, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotManager : HMFObject <HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDHomeMessageReceiver> {
    HMFMessageDispatcher *_msgDispatcher;
    HMDSnapshotLocalSession *_currentLocalSession;
    NSMutableDictionary *_currentRemoteSessions;
    HMDHAPAccessory *_accessory;
    NSString *_imageCacheDirectory;
    HMDCameraSnapshotMonitorEvents *_monitorServicesManager;
    HMDSnapshotRequestHandler *_snapshotRequestHandler;
    HMDSnapshotCacheRequestHandler *_snapshotCacheRequestHandler;
    HMDSnapshotSlotManager *_snapshotSlotManager;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    NSMutableArray *_pendingSnapshotRequestDuringStreamSetup;
    NSMutableArray *_pendingRemoteSnapshotRequestDuringStreamSetup;
    HMFNetMonitor *_networkMonitor;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
}

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
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

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerForMessages;
- (void)handleCameraSettingsDidChangeNotification:(id)a0;
- (void)snapshotLocal:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)snapshotStreamSender:(id)a0 didCompleteSendImage:(id)a1 sessionID:(id)a2;
- (void)snapshotStreamSender:(id)a0 didStartCaptureImage:(id)a1 sessionID:(id)a2;
- (void)streamSnapshotHandler:(id)a0 didGetLastSnapshot:(id)a1;
- (void)streamSnapshotHandler:(id)a0 didGetNewSnapshot:(id)a1;
- (void)streamSnapshotHandler:(id)a0 didChangeStreamSetupInProgress:(BOOL)a1;
- (void)handleAccessoryDisconnected:(id)a0;
- (void)snapshotRelayReceiver:(id)a0 didStartGettingImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelayReceiver:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)snapshotRelayStream:(id)a0 didCompleteSendImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelayStream:(id)a0 didStartCaptureImage:(id)a1 sessionID:(id)a2;
- (void)takeSnapshot:(id)a0;
- (void)releaseSnapshot:(id)a0;
- (void)snapshotStreamReceiver:(id)a0 didStartGettingImage:(id)a1 sessionID:(id)a2;
- (void)snapshotStreamReceiver:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)snapshotRelaySender:(id)a0 didStartCaptureImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelaySender:(id)a0 didCompleteSendImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelaySender:(id)a0 didSaveSnapshotFile:(id)a1 sessionID:(id)a2;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 uniqueIdentifier:(id)a3 msgDispatcher:(id)a4 networkMonitor:(id)a5;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 uniqueIdentifier:(id)a3 msgDispatcher:(id)a4 networkMonitor:(id)a5 residentMessageHandler:(id)a6;
- (void)_handleFillSnapshotSlot:(id)a0;
- (void)_handleReleaseSnapshot:(id)a0;
- (void)_handleCreateSnapshotFromBulletinContext:(id)a0;
- (void)_handleSnapshotRequest:(id)a0;
- (void)_handleSnapshotRemoteRequest:(id)a0;
- (void)_handleSnapshotReceived:(id)a0;
- (void)_handleSnapshotSendFailure:(id)a0;

@end
