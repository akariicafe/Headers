@class PKPaymentPass, NSString, PKWrappedPayment, PKPaymentApplication, NSData;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest

@property (readonly, nonatomic) NSString *endpointName;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) PKWrappedPayment *wrappedPayment;
@property (copy, nonatomic) NSData *applicationData;
@property (nonatomic) long long cryptogramType;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 rewrapData:(id)a2 appleAccountInformation:(id)a3;

@end
