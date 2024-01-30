@class NSString;
@protocol HAPEncryptedSession, HAP2AccessoryServerTransport, HAP2AccessoryServerTransportCommon, HAP2AccessoryServerSecureTransportDelegate;

@interface HAP2AccessoryServerSecureTransportBase : HAP2AccessoryServerTransportBase <HAP2AccessoryServerTransportDelegate, HAP2AccessoryServerSecureTransport>

@property (retain, nonatomic) id<HAPEncryptedSession> encryptedSession;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransport> transport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HAP2AccessoryServerSecureTransportDelegate> delegate;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) double maxRequestTimeout;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransportCommon> underlyingTransport;

+ (id)defaultEncryptedSession;

- (void).cxx_destruct;
- (id)encryptData:(id)a0 error:(id *)a1;
- (unsigned long long)protocolFeaturesForVersion:(id)a0;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1 transport:(id)a2;
- (id)wellKnownEndpoint:(unsigned long long)a0;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)a0;
- (void)transport:(id)a0 didChangeState:(unsigned long long)a1 error:(id)a2;
- (void)transport:(id)a0 didReceiveEvent:(id)a1;
- (void)doOpenWithCompletion:(id /* block */)a0;
- (void)doCloseWithError:(id)a0 completion:(id /* block */)a1;
- (void)doUpdateMaxRequestTimeout:(double)a0;
- (void)didChangeStateWithError:(id)a0;
- (void)doSendRequest:(id)a0 completion:(id /* block */)a1;
- (id)endpointForCharacteristic:(id)a0;
- (id)endpointForCharacteristics:(id)a0;
- (id)mimeTypeForCharacteristicRequests;
- (BOOL)mergeWithNewTransport:(id)a0;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1 transport:(id)a2 encryptedSession:(id)a3;
- (void)_encryptRequest:(id)a0 completion:(id /* block */)a1;
- (id)decryptData:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
- (void)_sendRequest:(id)a0 completion:(id /* block */)a1;
- (void)_decryptResponse:(id)a0 request:(id)a1 completion:(id /* block */)a2;

@end
