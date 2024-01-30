@class _TVRXKeyboardController, _TVRCMediaRemoteKeyboardImplManager, NSString, _TVRCMROriginWrapper, NSSet, _TVRXDevice, NSMutableArray, _TVRCMRTelevisionWrapper, _TVRXVoiceRecorder, _TVRCMediaRemoteEventTranslator;

@interface _TVRCMediaRemoteDeviceImpl : NSObject <_TVRXVoiceRecorderDelegate, _TVRCMROriginDelegate, _TVRCDeviceImpl>

@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (retain, nonatomic) _TVRCMROriginWrapper *origin;
@property (copy, nonatomic) NSSet *mediaButtons;
@property (copy, nonatomic) NSSet *volumeButtons;
@property (nonatomic) unsigned long long touchDeviceID;
@property (nonatomic) unsigned int voiceDeviceID;
@property (nonatomic) unsigned long long gameControllerID;
@property (nonatomic) long long gameControllerState;
@property (retain, nonatomic) _TVRCMediaRemoteEventTranslator *eventTranslator;
@property (retain, nonatomic) _TVRXVoiceRecorder *voiceRecorder;
@property (retain, nonatomic) NSMutableArray *queuedAudioBuffers;
@property (retain, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCMediaRemoteKeyboardImplManager *keyboardImplManager;
@property (weak, nonatomic) _TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithTelevision:(id)a0;

- (long long)connectionType;
- (void)connect;
- (void)disconnect;
- (id)model;
- (void).cxx_destruct;
- (id)supportedButtons;
- (void)dealloc;
- (id)initWithTelevision:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)sendButtonEvent:(id)a0;
- (id)name;
- (id)identifier;
- (void)_setupKeyboardController;
- (id)alternateIdentifiers;
- (BOOL)supportsTouchEvents;
- (void)sendTouchEvent:(id)a0;
- (unsigned long long)pairingCapability;
- (void)setAuthenticationSupported:(BOOL)a0;
- (void)voiceRecorder:(id)a0 isAboutToBeginRecording:(id /* block */)a1;
- (void)voidRecorderDidStop:(id)a0;
- (id)createBufferWithSettings:(id)a0 packetCapacity:(unsigned long long)a1 maxPacketSize:(unsigned long long)a2;
- (void)voiceRecorder:(id)a0 bufferAvailable:(id)a1;
- (void)_nameChanged:(id)a0;
- (void)_connectionRequestedPairing:(struct { unsigned int x0; unsigned long long x1; })a0 continuation:(id /* block */)a1;
- (void)_addConnectionStateHandler;
- (void)_becameDisconnected:(id)a0;
- (void)_removeConnectionStateHandler;
- (void)_resetAllState;
- (void)_sendEquivalentGameButton:(id)a0;
- (void)_connectionStateChanged:(unsigned int)a0 error:(id)a1;
- (void)_becameConnected;
- (void)_registerTouchDevice;
- (void)_setupVoiceRecorder;
- (void)_beginObservingNowPlaying;
- (void)_setupVolumeControls;
- (void)_registerGameControllerInputModeHandler;
- (void)_removePairingRecords;
- (void)_unregisterGameControllerInputModeHandler;
- (void)_teardownVolumeControls;
- (void)_registerVoiceDeviceWithCompletion:(id /* block */)a0;
- (void)_voiceRecorderStateChanged:(unsigned int)a0;
- (void)_drainAndClearAudioBufferQueue;
- (void)_setupOriginIfNeeded;
- (void)_volumeControlsDidUpdate:(id)a0;
- (void)_reloadVolumeControlAvailability;
- (void)_enableVolumeButtons:(BOOL)a0;
- (BOOL)_isSystemVersionSupported;
- (void)_gameControllerInputModeChanged:(unsigned int)a0;
- (void)_registerGameControllerID;
- (void)_unregisterGameControllerID;
- (void)origin:(id)a0 updatedSupportedCommands:(id)a1;

@end
