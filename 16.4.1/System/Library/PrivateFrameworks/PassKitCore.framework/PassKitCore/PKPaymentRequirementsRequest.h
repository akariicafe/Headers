@class NSString, PKPaymentCredential, NSData, PKDSPContext;

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *passOwnershipToken;
@property (retain, nonatomic) PKPaymentCredential *paymentCredential;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (copy, nonatomic) PKDSPContext *context;
@property (copy, nonatomic) NSData *cryptogram;
@property (copy, nonatomic) NSData *challengeResponse;

- (void).cxx_destruct;
- (id)_cardDictionary;
- (id)_archivedDataForEncryptedDataDictionary:(id)a0;
- (void)_cardDictionaryForDeviceData:(id)a0 inWebService:(id)a1 includingDeviceScore:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)_deviceScoreUsingWebService:(id)a0 withCompletion:(id /* block */)a1;
- (void)_encryptedDataWithDeviceData:(id)a0 certChain:(id)a1 devSigned:(BOOL)a2 includeDeviceScore:(BOOL)a3 inWebService:(id)a4 withCompletion:(id /* block */)a5;
- (void)_updateContextUsingWebService:(id)a0 completion:(id /* block */)a1;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 certChain:(id)a3 devSigned:(BOOL)a4 deviceData:(id)a5 webService:(id)a6 completion:(id /* block */)a7;
- (id)initWithCardholderName:(id)a0 primaryAccountNumber:(id)a1;
- (id)initWithPaymentCredential:(id)a0;

@end
