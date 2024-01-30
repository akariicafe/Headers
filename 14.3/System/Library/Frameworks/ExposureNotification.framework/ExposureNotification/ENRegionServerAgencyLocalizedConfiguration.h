@class NSString, NSArray, NSLocale, ENRegion;

@interface ENRegionServerAgencyLocalizedConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) ENRegion *region;
@property (copy, nonatomic) NSString *agencyMessage;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *legalConsentText;
@property (copy, nonatomic) NSString *onboardingNotificationBody;
@property (copy, nonatomic) NSString *phaTelemetryOptInMessage;
@property (copy, nonatomic) NSString *regionName;
@property (copy, nonatomic) NSString *revokedNotificationBody;
@property (copy, nonatomic) NSString *revokedNotificationSubject;
@property (copy, nonatomic) NSString *symptomsOnsetDescription;
@property (copy, nonatomic) NSString *testVerificationIntroMessage;
@property (copy, nonatomic) NSString *traveledQuestionText;
@property (copy, nonatomic) NSArray *notificationConfigurations;

+ (BOOL)getLocalizedAgencyConfiguration:(id *)a0 region:(id)a1 fromDictionary:(id)a2 locale:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithRegion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)notificationConfigurationForName:(id)a0;

@end
