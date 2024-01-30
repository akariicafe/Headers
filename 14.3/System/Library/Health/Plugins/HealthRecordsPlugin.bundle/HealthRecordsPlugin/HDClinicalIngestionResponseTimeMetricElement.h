@class HDClinicalIngestionAnalyticsMetricKey, NSString;

@interface HDClinicalIngestionResponseTimeMetricElement : NSObject <HDClinicalIngestionAnalyticsMetricElement>

@property (readonly, copy, nonatomic) HDClinicalIngestionAnalyticsMetricKey *keyElement;
@property (readonly, nonatomic) unsigned long long responseTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricWithSourceURL:(id)a0 baseURL:(id)a1 timeInterval:(double)a2;
+ (id)metricWithSourceURL:(id)a0 resourceType:(id)a1 interactionType:(long long)a2 timeInterval:(double)a3;

- (void).cxx_destruct;
- (id)initWithKeyElement:(id)a0 responseTime:(unsigned long long)a1;

@end
