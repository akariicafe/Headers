@class NSString;

@interface CRPerformanceMetric : NSObject <NSCopying>

@property double M2;
@property double welfordMean;
@property (readonly) double variance;
@property (copy) NSString *displayName;
@property (copy) NSString *unit;
@property (copy) NSString *serializationKey;
@property double denominator;
@property double sumX;
@property unsigned long long pcMetricID;
@property long long numSamples;

+ (id)metricWithDisplayName:(id)a0 unit:(id)a1 denominator:(double)a2 serializationKey:(id)a3;
+ (id)pcMetricWithDisplayName:(id)a0 pcMetricID:(unsigned long long)a1 unit:(id)a2 denominator:(double)a3 serializationKey:(id)a4;

- (double)mean;
- (id)initWithDictionary:(id)a0 key:(id)a1;
- (double)stdDev;
- (void)addSample:(double)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayName:(id)a0 unit:(id)a1 denominator:(double)a2 serializationKey:(id)a3;
- (void)mergeMetric:(id)a0;
- (id)dictionary;

@end
