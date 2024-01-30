@class NSArray, NSString, NSMutableDictionary;
@protocol AXHAServerDelegate;

@interface AXHAServer : HCServer <AXHARemoteUpdateProtocol> {
    NSMutableDictionary *_responseBlocks;
}

@property (copy, nonatomic) NSArray *availableHearingAids;
@property (retain, nonatomic) NSArray *availableControllers;
@property (nonatomic) BOOL hearingAidConnectedOrReachable;
@property (nonatomic) BOOL hearingAidReachableForAudioTransfer;
@property (retain, nonatomic) NSString *hearingDeviceName;
@property (retain, nonatomic) NSString *connectedDeviceName;
@property (retain, nonatomic) NSMutableDictionary *updates;
@property (readonly, nonatomic) BOOL hearingAidReachable;
@property (weak, nonatomic) id<AXHAServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)resetConnection;
- (void).cxx_destruct;
- (id)init;
- (void)registerResponseBlock:(id /* block */)a0 forUUID:(id)a1;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (BOOL)shouldRestartOnInterruption;
- (void)startServerWithDelegate:(id)a0;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;
- (void)availableDevicesDidUpdate:(id)a0;
- (void)deviceDidUpdateProperty:(id)a0;
- (void)liveListenDidUpdate:(id)a0;
- (void)environmentalDosimetryDidUpdate:(id)a0;
- (void)_headphoneLevelDidUpdate:(id)a0 messageIdentifier:(unsigned long long)a1;
- (void)_audiogramIngestionModelDidUpdate:(id)a0;
- (void)controlMessageDidUpdate:(id)a0;
- (void)comfortSoundsAssetsDidUpdate:(id)a0;
- (void)registerUpdateBlock:(id)a0 forIdentier:(unsigned long long)a1 withListener:(id)a2;
- (void)_registerListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1 beginSearching:(BOOL)a2;
- (void)_registerListener:(id)a0 forLiveHeadphoneLevelHandler:(id /* block */)a1 messageIdentifier:(unsigned long long)a2;
- (void)_unregisterLiveHeadphoneLevelHandler:(id)a0 messageIdentifier:(unsigned long long)a1;
- (void)unregisterUpdateListener:(id)a0;
- (void)registerListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1;
- (void)registerPassiveListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1;
- (void)registerListener:(id)a0 forPropertyUpdateHandler:(id /* block */)a1;
- (void)connectToControllerWithID:(id)a0;
- (void)requestHearingAidConnectionWithReason:(long long)a0;
- (void)cancelHearingAidConnectionRequest;
- (void)registerListener:(id)a0 forLiveListenLevelsHandler:(id /* block */)a1;
- (void)startLiveListen;
- (void)stopLiveListen;
- (void)registerListener:(id)a0 forLiveDosimetryUpdates:(BOOL)a1 withDoseHandler:(id /* block */)a2;
- (void)unregisterDoseHandler:(id)a0;
- (void)registerListener:(id)a0 forLiveHeadphoneLevelHandler:(id /* block */)a1;
- (void)unregisterLiveHeadphoneLevelHandler:(id)a0;
- (void)registerListener:(id)a0 forRemoteLiveHeadphoneLevelHandler:(id /* block */)a1;
- (void)unregisterRemoteLiveHeadphoneLevelHandler:(id)a0;
- (void)registerListener:(id)a0 forRemoteLiveHeadphoneLevelChangesHandler:(id /* block */)a1;
- (void)unregisterRemoteLiveHeadphoneLevelChangesHandler:(id)a0;
- (void)registerListener:(id)a0 forAudiogramIngestionModelUpdatesHandler:(id /* block */)a1;
- (void)unregisterAudiogramIngestionModelUpdatesHandler:(id)a0;
- (void)registerListener:(id)a0 forControlMessageHandler:(id /* block */)a1;
- (void)unregisterControlMessageHandler:(id)a0;
- (void)registerListener:(id)a0 forComfortSoundsModelUpdatesHandler:(id /* block */)a1;
- (void)unregisterComfortSoundsModelUpdatesHandler:(id)a0;
- (void)downloadComfortSoundAsset:(id)a0;
- (void)removeComfortSoundAsset:(id)a0;

@end
