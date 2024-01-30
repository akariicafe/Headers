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
@property (readonly, nonatomic) BOOL supportsSuperEasyProvisioning;

+ (id)fakeRemoteCredentials;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)accountCredential;
- (id)appleBalanceCredential;
- (long long)compare:(id)a0 withBackedUpDefaultPaymentPassSerialNumber:(id)a1;
- (id)contactlessProductCredential;
- (id)detailDescription;
- (id)digitalIssuanceProductCredential;
- (id)homeKeyCredential;
- (id)identityCredential;
- (BOOL)isAccountCredential;
- (BOOL)isAppleBalanceCredential;
- (BOOL)isContactlessProductCredential;
- (BOOL)isDigitalIssuanceProductCredential;
- (BOOL)isHomeKeyCredential;
- (BOOL)isIdentityCredential;
- (BOOL)isIssuerProvisioningExtensionCredential;
- (BOOL)isLocalAppletSubcredentialPassCredential;
- (BOOL)isLocalPassCredential;
- (BOOL)isPeerPaymentCredential;
- (BOOL)isPurchasedProductCredential;
- (BOOL)isRemoteCredential;
- (BOOL)isSafariCredential;
- (BOOL)isShareableCredential;
- (id)issuerProvisioningExtensionCredential;
- (id)localAppletSubcredentialPassCredential;
- (id)localPassCredential;
- (id)peerPaymentCredential;
- (id)purchasedProductCredential;
- (id)remoteCredential;
- (id)safariCredential;
- (id)setupProductIdentifier;
- (id)shareableCredential;
- (id)underlyingPaymentPass;

@end
