@class NSObject, AXDispatchTimer, AXRemoteHearingAidDevice;
@protocol OS_dispatch_queue, HUNearbyHearingAidControllerDelegate;

@interface HUNearbyHearingAidController : HUDeviceController

@property (retain, nonatomic) AXRemoteHearingAidDevice *localDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaQueue;
@property (retain, nonatomic) AXDispatchTimer *sendConnectionToCompanionTimer;
@property (nonatomic) BOOL holdingMediaForConnection;
@property (nonatomic) BOOL holdingPhoneForConnection;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<HUNearbyHearingAidControllerDelegate> delegate;

+ (id)sharedInstance;

- (void)mediaServerDied;
- (id)availableDevices;
- (void)stop;
- (id)init;
- (void)start;
- (void)updateState;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 toDevices:(id)a1;
- (void)checkConnectionToHearingDevice:(id /* block */)a0;
- (void)callStatusDidChange:(id)a0;
- (void)checkConnectionPeers:(id /* block */)a0;
- (void)checkPairedPeerExists:(id /* block */)a0;
- (id)connectedPeer;
- (id)device:(id)a0 didReceiveMessage:(id)a1;
- (void)getConnectedPeer:(id /* block */)a0;
- (BOOL)hasConnectionToHearingDevice;
- (id)hearingAidForDeviceID:(id)a0;
- (id)hearingDevice;
- (void)mediaPlaybackDidChange:(id)a0;
- (void)registerMediaNotifications;
- (void)relinquishConnectionForReason:(long long)a0;
- (BOOL)representsLocalDevices;
- (void)requestConnectionForReason:(long long)a0;
- (void)requestHandoffForMedia;
- (void)routesDidChange:(id)a0;
- (void)sendConnectionToCompanionIfPossible;
- (void)sendConnectionToCompanionIfPossible:(BOOL)a0;
- (void)sendConnectionUpdateToPeers;
- (void)sendMessageToAllDevices:(id)a0;
- (void)sendWrite:(id)a0 toDevices:(id)a1;
- (void)sendWriteToAllDevices:(id)a0;
- (BOOL)shouldRelinquishConnectionForReason:(long long)a0;
- (void)shouldRequestAudioConnectionForCall:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)unregisterMediaNotifications;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)updateStateOnDeviceQueue;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2 toDevices:(id)a3;

@end
