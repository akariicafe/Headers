@class PKFeatureApplicationDeclineDetails, NSString, PKFeatureApplicationOfferDetails, NSDate, NSURL;

@interface PKFeatureApplication : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long feature;
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
@property (readonly, nonatomic) BOOL isActive;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasSufficientOTBForInstallmentConfiguration:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
