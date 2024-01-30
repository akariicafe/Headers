@class ENRegionServerAgencyLocalizedConfiguration, NSArray, NSString, NSURL, ENRegion;

@interface ENRegionServerAgencyConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ENRegion *region;
@property (copy, nonatomic) NSArray *agencyColor;
@property (copy, nonatomic) NSArray *agencyHeaderTextColor;
@property (copy, nonatomic) NSString *agencyImageURL;
@property (readonly, copy, nonatomic) NSString *agencyDisplayName;
@property (nonatomic) unsigned long long agencyHeaderStyle;
@property (readonly, copy, nonatomic) NSURL *agencyWebsiteURL;
@property (copy, nonatomic) ENRegionServerAgencyLocalizedConfiguration *localizedConfiguration;
@property (copy, nonatomic) NSString *legalConsentVersion;
@property (readonly, copy, nonatomic) NSURL *revokedClassificationURL;
@property (readonly, copy, nonatomic) NSURL *verificationCodeLearnMoreURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithRegion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0 locale:(id)a1;

@end
