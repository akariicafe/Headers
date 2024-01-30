@class PKAddPaymentPassRequestConfiguration, NSString, PKPaymentCredential, NSData;

@interface PKPaymentEligibilityRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *passOwnershipToken;
@property (retain, nonatomic) PKPaymentCredential *paymentCredential;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) long long cardholderNameInputMethod;
@property (nonatomic) long long primaryAccountNumberInputMethod;
@property (nonatomic) long long expirationInputMethod;
@property (copy, nonatomic) NSString *issuerIdentifier;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (copy, nonatomic) NSString *hostApplicationVersion;
@property (copy, nonatomic) NSData *FPInfo;
@property (copy, nonatomic) NSString *encryptionVersion;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSData *encryptedCardData;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *wrappedKey;
@property (copy, nonatomic) NSString *nonce;
@property (readonly, nonatomic) long long source;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (readonly, nonatomic) PKAddPaymentPassRequestConfiguration *addPaymentPassRequestConfiguration;

+ (BOOL)supportsSecureCoding;

- (id)initWithSource:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 certChain:(id)a3 devSigned:(BOOL)a4 deviceData:(id)a5 webService:(id)a6 completion:(id /* block */)a7;
- (unsigned long long)_requestHTTPMethod;
- (id)initWithAddRequestConfiguration:(id)a0 addRequest:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateRequestForRedirect:(id)a0 overrides:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_updateRequestForRetry:(id)a0 retryFields:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)requiresNonce;
- (id)initWithPaymentCredential:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
