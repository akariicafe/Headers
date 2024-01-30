@class PKPaymentTransaction;
@protocol PKPaymentDataProvider, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate;

@interface PKPaymentTransactionReportFraudConfirmationViewController : PKExplanationViewController {
    PKPaymentTransaction *_transaction;
    id<PKPaymentDataProvider> _dataProvider;
    id<PKPaymentTransactionReportFraudConfirmationViewControllerDelegate> _fraudDelegate;
}

- (void).cxx_destruct;
- (id)initWithContext:(long long)a0 transaction:(id)a1 dataProvider:(id)a2 fraudDelegate:(id)a3;
- (void)viewDidLoad;
- (void)reportFraud:(id)a0;

@end
