@class NSString, PKPaymentEligibilityResponse, PKPaymentRequirementsResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long credentialType;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountName;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSString *longDescription;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (nonatomic, getter=isDeletable) BOOL deletable;

+ (id)fakeRemoteCredentials;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isRemoteCredential;
- (BOOL)isLocalPassCredential;
- (BOOL)isPeerPaymentCredential;
- (BOOL)isContactlessProductCredential;
- (BOOL)isDigitalIssuanceProductCredential;
- (BOOL)isPurchasedProductCredential;
- (BOOL)isAccountCredential;
- (BOOL)isShareableCredential;
- (BOOL)isLocalAppletSubcredentialPassCredential;
- (BOOL)isIssuerProvisioningExtensionCredential;
- (id)localPassCredential;
- (id)peerPaymentCredential;
- (id)contactlessProductCredential;
- (id)digitalIssuanceProductCredential;
- (id)accountCredential;
- (id)purchasedProductCredential;
- (id)shareableCredential;
- (id)localAppletSubcredentialPassCredential;
- (id)issuerProvisioningExtensionCredential;
- (id)remoteCredential;
- (void)encodeWithCoder:(id)a0;

@end
