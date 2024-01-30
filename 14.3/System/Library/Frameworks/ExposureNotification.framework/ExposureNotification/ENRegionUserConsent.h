@class NSString;

@interface ENRegionUserConsent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double consentTimestamp;
@property (nonatomic) double differentialPrivacyConsentTimestamp;
@property (nonatomic) long long consent;
@property (retain, nonatomic) NSString *consentText;
@property (retain, nonatomic) NSString *consentVersion;
@property (nonatomic) long long differentialPrivacyConsent;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConsentVersion:(id)a0;
- (id)updatedConsent:(id)a0;

@end
