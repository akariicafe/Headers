@class NSString, PKPaymentPass;

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) PKPaymentPass *pass;

+ (id)requestWithPass:(id)a0;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
