@class AKAuthorizationRequest, NSString, NSArray, NSData, NSURL, NSMutableArray, NSNumber;

@interface ASCAuthorizationPresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _passkeyURLType;
@property (readonly, copy, nonatomic) NSString *appIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSMutableArray *loginChoices;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *destinationSiteForCrossSiteAssertion;
@property (readonly, nonatomic) unsigned long long requestTypes;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, nonatomic) BOOL isCombinedPublicKeyCredentialRegistrationRequest;
@property (nonatomic) BOOL isProxiedRequest;
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains;
@property (copy, nonatomic) NSData *proxiedIconData;
@property (copy, nonatomic) NSNumber *proxiedIconScale;
@property (copy, nonatomic) NSString *proxiedOriginDeviceName;
@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest;
@property (readonly, copy, nonatomic) NSString *platformUserVerificationPreference;
@property (readonly, nonatomic) BOOL hasExternalPasswords;
@property (readonly, nonatomic) NSArray *localAccountLoginChoices;
@property (readonly, nonatomic) NSURL *cableAuthenticatorURL;
@property (readonly, nonatomic) BOOL isCABLEAuthenticatorRequest;
@property (readonly, nonatomic) BOOL shouldRequireCABLEAuthenticatorConsent;
@property (readonly, nonatomic) BOOL shouldAllowSecurityKeysFromCABLEView;
@property (readonly, nonatomic) NSString *overrideHeader;
@property (readonly, nonatomic) NSString *overrideTitle;
@property (readonly, nonatomic) NSString *overrideSubtitle;
@property (readonly, nonatomic) NSString *overrideNoCredentialsErrorTitle;
@property (readonly, nonatomic) NSString *overrideNoCredentialsErrorMessage;
@property (readonly, nonatomic) BOOL useAlternativeSecurityKeysIcon;
@property (readonly, nonatomic) BOOL shouldUseFallbackPasskeyUI;
@property (readonly, nonatomic) NSString *windowSceneIdentifier;
@property (readonly, copy, nonatomic) NSArray *allowedCredentialsForSecurityKeyAssertion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addLoginChoice:(id)a0;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1;
- (void)_getPrimaryLoginChoices:(id *)a0 otherLoginChoices:(id *)a1;
- (void)updateLoginChoices:(id)a0;
- (id)_initWithCABLEAuthenticatorURL:(id)a0 shouldRequireConsent:(BOOL)a1 passkeyURLType:(long long)a2;
- (id)_passkeyLoginChoices;
- (BOOL)_passwordLoginChoice:(id)a0 hasSameHighLevelDomainAndUsernameAsPasskeyLoginChoice:(id)a1;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1 shouldUseRelyingPartyForServiceName:(BOOL)a2;

@end
