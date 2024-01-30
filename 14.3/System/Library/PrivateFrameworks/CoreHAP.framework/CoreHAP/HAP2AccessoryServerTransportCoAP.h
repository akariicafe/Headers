@class NSString, HMFActivity, HAP2AccessoryServerDiscoveryAccessoryInfo;
@protocol HAP2CoAPClient, HAP2AccessoryServerTransportCoAPClientFactory, HAP2AccessoryServerTransportNetService, HAP2AccessoryServerDiscovery, HAP2AccessoryServerTransportNetServiceFactory;

@interface HAP2AccessoryServerTransportCoAP : HAP2AccessoryServerTransportBaseWithDelegate <HAP2CoAPClientDelegate, HAP2AccessoryServerTransportNetServiceDelegate> {
    id /* block */ _stateChangeCompletion;
    id /* block */ _sendRequestCompletion;
    id<HAP2AccessoryServerTransportNetService> _netService;
    HMFActivity *_netServiceResolveActivity;
    id<HAP2CoAPClient> _coapClient;
    unsigned long long _maxTransmitAttempts;
    double _initialACKTimeout;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    id<HAP2AccessoryServerDiscovery> _discovery;
    HAP2AccessoryServerDiscoveryAccessoryInfo *_acessoryInfo;
    double _addressResolutionTimeout;
    id<HAP2AccessoryServerTransportNetServiceFactory> _netServiceFactory;
    id<HAP2AccessoryServerTransportCoAPClientFactory> _coapClientFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceDidStop:(id)a0;
- (void)clientDidDisconnect:(id)a0 error:(id)a1;
- (unsigned long long)protocolFeaturesForVersion:(id)a0;
- (id)wellKnownEndpoint:(unsigned long long)a0;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)a0;
- (void)doOpenWithCompletion:(id /* block */)a0;
- (void)doCloseWithError:(id)a0 completion:(id /* block */)a1;
- (void)doUpdateMaxRequestTimeout:(double)a0;
- (void)doSendRequest:(id)a0 completion:(id /* block */)a1;
- (id)endpointForCharacteristic:(id)a0;
- (id)endpointForCharacteristics:(id)a0;
- (id)mimeTypeForCharacteristicRequests;
- (BOOL)mergeWithNewTransport:(id)a0;
- (id)underlyingTransport;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1;
- (void)client:(id)a0 didReceiveEvent:(id)a1;
- (id)initWithAccessoryInfo:(id)a0 discovery:(id)a1 operationQueue:(id)a2;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1 serviceName:(id)a2 serviceType:(id)a3 serviceDomain:(id)a4 addressResolutionTimeout:(double)a5 discovery:(id)a6 accessoryInfo:(id)a7 coapClient:(id)a8 netServiceFactory:(id)a9 coapClientFactory:(id)a10;
- (id)initWithServiceName:(id)a0 type:(id)a1 domain:(id)a2 operationQueue:(id)a3;

@end
