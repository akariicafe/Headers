@class PKPayment, PKPaymentMethod, PKAccountServicePaymentMethod, PKServiceProviderPurchase, CNContact, PKShippingMethod, PKAuthorizedPeerPaymentQuote, PKApplePayTrustSignature, PKDisbursementVoucher;

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) id object;
@property (nonatomic) long long kind;
@property (readonly, nonatomic) CNContact *shippingContact;
@property (readonly, nonatomic) PKPaymentMethod *paymentMethod;
@property (readonly, nonatomic) PKShippingMethod *shippingMethod;
@property (readonly, nonatomic) PKPayment *payment;
@property (readonly, nonatomic) PKServiceProviderPurchase *purchase;
@property (readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (readonly, nonatomic) PKDisbursementVoucher *disbursementVoucher;
@property (readonly, nonatomic) PKApplePayTrustSignature *applePayTrustSignature;
@property (readonly, nonatomic) PKAccountServicePaymentMethod *accountServicePaymentMethod;

+ (id)paramWithCallbackKind:(long long)a0 object:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
