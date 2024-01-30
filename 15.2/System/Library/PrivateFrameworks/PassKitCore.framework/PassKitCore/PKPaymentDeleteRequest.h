@class PKPaymentPass;

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;

- (id)initWithPaymentPass:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
