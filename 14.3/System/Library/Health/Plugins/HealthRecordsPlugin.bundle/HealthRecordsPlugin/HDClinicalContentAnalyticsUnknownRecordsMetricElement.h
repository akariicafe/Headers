@class NSString;

@interface HDClinicalContentAnalyticsUnknownRecordsMetricElement : NSObject <NSCopying>

@property (readonly, nonatomic) long long extractionRulesVersion;
@property (readonly, copy, nonatomic) NSString *reportedHost;
@property (readonly, copy, nonatomic) NSString *resourceType;
@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) long long failureCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithExtractionRulesVersion:(long long)a0 reportedHost:(id)a1 resourceType:(id)a2 propertyName:(id)a3 resourceKeyPath:(id)a4 failureCode:(long long)a5;
- (id)payloadForCoreAnalyticsWithEventCount:(id)a0;

@end
