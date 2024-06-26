@class NSString, NSMutableDictionary, NSMutableSet, GCVirtualController, NSDate, BKSHIDEventDeliveryPolicyObserver;
@protocol GCGameIntentXPCProxyServiceRemoteServerInterface, GCPhotoVideoXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCSystemGestureXPCProxyServiceRemoteServerInterface, GCControllerServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, _GCIPCEndpointConnection, GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface, _GCIPCOutgoingConnection, GCMotionXPCProxyServiceRemoteServerInterface;

@interface _GCControllerManagerAppClient : _GCControllerManager <GCControllerServiceRemoteClientInterface, GCPlayerIndicatorXPCProxyServiceClient, GCPlayerIndicatorXPCProxyServiceRemoteClientInterface, GCLightXPCProxyServiceClient, GCLightXPCProxyServiceRemoteClientInterface, GCAdaptiveTriggersXPCProxyServiceClient, GCAdaptiveTriggersXPCProxyServiceRemoteClientInterface, GCMotionXPCProxyServiceClient, GCMotionXPCProxyServiceRemoteClientInterface, GCBatteryXPCProxyServiceClient, GCBatteryXPCProxyServiceRemoteClientInterface, GCSettingsXPCProxyServiceClient, GCSettingsXPCProxyServiceRemoteClientInterface, GCGameIntentXPCProxyServiceClient, GCGameIntentXPCProxyServiceRemoteClientInterface, GCSystemGestureXPCProxyServiceClient, GCSystemGestureXPCProxyServiceRemoteClientInterface, BKSHIDEventDeliveryPolicyObserving, _GCAppClientInterface> {
    NSMutableSet *_knownHIDServices;
    NSMutableDictionary *_publishedControllers;
    NSMutableSet *_pendingControllers;
    NSMutableSet *_serverValidControllerIdentifiers;
    NSMutableSet *_customControllerIdentifiers;
    id<_GCIPCOutgoingConnection> _serverConnection;
    id _serverConnectionInvalidation;
    id _serverConnectionInterruption;
    id<GCControllerServiceRemoteServerInterface> _controllerService;
    id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> _playerIndicatorXPCProxyService;
    id<GCLightXPCProxyServiceRemoteServerInterface> _lightXPCProxyService;
    id<GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface> _adaptiveTriggersXPCProxyService;
    id<GCSettingsXPCProxyServiceRemoteServerInterface> _settingsXPCProxyService;
    id<GCMotionXPCProxyServiceRemoteServerInterface> _motionXPCProxyService;
    id<GCBatteryXPCProxyServiceRemoteServerInterface> _batteryXPCProxyService;
    id<GCPhotoVideoXPCProxyServiceRemoteServerInterface> _photoVideoService;
    id<GCGameIntentXPCProxyServiceRemoteServerInterface> _gameIntentXPCProxyService;
    id<GCSystemGestureXPCProxyServiceRemoteServerInterface> _systemGestureXPCProxyService;
    GCVirtualController *_forcedVirtualController;
    BKSHIDEventDeliveryPolicyObserver *_hidEventObserver;
    BOOL _shouldResumeDaemonConnectionOnForeground;
    BOOL _bufferingStartPending;
    BOOL _bufferingStarted;
    BOOL _shouldStartBufferingOnForeground;
    NSDate *_recordingStart;
}

@property (readonly) id<_GCIPCEndpointConnection> playerIndicatorXPCProxyServiceConnection;
@property (readonly) id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> playerIndicatorXPCProxyServiceRemoteServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<_GCIPCEndpointConnection> lightXPCProxyServiceConnection;
@property (readonly) id<GCLightXPCProxyServiceRemoteServerInterface> lightXPCProxyServiceRemoteServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<_GCIPCEndpointConnection> adaptiveTriggersXPCProxyServiceConnection;
@property (readonly) id<GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface> adaptiveTriggersXPCProxyServiceRemoteServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<_GCIPCEndpointConnection> motionXPCProxyServiceConnection;
@property (readonly) id<GCMotionXPCProxyServiceRemoteServerInterface> motionXPCProxyServiceRemoteServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<_GCIPCEndpointConnection> batteryXPCProxyServiceConnection;
@property (readonly) id<GCBatteryXPCProxyServiceRemoteServerInterface> batteryXPCProxyServiceRemoteServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<_GCIPCEndpointConnection> settingsXPCProxyServiceConnection;
@property (readonly) id<GCSettingsXPCProxyServiceRemoteServerInterface> settingsXPCProxyServiceRemoteServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<_GCIPCEndpointConnection> gameIntentXPCProxyServiceConnection;
@property (readonly) id<GCGameIntentXPCProxyServiceRemoteServerInterface> gameIntentXPCProxyServiceRemoteServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<_GCIPCEndpointConnection> systemGestureXPCProxyServiceConnection;
@property (readonly) id<GCSystemGestureXPCProxyServiceRemoteServerInterface> systemGestureXPCProxyServiceRemoteServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllers;
- (void)enableKeyboardAndMouseSupport;
- (id)mice;
- (void)publishControllers:(id)a0;
- (void)onScreenshotTriggeredWithController:(id)a0;
- (void)_connectToDaemon;
- (void)setCurrentMicroGamepad:(id)a0;
- (void)startBuffering;
- (id)currentController;
- (void)_setCurrentController:(id)a0;
- (void)CBApplicationDidBecomeActive;
- (id)currentMicroGamepad;
- (id)serviceClientForIPCService:(id)a0;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient { } *)a0;
- (void)setCurrentController:(id)a0;
- (void)setCurrentExtendedGamepad:(id)a0;
- (void)CBApplicationWillResignActive;
- (void)updateCurrentControllerAndProfileForUnpublishedController:(id)a0;
- (void)startVideoRecordingBuffering;
- (void)onVideoRecordingToggledWithController:(id)a0 mode:(long long)a1;
- (void)stopVideoRecordingBuffering;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient { } *)a0;
- (id)currentExtendedGamepad;
- (void)_resumeDaemonConnection;
- (void)unpublishControllersWithIdentifiers:(id)a0;
- (void)updateEmulatedControllerEnabled;
- (void)_onqueue_publishCustomController:(id)a0;
- (void)_onqueue_unpublishCustomController:(id)a0;
- (void)setProperty:(id)a0 forKey:(id)a1 forHIDServiceClientWithRegistryID:(id)a2;
- (void)open;
- (id)_mostRecentlyActiveExtendedGamepadIgnoring:(id)a0;
- (void)_onqueue_refreshPublishedControllers;
- (void)handleMouseEventAsFrontmostApp:(id)a0;
- (void)createVirtualControllerView;
- (id)_mostRecentlyActiveControllerIgnoring:(id)a0;
- (BOOL)isScreenShotAllowedForController:(id)a0;
- (id)_mostRecentlyActiveMicroGamepadIgnoring:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observerDeliveryPolicyDidChange:(id)a0;
- (void)stopVideoRecordingWithClipBuffering:(BOOL)a0 controller:(id)a1;
- (void)_onqueue_publishController:(id)a0;
- (void)stopBuffering;
- (void)_setCurrentExtendedGamepad:(id)a0;
- (BOOL)_containsPublishedController:(id)a0;
- (void)handleKeyboardEventAsFrontmostApp:(id)a0;
- (void)_setCurrentMicroGamepad:(id)a0;
- (void)_onqueue_addPendingController:(id)a0;
- (void)_onqueue_unpublishController:(id)a0;
- (void)dealloc;
- (void)refreshControllers;
- (BOOL)isVideoRecordingAllowedForController:(id)a0;
- (void)finalizeRecording;
- (void)startVideoRecording;

@end
