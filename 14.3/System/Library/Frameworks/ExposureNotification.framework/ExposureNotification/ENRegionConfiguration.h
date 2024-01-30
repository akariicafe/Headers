@class ENRegion, ENRegionUserConsent;

@interface ENRegionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long enVersion;
@property (retain, nonatomic) ENRegion *region;
@property (nonatomic) double creationDateTimeInterval;
@property (nonatomic) double lastConfigurationUpdateTimeInterval;
@property (retain, nonatomic) ENRegionUserConsent *userConsent;
@property (nonatomic) BOOL everStartedOnboarding;
@property (nonatomic) long long travelerModeEnabled;
@property (nonatomic) unsigned long long enRampMode;
@property (readonly, nonatomic) long long differentialPrivacyConsent;
@property (readonly, nonatomic) double differentialPrivacyConsentTimestamp;
@property (readonly, nonatomic) long long consent;
@property (readonly, nonatomic) double consentTimestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 region:(id)a1;
- (id)updatedWithConfiguration:(id)a0;

@end
