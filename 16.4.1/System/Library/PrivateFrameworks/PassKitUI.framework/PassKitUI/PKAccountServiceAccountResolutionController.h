@class PKTransactionSourceCollection, UIViewController, PKBusinessChatController, PKAccountUserCollection, PKAccount;
@protocol PKAccountServiceAccountResolutionControllerDelegate, PKAccountBillPaymentObserver;

@interface PKAccountServiceAccountResolutionController : NSObject {
    PKBusinessChatController *_businessChatController;
}

@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (weak, nonatomic) id<PKAccountServiceAccountResolutionControllerDelegate> delegate;
@property (weak, nonatomic) id<PKAccountBillPaymentObserver> billPaymentObserver;
@property (weak, nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)_alertControllerForBusinessChatContext:(id)a0;
- (void)_callIssuer;
- (void)_handleAccountServiceAccountDidChangeNotification:(id)a0;
- (void)_openBusinessChatWithContext:(id)a0;
- (void)_presentAccountServiceAction:(unsigned long long)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)_presentViewController:(id)a0;
- (id)initWithAccount:(id)a0 accountUserCollection:(id)a1 transactionSourceCollection:(id)a2;
- (void)presentFlowForAccountResolution:(unsigned long long)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
