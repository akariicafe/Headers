@class PKServiceProviderPurchase, PKPayment, NSString, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPaymentToken, PKApplePayTrustSignature;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKPaymentToken *paymentToken;
@property (retain, nonatomic) PKPayment *payment;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic) NSString *purchaseTransactionIdentifier;
@property (readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (readonly, nonatomic) PKDisbursementVoucher *disbursementVoucher;
@property (readonly, nonatomic) PKApplePayTrustSignature *applePayTrustSignature;
@property (readonly, copy, nonatomic) NSString *installmentAuthorizationToken;

+ (id)paramWithDisbursementVoucher:(id)a0;
+ (id)paramWithAuthorizedPeerPaymentQuote:(id)a0;
+ (id)paramWithInstallmentAuthorizationToken:(id)a0;
+ (id)paramWithApplePayTrustSignature:(id)a0;
+ (id)paramWithPayment:(id)a0;
+ (id)paramWithPaymentToken:(id)a0;
+ (id)paramWithPurchase:(id)a0 purchaseTransactionIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
