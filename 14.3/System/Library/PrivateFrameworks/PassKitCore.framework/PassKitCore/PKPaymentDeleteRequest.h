@class PKPaymentPass;

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithPaymentPass:(id)a0;

@end
