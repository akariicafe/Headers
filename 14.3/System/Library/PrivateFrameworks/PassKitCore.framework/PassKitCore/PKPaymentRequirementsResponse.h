@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSArray *requiredPaymentSetupFields;
@property (readonly, copy, nonatomic) NSString *productIdentifier;
@property (readonly, copy, nonatomic) NSArray *possibleProducts;
@property (readonly, copy, nonatomic) NSURL *learnMoreURL;
@property (readonly, copy, nonatomic) NSString *nonce;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithProduct:(id)a0;
- (id)initWithProvisioningMethodMetadata:(id)a0;
- (id)initWithNoRequirements;
- (id)initWithRemoteCredential:(id)a0;

@end
