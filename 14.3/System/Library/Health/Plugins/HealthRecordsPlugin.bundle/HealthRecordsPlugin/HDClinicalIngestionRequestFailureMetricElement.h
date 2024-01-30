@class HDClinicalIngestionAnalyticsMetricKey, NSString, NSDate;

@interface HDClinicalIngestionRequestFailureMetricElement : HDClinicalIngestionAnalyticsMetricKey <HDClinicalIngestionAnalyticsMetricElement>

@property (readonly, copy, nonatomic) HDClinicalIngestionAnalyticsMetricKey *keyElement;
@property (readonly, nonatomic) unsigned long long statusCode;
@property (readonly, copy, nonatomic) NSDate *observedDate;
@property (readonly, copy, nonatomic) NSString *reportableObservedDateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricWithSourceURL:(id)a0 baseURL:(id)a1 statusCode:(unsigned long long)a2;
+ (id)metricWithSourceURL:(id)a0 resourceType:(id)a1 interactionType:(long long)a2 statusCode:(unsigned long long)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)analyticsString;
- (id)initWithReportedHost:(id)a0 resourceType:(id)a1 interactionType:(long long)a2 statusCode:(unsigned long long)a3 observedDate:(id)a4;

@end
