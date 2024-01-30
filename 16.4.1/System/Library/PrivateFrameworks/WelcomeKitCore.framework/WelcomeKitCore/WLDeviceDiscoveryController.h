@class WLSourceDevice, NSString, WLAutomation, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WLDeviceDiscoveryController : NSObject <WLDeviceDiscoverySocketHandlerDelegate> {
    BOOL _starting;
    int _listenerSocket;
    unsigned long long _countOfPairingAttemptsWithCurrentSecret;
    NSString *_allowedAddress;
    NSMutableArray *_socketHandlers;
    NSMutableArray *_sourceDevices;
    NSObject<OS_dispatch_source> *_incomingConnSource;
    id /* block */ _nextIncomingConnectionHandler;
    WLAutomation *_automation;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *ssid;
@property (readonly, nonatomic) WLSourceDevice *sourceDevice;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)importLocalContent;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)_allowConnectionsFromAnyAddress;
- (id)_generatePairingSecret;
- (void)_postSourceDevicesDidChangeNotification;
- (void)_queue_startDiscoveryWithPreGeneratedCode:(id)a0 completion:(id /* block */)a1;
- (void)_queue_stopDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (BOOL)_shouldForceDiscoveryError;
- (id)_ssidWithSecret:(id)a0;
- (int)acceptIncomingConnectionWithListenerSocket:(int)a0 nonBlocking:(BOOL)a1;
- (void)attemptDirectConnectionToAddress:(id)a0;
- (int)createListenerSocketOnPort:(unsigned long long)a0;
- (void)deviceDiscoverySocketHandler:(id)a0 didDiscoverCandidate:(id)a1;
- (void)deviceDiscoverySocketHandler:(id)a0 didFailToHandshakeWithSourceDevice:(id)a1 error:(id)a2;
- (void)deviceDiscoverySocketHandler:(id)a0 didFinishHandshakeWithSourceDevice:(id)a1;
- (id)listenForConnectionOnSocket:(int)a0 withConnectionHandler:(id /* block */)a1;
- (void)listenerDidStart:(int)a0 srp:(id)a1;
- (void)setNextIncomingConnectionHandler:(id /* block */)a0;
- (void)softAPDidStart:(BOOL)a0 ssid:(id)a1 psk:(id)a2 secret:(id)a3 srp:(id)a4 error:(id)a5 completion:(id /* block */)a6;
- (void)startWiFiAndDeviceDiscoveryWithPreGeneratedCode:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsLocalImport;

@end
