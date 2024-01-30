@class AXRemoteHearingAidDevice, NSArray, NSString, AXDispatchTimer, RPCompanionLinkClient, SFDeviceDiscovery, NSObject;
@protocol OS_dispatch_queue, HUNearbyControllerDelegate;

@interface HUNearbyController : HUDeviceController <HUNearbyDeviceDelegate>

@property (copy, nonatomic) NSArray *availableDevices;
@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) AXRemoteHearingAidDevice *localDevice;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaQueue;
@property (retain, nonatomic) AXDispatchTimer *sendConnectionToCompanionTimer;
@property (nonatomic) BOOL holdingMediaForConnection;
@property (nonatomic) BOOL holdingPhoneForConnection;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<HUNearbyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)mediaServerDied;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;
- (id)init;
- (void)getConnectedPeer:(id /* block */)a0;
- (void)updateState;
- (void).cxx_destruct;
- (void)shouldRequestAudioConnectionForCall:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)callStatusDidChange:(id)a0;
- (BOOL)representsLocalDevices;
- (BOOL)shouldRelinquishConnectionForReason:(long long)a0;
- (void)updateStateOnDeviceQueue;
- (id)addDeviceWithIdentifier:(id)a0;
- (void)stop;
- (void)checkConnectionPeers:(id /* block */)a0;
- (id)deviceWithIdentifier:(id)a0 didReceiveMessage:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2 toDevices:(id)a3;
- (id)hearingAidForDeviceID:(id)a0;
- (void)sendMessageToAllDevices:(id)a0;
- (void)requestConnectionForReason:(long long)a0;
- (void)sendConnectionToCompanionIfPossible:(BOOL)a0;
- (void)unregisterMediaNotifications;
- (id)hearingDevice;
- (void)registerMediaNotifications;
- (unsigned long long)currentConnectionStatus;
- (void)sendMessage:(id)a0 toDevices:(id)a1;
- (void)sendConnectionUpdateToPeers;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)start;
- (id)nearbyDeviceWithPeerDevice:(id)a0;
- (void)checkPairedPeerExists:(id /* block */)a0;
- (void)routesDidChange:(id)a0;
- (void)requestHandoffForMedia;
- (BOOL)hasConnectionToHearingDevice;
- (void)relinquishConnectionForReason:(long long)a0;
- (id)connectedPeer;
- (void)checkConnectionToHearingDevice:(id /* block */)a0;
- (void)sendConnectionToCompanionIfPossible;
- (void)sendWrite:(id)a0 toDevices:(id)a1;
- (void)sendWriteToAllDevices:(id)a0;
- (id)nearbyDeviceWithIdentifier:(id)a0;
- (void)mediaPlaybackDidChange:(id)a0;

@end
