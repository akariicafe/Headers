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
- (void)updateState;
- (id)hearingDevice;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)sendMessage:(id)a0 toDevices:(id)a1;
- (id)hearingAidForDeviceID:(id)a0;
- (BOOL)representsLocalDevices;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;
- (void)sendConnectionUpdateToPeers;
- (void)sendWriteToAllDevices:(id)a0;
- (void)checkConnectionToHearingDevice:(id /* block */)a0;
- (void)checkConnectionPeers:(id /* block */)a0;
- (void)requestHandoffForMedia;
- (void)sendMessageToAllDevices:(id)a0;
- (void)callStatusDidChange:(id)a0;
- (void)routesDidChange:(id)a0;
- (void)mediaPlaybackDidChange:(id)a0;
- (void)unregisterMediaNotifications;
- (void)registerMediaNotifications;
- (BOOL)hasConnectionToHearingDevice;
- (void)requestConnectionForReason:(long long)a0;
- (void)sendConnectionToCompanionIfPossible;
- (void)shouldRequestAudioConnectionForCall:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)sendConnectionToCompanionIfPossible:(BOOL)a0;
- (void)getConnectedPeer:(id /* block */)a0;
- (BOOL)shouldRelinquishConnectionForReason:(long long)a0;
- (void)updateStateOnDeviceQueue;
- (id)connectedPeer;
- (id)nearbyDeviceWithIdentifier:(id)a0;
- (id)nearbyDeviceWithPeerDevice:(id)a0;
- (id)deviceWithIdentifier:(id)a0 didReceiveMessage:(id)a1;
- (unsigned long long)currentConnectionStatus;
- (void)relinquishConnectionForReason:(long long)a0;
- (void)sendWrite:(id)a0 toDevices:(id)a1;
- (id)addDeviceWithIdentifier:(id)a0;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2 toDevices:(id)a3;
- (void)checkPairedPeerExists:(id /* block */)a0;

@end
