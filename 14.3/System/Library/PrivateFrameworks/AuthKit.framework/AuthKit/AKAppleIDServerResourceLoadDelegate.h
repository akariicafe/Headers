@class AKAppleIDAuthenticationContext, NSString, NSArray, NSMutableDictionary, AKAttestationData, AKDevice, AKAnisetteProvisioningController, NSNumber, AKAnisetteData;
@protocol AKAnisetteServiceProtocol;

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding> {
    AKAnisetteProvisioningController *_proxiedProvisioningController;
    NSMutableDictionary *_continuationHeaders;
    AKAppleIDAuthenticationContext *_context;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldSendEphemeralAuthHeader;
@property (nonatomic) BOOL shouldSendICSCIntentHeader;
@property (nonatomic) BOOL shouldSendLocalUserHasAppleIDLoginHeader;
@property (nonatomic) BOOL shouldSendPhoneNumber;
@property (nonatomic) BOOL shouldOfferSecurityUpgrade;
@property (copy, nonatomic) NSString *phoneNumberCertificate;
@property (copy, nonatomic) NSArray *phoneInformation;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic) NSArray *loggedInServices;
@property (copy, nonatomic) NSString *passwordResetToken;
@property (copy, nonatomic) NSString *continuationToken;
@property (copy, nonatomic) NSString *heartbeatToken;
@property (copy, nonatomic) NSString *identityToken;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *initialURLRequestKey;
@property (copy, nonatomic) NSString *proxyAppName;
@property (copy, nonatomic) NSString *clientAppName;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (retain, nonatomic) NSNumber *hasEmptyPasswordOverride;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *followupItems;
@property (copy, nonatomic) NSString *dataCenterIdentifier;
@property (retain, nonatomic) AKDevice *proxiedDevice;
@property (retain, nonatomic) NSString *proxiedAltDSID;
@property (retain, nonatomic) NSString *proxiedIdentityToken;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;
@property (retain, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData;
@property (retain, nonatomic) AKAttestationData *proxiedDeviceAttestationData;
@property (nonatomic) BOOL shouldSendAbsintheHeader;
@property (nonatomic) BOOL shouldSendSigningHeaders;
@property (copy, nonatomic) NSString *serviceToken;

+ (unsigned long long)signalFromServerResponse:(id)a0;
+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)processResponse:(id)a0;
- (id)initWithAltDSID:(id)a0 identityToken:(id)a1;
- (void)_signRequest:(id)a0;
- (id)signingController;
- (id)_proxiedProvisioningController;
- (void)signRequestWithCommonHeaders:(id)a0;
- (void)_signWithProxiedDeviceHeaders:(id)a0;
- (id)_retrieveContinuationHeaders;
- (void)_signWithFeatureOptInHeaders:(id)a0;
- (void)_harvestContinuationHeadersFromHeaders:(id)a0;
- (BOOL)isResponseActionable:(id)a0;
- (void)signRequest:(id)a0;
- (BOOL)isResponseFinal:(id)a0;
- (BOOL)isAuthenticationRequired:(id)a0;
- (BOOL)isResponseFinalForHSA2ServerFlow:(id)a0;
- (void)decorateWithContext:(id)a0;
- (void)updateWithAuthResults:(id)a0;
- (void)signRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;

@end
