@class NSString, NSArray, NSDictionary;

@interface ENRegionServerExposureConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *classificationCriteria;
@property (readonly, copy, nonatomic) NSDictionary *exposureConfigurationValues;
@property (readonly, nonatomic) BOOL enableRecursiveReportType;
@property (readonly, nonatomic) BOOL matchingRestrictedToRegion;
@property (readonly, nonatomic) double privacyParameterInputCandenceInterval;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServerResponseDictionary:(id)a0;
- (id)classificationCriteriaForName:(id)a0;

@end
