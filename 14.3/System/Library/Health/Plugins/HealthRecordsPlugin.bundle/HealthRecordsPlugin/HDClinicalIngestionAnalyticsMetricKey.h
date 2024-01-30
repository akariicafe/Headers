@class NSString, NSNumber;

@interface HDClinicalIngestionAnalyticsMetricKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *reportedHost;
@property (readonly, copy, nonatomic) NSString *resourceType;
@property (readonly, nonatomic) long long interactionType;
@property (readonly, copy, nonatomic) NSNumber *analyticsString;

+ (id)reportedHostFromSourceURL:(id)a0 resourceType:(id)a1;
+ (id)analyticsMetricKeyWithResourceURL:(id)a0 baseURL:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithReportedHost:(id)a0 resourceType:(id)a1 interactionType:(long long)a2;

@end
