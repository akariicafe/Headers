@class PKPaymentPass;

@interface PKPaymentDeprovisionRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;

- (id)initWithPaymentPass:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;

@end
