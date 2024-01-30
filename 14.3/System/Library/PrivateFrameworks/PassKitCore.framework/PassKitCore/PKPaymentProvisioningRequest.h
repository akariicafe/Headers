@class PKPaymentDeviceProvisioningData, NSString, NSArray, NSData, PKDSPContext, NSNumber, PKPaymentEligibilityResponse;

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest {
    NSNumber *_primaryJSBLSequenceCounter;
    NSArray *_certChain;
    BOOL _devSigned;
    PKPaymentDeviceProvisioningData *_deviceData;
}

@property (nonatomic) long long style;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (readonly, nonatomic, getter=isDeviceProvisioningDataExpected) BOOL deviceProvisioningDataExpected;
@property (nonatomic) BOOL disableDeviceScore;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *cardSecurityCode;
@property (copy, nonatomic) NSData *activationData;
@property (copy, nonatomic) PKDSPContext *context;
@property (copy, nonatomic) NSData *cryptogram;
@property (copy, nonatomic) NSData *challengeResponse;
@property (copy, nonatomic) NSString *referrerIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 certChain:(id)a3 devSigned:(BOOL)a4 deviceData:(id)a5 webService:(id)a6 completion:(id /* block */)a7;
- (id)initWithEligibilityResponse:(id)a0;
- (void)_requestBodyWithWebService:(id)a0 completion:(id /* block */)a1;
- (void)_deviceScoreWithCompletion:(id /* block */)a0;
- (void)_updateContextUsingWebService:(id)a0 completion:(id /* block */)a1;
- (id)initWithEligibilityResponse:(id)a0 addRequestConfiguration:(id)a1 addRequest:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)_updateRequestForRedirect:(id)a0 overrides:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_updateRequestForRetry:(id)a0 retryFields:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (id)initWithEligibilityResponse:(id)a0 style:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
