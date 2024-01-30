@class PKPaymentPass, NSString, PKSecureElementApplet, PKPaymentApplication;

@interface PKPaymentAugmentBaseRequest : PKPaymentWebServiceRequest

@property (nonatomic) long long type;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) PKSecureElementApplet *applet;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *currencyCode;

- (id)endpointComponents;
- (id)initWithPaymentPass:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)bodyDictionary;

@end
