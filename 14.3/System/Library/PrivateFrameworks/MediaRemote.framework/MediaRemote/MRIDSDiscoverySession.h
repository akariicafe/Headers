@class NSObject, NSArray, MRProtocolClientConnection, NSString, CURunLoopThread, NSRunLoop, MRConcreteEndpoint;
@protocol OS_dispatch_queue;

@interface MRIDSDiscoverySession : MRAVRoutingDiscoverySession <MRProtocolClientConnectionDelegate> {
    NSArray *_availableExternalAudioOutputDevices;
    NSArray *_availableExternalOutputDevices;
    NSArray *_availableExternalEndpoints;
    NSArray *_companionOutputDevices;
    unsigned int _discoveryMode;
    unsigned int _endpointFeatures;
    NSObject<OS_dispatch_queue> *_idsQueue;
    CURunLoopThread *_runLoopThread;
    NSRunLoop *_runLoop;
}

@property (retain, nonatomic) NSArray *availableExternalAudioOutputDevices;
@property (retain, nonatomic) NSArray *availableExternalOutputDevices;
@property (retain, nonatomic) NSArray *availableExternalEndpoints;
@property (retain, nonatomic) MRConcreteEndpoint *companionEndpoint;
@property (retain, nonatomic) NSArray *companionOutputDevices;
@property (retain, nonatomic) MRProtocolClientConnection *discoveryChannel;
@property (readonly, nonatomic) NSRunLoop *runLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformOutputDevice:(id)a0 fromEndpoint:(id)a1;

- (void)setDiscoveryMode:(unsigned int)a0;
- (void)setEndpointFeatures:(unsigned int)a0;
- (void)clientConnection:(id)a0 didReceiveMessage:(id)a1;
- (void)handleDeviceInfoUpdateMessage:(id)a0;
- (void).cxx_destruct;
- (void)_handleCompanionDeviceDisconnectedNotification:(id)a0;
- (void)_onIDSQueue_disconnectDiscoveryChannel;
- (id)availableEndpoints;
- (void)_onIDSQueue_connectDiscoveryChannel;
- (unsigned int)endpointFeatures;
- (id)initWithConfiguration:(id)a0;
- (id)compaionEndpoint;
- (void)_onIDSQueue_initalizeDiscoveryChannel;
- (unsigned int)discoveryMode;
- (void)_handleCompanionDeviceDidResetNotification:(id)a0;
- (void)handleUpdateAudioOutputDevicesMessage:(id)a0;
- (id)availableOutputDevices;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (void)handleUpdateRemoteControlEndpointsMessage:(id)a0;

@end
