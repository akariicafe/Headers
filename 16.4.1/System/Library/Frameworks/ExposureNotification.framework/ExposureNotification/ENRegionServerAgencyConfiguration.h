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
@property (readonly, copy, nonatomic) NSURL *agencyFAQWebsiteURL;
@property (copy, nonatomic) ENRegionServerAgencyLocalizedConfiguration *localizedConfiguration;
@property (readonly, copy, nonatomic) NSURL *revokedClassificationURL;
@property (readonly, copy, nonatomic) NSURL *verificationCodeLearnMoreURL;
@property (readonly, copy, nonatomic) NSURL *webReportURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0 locale:(id)a1;

@end
