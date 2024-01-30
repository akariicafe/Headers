@class PKPaymentPass, CNContact, PKPaymentApplication, PKCurrencyAmount;

@interface PKPaymentCardDataItem : PKPaymentDataItem

@property (nonatomic) BOOL showPeerPaymentBalance;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) BOOL requiresBillingAddress;
@property (readonly, nonatomic) CNContact *billingAddress;
@property (readonly, nonatomic) BOOL shouldShowCardArt;

+ (long long)dataType;

- (id)errors;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)paymentContactFormatErrors;
- (long long)status;

@end
