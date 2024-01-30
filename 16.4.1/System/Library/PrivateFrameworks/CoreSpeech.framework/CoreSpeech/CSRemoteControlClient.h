@class OS_xpc_remote_connection, NSString, OS_remote_device, CSDispatchGroup, NSHashTable, NSObject, CSRemoteDeviceProtocolInfo;
@protocol OS_dispatch_queue;

@interface CSRemoteControlClient : NSObject <CSRemoteControlClientProtocolV1, CSRemoteControlClientProtocolV2, CSRemoteControlClientProtocolV3> {
    NSObject<OS_dispatch_queue> *_queue;
    OS_xpc_remote_connection *_connection;
    CSDispatchGroup *_deviceWaitingGroup;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly, nonatomic) OS_remote_device *device;
@property (readonly, copy, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) CSRemoteDeviceProtocolInfo *deviceProtocolInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isConnected;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)a0;
- (id)_dictionaryWithContentsOfXPCObject:(id)a0;
- (void)_fetchDataFromAudioFileUrl:(id)a0 aesKey:(id)a1 encryptedAudioSampleBypeDepth:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)_getMyriadInfoFromServerMessage:(id)a0;
- (void)_handleServerError:(id)a0;
- (void)_handleServerEvent:(id)a0;
- (void)_handleServerMessage:(id)a0;
- (void)_transferAudioData:(id)a0 numSamples:(unsigned long long)a1 remoteWavFilePath:(id)a2 completion:(id /* block */)a3;
- (void)_transferFile:(id)a0 at:(id)a1 completion:(id /* block */)a2;
- (void)clearTriggerCount:(id /* block */)a0;
- (BOOL)createRemoteVoiceProfileWithAudioFiles:(id)a0 aesKey:(id)a1 encryptedAudioSampleBypeDepth:(unsigned long long)a2 languageCode:(id)a3 completion:(id /* block */)a4;
- (void)didDeviceConnect:(id)a0;
- (void)didDeviceDisconnect:(id)a0;
- (void)exchangeRemoteDeviceProtocolInfo:(id)a0;
- (void)getFirstPassRunningMode:(id /* block */)a0;
- (void)getTriggerCount:(id /* block */)a0;
- (id)initWithRemoteDevice:(id)a0;
- (void)invalidateInterstitialWithLevel:(long long)a0;
- (BOOL)isConnectedDeviceDarwin;
- (BOOL)isConnectedDeviceGibraltar;
- (void)notifyBluetoothWirelessSplitterStateChanged:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;
- (void)notifyVoiceTriggerAssetChangeWithSiriLanguageCode:(id)a0;
- (void)readAndClearVoiceTriggeredTokenWithCompletion:(id /* block */)a0;
- (void)readVoiceTriggeredTokenWithCompletion:(id /* block */)a0;
- (void)setSelfTriggerEnable:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)setVoiceTriggerEnable:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)transferInterstitialAudioFiles:(id)a0 interstitialLevel:(long long)a1 completion:(id /* block */)a2;
- (void)transferVoiceTriggerAsset:(id)a0 forLanguageCode:(id)a1 completion:(id /* block */)a2;
- (BOOL)transferVoiceTriggerSpeakerModel:(id)a0 forAsset:(id)a1;
- (void)voiceTriggerEnabledWithCompletion:(id /* block */)a0;
- (BOOL)waitingForConnection:(double)a0 error:(id *)a1;

@end
