@class NSString, NSMutableDictionary;

@interface RTMetric : NSObject <RTMetricProtocol>

@property (nonatomic) BOOL loggingEnabled;
@property (nonatomic) BOOL submitted;
@property (readonly, nonatomic) NSMutableDictionary *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricName;
+ (struct { char *x0; })event;
+ (id)binForNumber:(id)a0 bins:(id)a1;
+ (id)supportedMetricKeys;
+ (id)binsFromStart:(id)a0 toEnd:(id)a1 gap:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)submitMetricsWithError:(id *)a0;
- (BOOL)setAllMetrics:(id)a0 error:(id *)a1;
- (id)initWithLoggingEnabled:(BOOL)a0;

@end
