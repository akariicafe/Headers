@class PKPaymentTransaction, PKPaymentPass;

@interface PKReprocessMerchantActivity : UIActivity {
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
}

- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithTransaction:(id)a0 paymentPass:(id)a1;

@end
