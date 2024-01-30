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

- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;
- (id)init;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)connectToControllerWithID:(id)a0;
- (BOOL)shouldRestartOnInterruption;
- (void)resetConnection;
- (void)registerResponseBlock:(id /* block */)a0 forUUID:(id)a1;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)startServerWithDelegate:(id)a0;
- (void)availableDevicesDidUpdate:(id)a0;
- (void)deviceDidUpdateProperty:(id)a0;
- (void)liveListenDidUpdate:(id)a0;
- (void)environmentalDosimetryDidUpdate:(id)a0;
- (void)headphoneLevelDidUpdate:(id)a0;
- (void)registerUpdateBlock:(id)a0 forIdentier:(unsigned long long)a1 withListener:(id)a2;
- (void)_registerListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1 beginSearching:(BOOL)a2;
- (void)unregisterUpdateListener:(id)a0;
- (void)registerListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1;
- (void)registerPassiveListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1;
- (void)registerListener:(id)a0 forPropertyUpdateHandler:(id /* block */)a1;
- (void)requestHearingAidConnectionWithReason:(long long)a0;
- (void)cancelHearingAidConnectionRequest;
- (void)registerListener:(id)a0 forLiveListenLevelsHandler:(id /* block */)a1;
- (void)startLiveListen;
- (void)stopLiveListen;
- (void)registerListener:(id)a0 forLiveDosimetryUpdates:(BOOL)a1 withDoseHandler:(id /* block */)a2;
- (void)unregisterDoseHandler:(id)a0;
- (void)registerListener:(id)a0 forLiveHeadphoneLevelHandler:(id /* block */)a1;
- (void)unregisterLiveHeadphoneLevelHandler:(id)a0;

@end
