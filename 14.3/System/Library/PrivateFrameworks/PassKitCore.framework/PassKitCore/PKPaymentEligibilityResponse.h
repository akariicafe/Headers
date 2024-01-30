@class NSString, NSURL;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse

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

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
