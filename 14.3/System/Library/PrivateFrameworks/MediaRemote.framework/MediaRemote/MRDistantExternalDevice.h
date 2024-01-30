@class NSXPCConnection, NSString, NSXPCListenerEndpoint, MRAVDistantExternalDeviceMetadata, NSArray, NSObject, MROrigin, NSNumber;
@protocol OS_dispatch_queue;

@interface MRDistantExternalDevice : MRExternalDevice <MRAVDistantExternalDeviceClientProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    MRAVDistantExternalDeviceMetadata *_externalDeviceMetadata;
    NSXPCConnection *_hostedExternalDeviceConnection;
    unsigned long long _deviceNotifications;
    unsigned int _connectionState;
    MROrigin *_customOrigin;
    BOOL _isValid;
    BOOL _hasEverAtteptedToConnectWhileInvalid;
    NSArray *_subscribedPlayerPaths;
    NSNumber *_isPaired;
}

@property (copy, nonatomic) id /* block */ connectionStateCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue;
@property (copy, nonatomic) id /* block */ nameCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue;
@property (copy, nonatomic) id /* block */ customDataCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue;
@property (copy, nonatomic) id /* block */ volumeCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, nonatomic) BOOL hasEverAttemptedToConnect;
@property (readonly, nonatomic) unsigned long long callbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceInterface;
+ (id)clientInterface;

- (BOOL)isPaired;
- (long long)port;
- (id)deviceInfo;
- (void)modifyByAddingDeviceUIDs:(id)a0 removingDeviceUIDs:(id)a1 settingDeviceUIDs:(id)a2 addingClusterAwareDeviceUIDs:(id)a3 removingClusterAwareDeviceUIDs:(id)a4 settingClusterAwareDeviceUIDs:(id)a5 withReplyQueue:(id)a6 completion:(id /* block */)a7;
- (id)personalOutputDevices;
- (void).cxx_destruct;
- (void)unpair;
- (void)dealloc;
- (BOOL)isValid;
- (id)supportedMessages;
- (void)sendCustomData:(id)a0 withName:(id)a1;
- (unsigned int)connectionState;
- (void)hostedExternalDeviceNameDidChange:(id)a0;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)a0 withError:(id)a1;
- (void)hostedExternalDeviceDidReceiveCustomData:(id)a0 withName:(id)a1;
- (void)hostedExternalDeviceVolumeDidChange:(float)a0 forEndpointWithIdentifier:(id)a1 forOutputDeviceWithIdentifier:(id)a2;
- (void)hostedExternalDeviceEndpointDidChange:(id)a0;
- (void)_handleDeviceInfoDidChange:(id)a0;
- (id)initWithExternalDeviceListenerEndpoint:(id)a0;
- (BOOL)wantsNowPlayingNotifications;
- (BOOL)wantsNowPlayingArtworkNotifications;
- (BOOL)wantsVolumeNotifications;
- (BOOL)wantsOutputDeviceNotifications;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; })a0;
- (BOOL)wantsEndpointChangeNotifications;
- (void)setWantsEndpointChangeNotifications:(BOOL)a0;
- (BOOL)wantsSystemEndpointNotifications;
- (BOOL)isUsingSystemPairing;
- (id)customOrigin;
- (void)setWantsSystemEndpointNotifications:(BOOL)a0;
- (void)setPairingCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setNameCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setPairingAllowedCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setCustomDataCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)ping:(double)a0 callback:(id /* block */)a1 withQueue:(id)a2;
- (void)outputDeviceVolume:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)name;
- (void)connectWithOptions:(unsigned int)a0 userInfo:(id)a1;
- (id)hostName;
- (void)disconnect:(id)a0;
- (void)setWantsVolumeNotifications:(BOOL)a0;
- (void)outputDeviceVolumeControlCapabilities:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)setOutputDeviceVolume:(float)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setWantsOutputDeviceNotifications:(BOOL)a0;
- (void)setWantsNowPlayingArtworkNotifications:(BOOL)a0;
- (void)setWantsNowPlayingNotifications:(BOOL)a0;
- (void)setVolumeCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setConnectionStateCallback:(id /* block */)a0 withQueue:(id)a1;
- (id)subscribedPlayerPaths;
- (void)setSubscribedPlayerPaths:(id)a0;

@end
