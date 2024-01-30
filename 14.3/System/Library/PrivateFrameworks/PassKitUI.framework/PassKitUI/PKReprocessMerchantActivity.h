@class PKPaymentTransaction, PKPaymentPass;

@interface PKReprocessMerchantActivity : UIActivity {
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
}

- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (id)initWithTransaction:(id)a0 paymentPass:(id)a1;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
