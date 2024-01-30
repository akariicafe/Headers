@class NSMutableArray, NSString, HAP2AccessoryServerDiscoveryAccessoryInfo, NSObject, HMFActivity;
@protocol HAP2CoAPClient, HAP2AccessoryServerTransportCoAPClientFactory, HAP2AccessoryServerDiscovery, OS_nw_connection;

@interface HAP2AccessoryServerTransportCoAP : HAP2AccessoryServerTransportBaseWithDelegate <HAP2CoAPClientDelegate> {
    id /* block */ _stateChangeCompletion;
    id /* block */ _sendRequestCompletion;
    HMFActivity *_resolveActivity;
    id<HAP2CoAPClient> _coapClient;
    unsigned long long _maxTransmitAttempts;
    double _initialACKTimeout;
    NSObject<OS_nw_connection> *_nwConnection;
    unsigned long long _numOfAddresses;
    unsigned long long _numOfAddressesTried;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    id<HAP2AccessoryServerDiscovery> _discovery;
    HAP2AccessoryServerDiscoveryAccessoryInfo *_accessoryInfo;
    double _addressResolutionTimeout;
    id<HAP2AccessoryServerTransportCoAPClientFactory> _coapClientFactory;
    NSMutableArray *_addressList;
    unsigned long long _maxAddressesAllowed;
    NSMutableArray *_bonjourNames;
    unsigned long long _maxBonjourNamesAllowed;
    unsigned long long _lastResolveStartTime;
    struct coap_address_t { unsigned int size; union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } sin; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } sin6; } addr; } _ipAddress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clientDidDisconnect:(id)a0 error:(id)a1;
- (void)client:(id)a0 didReceiveEvent:(id)a1;
- (void)doCloseWithError:(id)a0 completion:(id /* block */)a1;
- (void)doOpenWithCompletion:(id /* block */)a0;
- (void)doSendRequest:(id)a0 completion:(id /* block */)a1;
- (void)doUpdateMaxRequestTimeout:(double)a0;
- (id)endpointForCharacteristic:(id)a0;
- (id)endpointForCharacteristics:(id)a0;
- (id)initWithAccessoryInfo:(id)a0 discovery:(id)a1 operationQueue:(id)a2;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1 serviceName:(id)a2 serviceType:(id)a3 serviceDomain:(id)a4 addressResolutionTimeout:(double)a5 discovery:(id)a6 accessoryInfo:(id)a7 coapClient:(id)a8 coapClientFactory:(id)a9;
- (id)initWithServiceName:(id)a0 type:(id)a1 domain:(id)a2 operationQueue:(id)a3;
- (BOOL)mergeWithNewTransport:(id)a0;
- (id)mimeTypeForCharacteristicRequests;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)a0;
- (unsigned long long)protocolFeaturesForVersion:(id)a0;
- (id)underlyingTransport;
- (id)wellKnownEndpoint:(unsigned long long)a0;

@end
