@class PKPaymentApplication, PKPaymentTransaction, PKPaymentPass;

@interface PKPendingPaymentTransaction : NSObject

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;

- (id)initWithTransaction:(id)a0 pass:(id)a1 paymentApplication:(id)a2;
- (void).cxx_destruct;

@end
