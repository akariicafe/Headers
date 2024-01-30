@class NSString, NSArray, NSDictionary;

@interface ENRegionServerExposureConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *classificationCriteria;
@property (readonly, copy, nonatomic) NSDictionary *exposureConfigurationValues;
@property (readonly, nonatomic) BOOL enableRecursiveReportType;
@property (readonly, nonatomic) BOOL matchingRestrictedToRegion;
@property (readonly, nonatomic) double privacyParameterInputCandenceInterval;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)classificationCriteriaForName:(id)a0;

@end
