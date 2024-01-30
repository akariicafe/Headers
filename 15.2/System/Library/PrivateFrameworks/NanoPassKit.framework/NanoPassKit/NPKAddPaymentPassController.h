@class NSString, PKAddPaymentPassRequestConfiguration, PKXPCService;

@interface NPKAddPaymentPassController : PKAddPaymentPassController <NPKAddPaymentPassControllerClientProtocol, PKXPCServiceDelegate>

@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration;
@property (retain, nonatomic) PKXPCService *remoteService;
@property (nonatomic) BOOL didFinishCallbackSent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAddPaymentPass;

- (id)initWithRequestConfiguration:(id)a0 delegate:(id)a1;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (void)didFinishWithPass:(id)a0 error:(id)a1;
- (void)generateRequestWithCertificateChain:(id)a0 nonce:(id)a1 nonceSignature:(id)a2 completionHandler:(id /* block */)a3;
- (void)_sendDidFinishWithPass:(id)a0 error:(id)a1;

@end
