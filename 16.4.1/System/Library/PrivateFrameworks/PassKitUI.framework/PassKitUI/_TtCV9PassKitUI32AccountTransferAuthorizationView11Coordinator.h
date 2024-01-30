@interface _TtCV9PassKitUI32AccountTransferAuthorizationView11Coordinator : NSObject <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate, PKAccountServiceObserver, PKDashboardTransactionFetcherDelegate> {
    void /* unknown type, empty encoding */ paymentRequest;
    void /* unknown type, empty encoding */ accountModel;
    void /* unknown type, empty encoding */ _isPresented;
    void /* unknown type, empty encoding */ stepUpAction;
    void /* unknown type, empty encoding */ dismissAction;
    void /* unknown type, empty encoding */ paymentWebService;
    void /* unknown type, empty encoding */ scheduleTransferModel;
    void /* unknown type, empty encoding */ scheduleTransferRequest;
    void /* unknown type, empty encoding */ authorized;
    void /* unknown type, empty encoding */ presentFraudStepUp;
    void /* unknown type, empty encoding */ hasReceivedTransaction;
    void /* unknown type, empty encoding */ hasReceivedAccountUpdate;
    void /* unknown type, empty encoding */ waitingForData;
    void /* unknown type, empty encoding */ accountService;
    void /* unknown type, empty encoding */ transactionFetcher;
    void /* unknown type, empty encoding */ dismissalTimer;
    void /* unknown type, empty encoding */ pastUpdateLeeway;
}

- (void)accountChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeApplePayTrustSignature:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didUpdateAccountServicePaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)transactionsChanged:(id)a0;
- (void)paymentAuthorizationViewController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationViewControllerDidFinish:(id)a0;

@end
