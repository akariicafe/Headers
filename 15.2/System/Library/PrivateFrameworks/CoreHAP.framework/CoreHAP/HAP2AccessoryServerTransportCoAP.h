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
    struct coap_address_t { unsigned int size; union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } sin; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } sin6; } addr; } _ipAddress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)netServiceDidStop:(id)a0;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)clientDidDisconnect:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)doOpenWithCompletion:(id /* block */)a0;
- (void)doCloseWithError:(id)a0 completion:(id /* block */)a1;
- (id)underlyingTransport;
- (unsigned long long)protocolFeaturesForVersion:(id)a0;
- (id)wellKnownEndpoint:(unsigned long long)a0;
- (id)endpointForCharacteristic:(id)a0;
- (id)endpointForCharacteristics:(id)a0;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)a0;
- (id)mimeTypeForCharacteristicRequests;
- (BOOL)mergeWithNewTransport:(id)a0;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1;
- (void)doSendRequest:(id)a0 completion:(id /* block */)a1;
- (void)doUpdateMaxRequestTimeout:(double)a0;
- (void)client:(id)a0 didReceiveEvent:(id)a1;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1 serviceName:(id)a2 serviceType:(id)a3 serviceDomain:(id)a4 addressResolutionTimeout:(double)a5 discovery:(id)a6 accessoryInfo:(id)a7 coapClient:(id)a8 netServiceFactory:(id)a9 coapClientFactory:(id)a10;
- (id)initWithAccessoryInfo:(id)a0 discovery:(id)a1 operationQueue:(id)a2;
- (id)initWithServiceName:(id)a0 type:(id)a1 domain:(id)a2 operationQueue:(id)a3;

@end
