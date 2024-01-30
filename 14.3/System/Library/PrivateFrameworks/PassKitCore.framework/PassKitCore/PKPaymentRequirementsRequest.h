@class NSString, PKPaymentCredential;

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *passOwnershipToken;
@property (retain, nonatomic) PKPaymentCredential *paymentCredential;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *referrerIdentifier;

- (void).cxx_destruct;
- (id)_cardDictionary;
- (id)initWithCardholderName:(id)a0 primaryAccountNumber:(id)a1;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 certChain:(id)a3 devSigned:(BOOL)a4 deviceData:(id)a5 webService:(id)a6 completion:(id /* block */)a7;
- (id)initWithPaymentCredential:(id)a0;

@end
