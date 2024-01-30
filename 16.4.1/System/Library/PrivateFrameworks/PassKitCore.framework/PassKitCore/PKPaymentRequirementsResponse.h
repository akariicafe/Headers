@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSArray *requiredPaymentSetupFields;
@property (readonly, copy, nonatomic) NSString *productIdentifier;
@property (readonly, copy, nonatomic) NSArray *possibleProducts;
@property (readonly, copy, nonatomic) NSURL *learnMoreURL;
@property (readonly, copy, nonatomic) NSString *nonce;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNoRequirements;
- (id)initWithProduct:(id)a0;
- (id)initWithProvisioningMethodMetadata:(id)a0;
- (id)initWithRemoteCredential:(id)a0;

@end
