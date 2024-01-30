@class PKPaymentPass;

@interface PKAuxiliaryCapabilityWebServiceRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;

@end
