@class NSString, PKPaymentPass;

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) PKPaymentPass *pass;

+ (id)requestWithPass:(id)a0;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;

@end
