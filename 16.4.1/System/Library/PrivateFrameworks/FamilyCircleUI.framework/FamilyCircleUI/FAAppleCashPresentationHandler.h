@class PKPeerPaymentAssociatedAccountsController, PKPeerPaymentAssociatedAccountPresentationContext, UINavigationController;

@interface FAAppleCashPresentationHandler : NSObject

@property (retain, nonatomic) PKPeerPaymentAssociatedAccountsController *peerPaymentController;
@property (retain, nonatomic) PKPeerPaymentAssociatedAccountPresentationContext *context;
@property (retain, nonatomic) UINavigationController *navigationController;

- (id)initWithNavigationController:(id)a0;
- (void).cxx_destruct;
- (void)presentPeerPaymentControllerWithAttributes:(id)a0 completion:(id /* block */)a1;

@end
