@class PKDisbursementRequest, NSString, PKPaymentAuthorizationCoordinator;
@protocol PKDisbursementAuthorizationControllerDelegate;

@interface PKDisbursementAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKDisbursementAuthorizationController *_retainSelf;
    PKPaymentAuthorizationCoordinator *_authController;
    PKDisbursementRequest *_disbursementRequest;
}

@property (readonly, weak, nonatomic) id<PKDisbursementAuthorizationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsDisbursements;

- (void).cxx_destruct;
- (void)authorizeDisbursementWithCompletion:(id /* block */)a0;
- (id)initWithDisbursementRequest:(id)a0 delegate:(id)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeDisbursementVoucher:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;

@end
