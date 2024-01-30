@class NSString, HMDCameraProfileSettingsManager, HMDCameraRecordingManager, HMDCameraClipUserNotificationCenter, NSMutableArray, HMDService, HMDCameraRecordingReachabilityEventManager, NSSet, HMDCameraStreamSnapshotHandler, HMDPredicateUtilities, HMDHAPAccessory, _HMCameraUserSettings, HMDCameraSnapshotManager, HMFNetMonitor, HMDCameraClipManager, HMDCameraSignificantEventListener, HMFTimer, NSUUID;
@protocol HMDCameraBulletinBoard;

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraSignificantEventListenerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate, HMDCameraClipManagerDelegate>

@property (class, retain) id<HMDCameraBulletinBoard> bulletinBoard;

@property (readonly) NSSet *cameraStreamManagers;
@property (readonly) HMDCameraSnapshotManager *snapshotManager;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) NSMutableArray *settingProactiveReaders;
@property (readonly) HMFNetMonitor *networkMonitor;
@property (readonly) HMDCameraProfileSettingsManager *cameraSettingsManager;
@property (readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (retain) NSUUID *cloudZoneUUID;
@property (retain) HMFTimer *recordingEventsCleanupTimer;
@property (retain) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter;
@property (retain) HMDCameraClipManager *clipManager;
@property (retain) HMDPredicateUtilities *predicateUtilities;
@property (retain) HMDCameraRecordingManager *cameraRecordingManager;
@property (copy) id /* block */ recordingEventsCleanupTimerFactory;
@property (copy) id /* block */ recordingManagerFactory;
@property (readonly, nonatomic, getter=isMicrophonePresent) BOOL microphonePresent;
@property (readonly, nonatomic, getter=isSpeakerPresent) BOOL speakerPresent;
@property (readonly) _HMCameraUserSettings *currentSettings;
@property (readonly) HMDService *recordingManagementService;
@property (retain) HMDCameraSignificantEventListener *significantEventListener;
@property (readonly, weak) HMDHAPAccessory *hapAccessory;
@property (readonly, nonatomic, getter=isCameraRecordingFeatureSupported) BOOL supportsCameraRecordingFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;

- (id)urlString;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)dealloc;
- (void)unconfigure;
- (void)timerDidFire:(id)a0;
- (id)dumpState;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setUp;
- (id)messageReceiverChildren;
- (void)clipManagerDidStart:(id)a0;
- (void)clipManagerDidStartUpCloudZone:(id)a0;
- (void)clipManagerDidStop:(id)a0;
- (void)clipManager:(id)a0 didUpdateSignificantEvent:(id)a1 withHomePresence:(id)a2;
- (void)clipManager:(id)a0 didDeleteClipWithUUID:(id)a1;
- (void)clipManagerDidDisableCloudStorage:(id)a0;
- (void)removeCloudData;
- (id)assistantObject;
- (void)listener:(id)a0 didReceiveSignificantEvent:(id)a1 heroFrameData:(id)a2;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)cameraProfileSettingsManager:(id)a0 canEnableRecordingWithCompletion:(id /* block */)a1;
- (void)cameraProfileSettingsManager:(id)a0 canDisableRecordingWithCompletion:(id /* block */)a1;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)a0;
- (id)initWithAccessory:(id)a0 services:(id)a1 msgDispatcher:(id)a2 settingsManager:(id)a3 workQueue:(id)a4;
- (void)tearDownWithReplacementCameraProfile:(id)a0;
- (id)initWithAccessory:(id)a0 services:(id)a1 msgDispatcher:(id)a2 settingsManager:(id)a3 workQueue:(id)a4 reachabilityEventManager:(id)a5;
- (id)_createCameraManagers:(id)a0;
- (void)_setControlSupport;
- (void)createCameraClipUserNotificationCenter;
- (void)_handleNegotiateStreamRequest:(id)a0;
- (void)_handleStreamControlRequest:(id)a0;
- (void)handleCameraProfileSettingsDidChangeNotification:(id)a0;
- (void)handleResidentsChanged:(id)a0;
- (void)_createCameraRecordingManager;
- (void)_createSignificantEventListener;
- (BOOL)_shouldNotifyForSignificantEvent:(id)a0 homePresence:(id)a1;

@end
