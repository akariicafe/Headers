@class NSString, PKPaymentEligibilityFIDOProfile, NSURL, NSData, NSDictionary, NSSet;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {
    NSSet *_enableRequirements;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long eligibilityStatus;
@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) unsigned long long deviceProvisioningDataExpected;
@property (readonly, copy, nonatomic) NSURL *termsURL;
@property (readonly, copy, nonatomic) NSString *termsID;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *region;
@property (readonly, copy, nonatomic) NSString *nonce;
@property (readonly, copy, nonatomic) NSURL *learnMoreURL;
@property (readonly, copy, nonatomic) PKPaymentEligibilityFIDOProfile *fidoProfile;
@property (readonly, copy, nonatomic) NSData *fidoChallenge;
@property (readonly, copy, nonatomic) NSDictionary *transactionKeyInformation;
@property (readonly, nonatomic) BOOL hasEnableRequirements;
@property (readonly, nonatomic) BOOL shouldGenerateFidoKey;
@property (readonly, nonatomic) BOOL shouldSignFidoChallenge;
@property (readonly, nonatomic) BOOL shouldGenerateISO18013EncryptionKey;
@property (readonly, nonatomic) BOOL shouldGenerateTransactionKey;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
