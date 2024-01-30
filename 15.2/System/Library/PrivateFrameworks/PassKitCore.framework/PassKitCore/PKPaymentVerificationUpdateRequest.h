@class NSString, PKVerificationChannel, PKPaymentPass;

@interface PKPaymentVerificationUpdateRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKVerificationChannel *channel;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 deviceData:(id)a3 webService:(id)a4 certChain:(id)a5 devSigned:(BOOL)a6 completion:(id /* block */)a7;

@end
