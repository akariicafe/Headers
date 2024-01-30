@class NSXPCConnection, NSString, NSTimer, PKInAppPaymentService, PKPaymentAuthorizationCoordinatorExportedObject, PKPaymentRequest, NSObject, NSXPCListener;
@protocol PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationHostProtocol, OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate;

@interface PKPaymentAuthorizationCoordinator : NSObject <NSXPCListenerDelegate>

@property (nonatomic) BOOL didPresent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSString *hostIdentifier;
@property (retain, nonatomic) PKPaymentAuthorizationCoordinatorExportedObject *exportedObject;
@property (copy, nonatomic) id /* block */ presentationCompletionBlock;
@property (retain, nonatomic) PKInAppPaymentService *inAppPaymentService;
@property (retain, nonatomic) NSXPCListener *listener;
@property (nonatomic) double connectionTimeout;
@property (weak, nonatomic) id<PKPaymentAuthorizationCoordinatorDelegate> delegate;
@property (weak, nonatomic, setter=_setPrivateDelegate:) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;
@property (readonly) id<PKPaymentAuthorizationHostProtocol> hostDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canMakePayments;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1 webDomain:(id)a2;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0 webDomain:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)presentWithOrientation:(id)a0 completion:(id /* block */)a1;
- (void)_invokeCallbackWithSuccess:(BOOL)a0;
- (void)_viewServiceTimerFired:(id)a0;
- (id)initWithPaymentRequest:(id)a0;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)_remoteObjectProxy;

@end
