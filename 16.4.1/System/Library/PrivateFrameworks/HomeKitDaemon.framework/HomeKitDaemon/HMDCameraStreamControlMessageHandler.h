@class NSObject, HMFMessageDispatcher, HMDCameraStreamManagerSession, HMDService, HMDCallObserver, HMDDynamicActivityAttributionPublisher, NSString, HMDCameraSupportedConfigurationCache, HMDHAPAccessory, HMDCameraStreamSnapshotHandler, HMFNetMonitor, HMDCameraResidentMessageHandler, NSUUID;
@protocol OS_dispatch_queue, HMDCameraStreamControlMessageHandlerDataSource;

@interface HMDCameraStreamControlMessageHandler : HMFObject <HMFTimerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging>

@property (readonly) HMDCallObserver *callObserver;
@property (readonly) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSUUID *profileUniqueIdentifier;
@property (retain) HMDCameraStreamManagerSession *streamSession;
@property (readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) HMFNetMonitor *networkMonitor;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDDynamicActivityAttributionPublisher *dynamicActivityAttributionPublisher;
@property (readonly) id<HMDCameraStreamControlMessageHandlerDataSource> dataSource;
@property (readonly, getter=isStreamingSessionInProgress) BOOL streamingSessionInProgress;
@property (readonly) HMDService *streamManagementService;
@property (readonly, copy) NSString *streamSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)handleMessage:(id)a0;
- (id)logIdentifier;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isStopMessage:(id)a0;
- (void)configureWithMessageDispatcher:(id)a0;
- (void)updateStreamClientUsingMessage:(id)a0;
- (void)_attributeMicrophoneUsageToApplicationBundleIdentifier:(id)a0;
- (void)_handleNegotiateMessage:(id)a0;
- (void)_handleReconfigureMessage:(id)a0;
- (void)_handleRemoteSetupMessage:(id)a0;
- (void)_handleSetAudioState:(id)a0;
- (void)_handleSetAudioVolume:(id)a0;
- (void)_handleStartMessage:(id)a0;
- (void)_handleStopMessage:(id)a0;
- (BOOL)_isNegotiateMessage:(id)a0;
- (BOOL)_isReconfigureMessage:(id)a0;
- (BOOL)_isRemoteSetupMessage:(id)a0;
- (BOOL)_isSetAudioStreamSettingMessage:(id)a0;
- (BOOL)_isSetAudioVolumeMessage:(id)a0;
- (BOOL)_isStartMessage:(id)a0;
- (void)_resetStreamSession:(id)a0;
- (void)_respondToLocalNegotiateStreamMessage:(id)a0;
- (void)_sendStreamStoppedMessageWithError:(id)a0;
- (void)_sendStreamStoppedRemoteNotificationWithError:(id)a0;
- (BOOL)_shouldHandleNegotiateMessage:(id)a0 accessoryReachable:(BOOL)a1;
- (BOOL)_shouldStopStreamSessionForProcessInfo:(id)a0;
- (void)_stopStreamWithError:(id)a0;
- (void)handleAccessoryUnconfigured:(id)a0;
- (void)handleActivePhoneCallDidEstablishNotification:(id)a0;
- (void)handleCameraSettingsDidChangeNotification:(id)a0;
- (void)handleConnectionDeactivatedNotification:(id)a0;
- (void)handleProcessStateChange:(id)a0;
- (id)initWithWorkQueue:(id)a0 streamSnapshotHandler:(id)a1 accessory:(id)a2 streamManagementService:(id)a3 profileUniqueIdentifier:(id)a4 networkMonitor:(id)a5;
- (id)initWithWorkQueue:(id)a0 streamSnapshotHandler:(id)a1 accessory:(id)a2 streamManagementService:(id)a3 profileUniqueIdentifier:(id)a4 networkMonitor:(id)a5 residentMessageHandler:(id)a6 callObserver:(id)a7 dataSource:(id)a8;
- (void)setAudioVolume:(id)a0 callback:(id /* block */)a1;
- (void)streamControlManager:(id)a0 didNegotiateStreamWithSelectedParameters:(id)a1;
- (void)streamControlManager:(id)a0 didStopStreamWithSessionID:(id)a1 error:(id)a2;
- (void)streamControlManagerDidReceiveFirstFrame:(id)a0;
- (void)streamControlManagerDidReconfigureStream:(id)a0;
- (void)streamControlManagerDidSetUpRemoteConnection:(id)a0;
- (void)streamControlManagerDidStartStream:(id)a0;

@end
