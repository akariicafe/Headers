@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol TVRCXPCRequestProtocol;

@interface TVRCXPCClient : NSObject <TVRCXPCRequestProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<TVRCXPCRequestProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *eventObserversByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_broadcastStateUpdateToDevices:(id)a0;
- (void)_disconnectAllDevices;
- (void)_postInvalidationNotification;
- (void)_setupConnectionIfNeeded;
- (void)addEventObserver:(id)a0 forDeviceWithIdentifier:(id)a1;
- (void)beginDeviceQuery;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(id)a0;
- (void)closeConnectionToDeviceWithIdentifier:(id)a0 withType:(unsigned long long)a1;
- (void)deviceQueryUpdatedDiscoveredDevices:(id)a0;
- (void)deviceUpdatedState:(id)a0;
- (void)deviceWithState:(id)a0 encounteredAuthChallengeOfType:(long long)a1 attributes:(long long)a2 codeToEnterOnDevice:(id)a3 throttleSeconds:(long long)a4;
- (void)enableTVRemoteOnLockscreen:(BOOL)a0 forDeviceIdentifier:(id)a1;
- (void)endDeviceQuery;
- (void)fetchActiveMREndpointUIDWithCompletion:(id /* block */)a0;
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(id)a0 withLocallyEnteredCode:(id)a1;
- (void)getConnectionStatusToDeviceWithIdentifier:(id)a0 response:(id /* block */)a1;
- (void)launchViewServiceForDeviceWithIdentifier:(id)a0;
- (void)openConnectionToDeviceWithIdentifier:(id)a0;
- (void)removeEventObserver:(id)a0 forDeviceWithIdentifier:(id)a1;
- (void)sendButtonEvent:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)sendEvent:(id)a0 toDeviceWithIdentifier:(id)a1 options:(id)a2 response:(id /* block */)a3;
- (void)sendGameControllerEvent:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(id)a0;
- (void)sendInputText:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)sendInputTextPayload:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)sendTouchEvent:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)setVoiceRecorderAutomaticRecording:(BOOL)a0 forDeviceWithIdentifier:(id)a1;
- (void)startVoiceRecordingForDeviceWithIdentifier:(id)a0;
- (void)stopVoiceRecordingForDeviceWithIdentifier:(id)a0;

@end
