@class AKAuthorizationRequest, NSString, NSArray, NSData, NSMutableArray, NSNumber;

@interface ASCAuthorizationPresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSMutableArray *loginChoices;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) unsigned long long requestTypes;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, nonatomic) BOOL isCombinedPublicKeyCredentialRegistrationRequest;
@property (nonatomic) BOOL isProxiedRequest;
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains;
@property (copy, nonatomic) NSData *proxiedIconData;
@property (copy, nonatomic) NSNumber *proxiedIconScale;
@property (copy, nonatomic) NSString *proxiedOriginDeviceName;
@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest;
@property (readonly, nonatomic) BOOL shouldPlatformCredentialsRequireUserVerification;
@property (readonly, nonatomic) BOOL hasExternalPasswords;

- (void)encodeWithCoder:(id)a0;
- (void)addLoginChoice:(id)a0;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateLoginChoices:(id)a0;

@end
