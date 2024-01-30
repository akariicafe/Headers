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

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToCredential:(id)a0;
- (unsigned long long)hash;
- (id)remoteCredential;
- (BOOL)isRemoteCredential;
- (BOOL)isLocalPassCredential;
- (BOOL)isPeerPaymentCredential;
- (BOOL)isContactlessProductCredential;
- (BOOL)isDigitalIssuanceProductCredential;
- (BOOL)isPurchasedProductCredential;
- (BOOL)isAccountCredential;
- (BOOL)isIdentityCredential;
- (BOOL)isShareableCredential;
- (BOOL)isLocalAppletSubcredentialPassCredential;
- (BOOL)isIssuerProvisioningExtensionCredential;
- (BOOL)isHomeKeyCredential;
- (id)localPassCredential;
- (id)peerPaymentCredential;
- (id)contactlessProductCredential;
- (id)digitalIssuanceProductCredential;
- (id)purchasedProductCredential;
- (id)accountCredential;
- (id)shareableCredential;
- (id)identityCredential;
- (id)homeKeyCredential;
- (id)localAppletSubcredentialPassCredential;
- (id)issuerProvisioningExtensionCredential;

@end
