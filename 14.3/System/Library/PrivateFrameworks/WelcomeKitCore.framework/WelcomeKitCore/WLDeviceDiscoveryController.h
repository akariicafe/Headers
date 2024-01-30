@class WLSourceDevice, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface WLDeviceDiscoveryController : NSObject <WLDeviceDiscoverySocketHandlerDelegate> {
    int _listenerSocket;
    NSObject<OS_dispatch_source> *_incomingConnSource;
    NSMutableArray *_socketHandlers;
    NSMutableArray *_sourceDevices;
    unsigned long long _countOfPairingAttemptsWithCurrentSecret;
    NSString *_pairingSecret;
    NSObject<OS_dispatch_queue> *_discoveryRequestSerialQueue;
    id /* block */ _nextIncomingConnectionHandler;
    NSString *_allowedAddress;
}

@property (readonly, nonatomic) WLSourceDevice *sourceDevice;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)importLocalContent;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)attemptDirectConnectionToAddress:(id)a0;
- (void)setNextIncomingConnectionHandler:(id /* block */)a0;
- (void)deviceDiscoverySocketHandler:(id)a0 didFailToHandshakeWithSourceDevice:(id)a1 error:(id)a2;
- (void)deviceDiscoverySocketHandler:(id)a0 didFinishHandshakeWithSourceDevice:(id)a1 priorConnectionFailureReasons:(id)a2;
- (void)_queue_startDiscoveryWithCompletion:(id /* block */)a0;
- (BOOL)_shouldForceDiscoveryError;
- (void)_allowConnectionsFromAnyAddress;
- (id)_generatePairingSecret;
- (void)_postSourceDevicesDidChangeNotification;
- (id)_ssidWithSecret:(id)a0;
- (int)createListenerSocketOnPort:(unsigned long long)a0;
- (int)acceptIncomingConnectionWithListenerSocket:(int)a0 nonBlocking:(BOOL)a1;
- (id)listenForConnectionOnSocket:(int)a0 withConnectionHandler:(id /* block */)a1;
- (void)_queue_stopDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (BOOL)supportsLocalImport;

@end
