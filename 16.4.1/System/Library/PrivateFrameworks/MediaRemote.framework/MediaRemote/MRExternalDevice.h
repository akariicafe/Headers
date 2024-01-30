@class MRSupportedProtocolMessages, NSString, NSArray, NSMutableDictionary, MRDeviceInfo, MROrigin;

@interface MRExternalDevice : NSObject {
    NSMutableDictionary *_discoveryOutputDevicesCallbacks;
    NSMutableDictionary *_discoveryConfigurations;
    NSMutableDictionary *_discoveryModes;
}

@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;
@property (nonatomic) long long connectionRecoveryBehavior;
@property (readonly, nonatomic) BOOL supportsIdleDisconnection;
@property (readonly, nonatomic) BOOL supportsExternalDiscovery;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *hostName;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) MROrigin *customOrigin;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSArray *personalOutputDevices;
@property (nonatomic) BOOL wantsNowPlayingNotifications;
@property (nonatomic) BOOL wantsNowPlayingArtworkNotifications;
@property (nonatomic) BOOL wantsVolumeNotifications;
@property (nonatomic) BOOL wantsOutputDeviceNotifications;
@property (nonatomic) BOOL wantsSystemEndpointNotifications;
@property (nonatomic) BOOL wantsEndpointChangeNotifications;
@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) unsigned int connectionState;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;

- (id)_init;
- (void)setListeningMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)connectWithOptions:(unsigned int)a0;
- (void)connectWithOptions:(unsigned int)a0 userInfo:(id)a1;
- (void)connectWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)createHostedEndpointWithOutputDeviceUIDs:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)currentClientUpdatesConfigMessage;
- (void)disconnect:(id)a0;
- (id)discoveryDescription;
- (id)errorForCurrentState;
- (void)modifyByAddingDeviceUIDs:(id)a0 removingDeviceUIDs:(id)a1 settingDeviceUIDs:(id)a2 addingClusterAwareDeviceUIDs:(id)a3 removingClusterAwareDeviceUIDs:(id)a4 settingClusterAwareDeviceUIDs:(id)a5 withReplyQueue:(id)a6 completion:(id /* block */)a7;
- (void)notifyDiscoveryOutputDevicesChanged:(id)a0 forConfiguration:(id)a1;
- (void)outputDeviceVolume:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)outputDeviceVolumeControlCapabilities:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)ping:(double)a0 callback:(id /* block */)a1 withQueue:(id)a2;
- (id)registerDiscoveryTokenForConfiguration:(id)a0;
- (void)removeFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; })a0;
- (void)sendClientUpdatesConfigMessage;
- (void)sendCustomData:(id)a0 withName:(id)a1;
- (void)setConnectionStateCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setCustomDataCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setDiscoveryMode:(unsigned int)a0 forConfiguration:(id)a1;
- (void)setDiscoveryMode:(unsigned int)a0 forToken:(id)a1;
- (void)setDiscoveryOutputDevicesChangedCallback:(id /* block */)a0 forToken:(id)a1;
- (void)setNameCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setOutputDeviceVolume:(float)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setOutputDevicesRemovedCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setOutputDevicesUpdatedCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setPairingAllowedCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setPairingCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setVolumeCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setVolumeChangedCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setVolumeControlCapabilitiesCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)unpair;
- (void)unregisterDiscoveryToken:(id)a0;

@end
