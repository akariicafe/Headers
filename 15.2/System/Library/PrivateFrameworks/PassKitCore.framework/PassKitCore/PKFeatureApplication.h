@class PKFeatureApplicationDeclineDetails, NSString, NSData, PKFeatureApplicationOfferDetails, NSDate, NSURL, PKFeatureApplicationInvitationDetails;

@interface PKFeatureApplication : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long featureProduct;
@property (nonatomic) long long applicationType;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (nonatomic) unsigned long long applicationState;
@property (nonatomic) unsigned long long applicationStateReason;
@property (retain, nonatomic) PKFeatureApplicationOfferDetails *applicationOfferDetails;
@property (retain, nonatomic) PKFeatureApplicationDeclineDetails *declineDetails;
@property (copy, nonatomic) NSString *applicationTermsIdentifier;
@property (nonatomic) BOOL applicationStateDirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSURL *applicationBaseURL;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSString *coreIDVServiceProviderName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) PKFeatureApplicationInvitationDetails *invitationDetails;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL supportsAuthentication;
@property (readonly, nonatomic) NSData *authenticationSignaturePayload;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasSufficientOTBForInstallmentConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
