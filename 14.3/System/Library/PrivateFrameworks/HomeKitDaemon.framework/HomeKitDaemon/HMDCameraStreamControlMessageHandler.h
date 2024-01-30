@class HMDDeviceCapabilities, HMDPhoneCallObserver, NSObject, HMFMessageDispatcher, HMDCameraStreamManagerSession, HMDService, HMDDynamicActivityAttributionPublisher, HMDCameraStreamSnapshotHandler, HMDCameraSupportedConfigurationCache, HMDHAPAccessory, NSString, HMFNetMonitor, HMDCameraResidentMessageHandler, NSUUID;
@protocol OS_dispatch_queue, HMDCameraStreamControlMessageHandlerDataSource;

@interface HMDCameraStreamControlMessageHandler : HMFObject <HMFTimerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging>

@property (readonly) HMDPhoneCallObserver *phoneCallObserver;
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
@property (readonly) HMDDeviceCapabilities *deviceCapabilities;
@property (readonly, getter=isStreamingSessionInProgress) BOOL streamingSessionInProgress;
@property (readonly) HMDService *streamManagementService;
@property (readonly, copy) NSString *streamSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)handleMessage:(id)a0;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (void)handleCameraSettingsDidChangeNotification:(id)a0;
- (void)configureWithMessageDispatcher:(id)a0;
- (void)handleAccessoryDisconnected:(id)a0;
- (id)initWithWorkQueue:(id)a0 streamSnapshotHandler:(id)a1 accessory:(id)a2 streamManagementService:(id)a3 profileUniqueIdentifier:(id)a4 networkMonitor:(id)a5 residentMessageHandler:(id)a6 phoneCallObserver:(id)a7 deviceCapabilities:(id)a8 dataSource:(id)a9;
- (void)handleProcessStateChange:(id)a0;
- (void)handleActivePhoneCallEstablishedNotification:(id)a0;
- (void)_stopStreamWithError:(id)a0;
- (void)_handleStopMessage:(id)a0;
- (BOOL)_isStopMessage:(id)a0;
- (BOOL)_isSetAudioStreamSettingMessage:(id)a0;
- (void)_handleSetAudioState:(id)a0;
- (BOOL)_isSetAudioVolumeMessage:(id)a0;
- (void)_handleSetAudioVolume:(id)a0;
- (BOOL)_isRemoteSetupMessage:(id)a0;
- (void)_handleRemoteSetupMessage:(id)a0;
- (BOOL)_isNegotiateMessage:(id)a0;
- (void)_handleNegotiateMessage:(id)a0;
- (BOOL)_isStartMessage:(id)a0;
- (void)_handleStartMessage:(id)a0;
- (BOOL)_isReconfigureMessage:(id)a0;
- (void)_handleReconfigureMessage:(id)a0;
- (BOOL)_shouldHandleNegotiateMessage:(id)a0 accessoryReachable:(BOOL)a1;
- (void)setAudioVolume:(id)a0 callback:(id /* block */)a1;
- (void)_resetStreamSession:(id)a0;
- (void)_sendStreamStoppedNotification:(id)a0;
- (BOOL)_shouldStopStreamSessionForProcessInfo:(id)a0;
- (void)streamControlManagerDidNegotiateStream:(id)a0 selectedParameters:(id)a1;
- (void)streamControlManagerDidSetupRemoteConnection:(id)a0;
- (void)streamControlManagerDidStartStream:(id)a0 slotIdentifier:(id)a1;
- (void)streamControlManagerDidReceiveFirstFrame:(id)a0 audioStreamSetting:(unsigned long long)a1 aspectRatio:(id)a2 slotIdentifier:(id)a3;
- (void)streamControlManagerDidReconfigureStream:(id)a0;
- (void)streamControlManagerDidStopStreamForSessionID:(id)a0 error:(id)a1;
- (void)streamControlManager:(id)a0 didFail:(id)a1;
- (id)initWithWorkQueue:(id)a0 streamSnapshotHandler:(id)a1 accessory:(id)a2 streamManagementService:(id)a3 profileUniqueIdentifier:(id)a4 networkMonitor:(id)a5;

@end
