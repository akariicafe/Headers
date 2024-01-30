@class NSString, NSDate;

@interface PLMetric : NSObject

@property (retain) NSString *metricKey;
@property short metricType;
@property (retain) NSDate *lastOnTimestamp;
@property int metricValue;
@property unsigned long long bitPosition;
@property int numBits;
@property int defaultValue;

+ (unsigned long long)binBatteryTemperature:(int)a0;
+ (unsigned long long)binDurationValue:(int)a0;

- (id)initWithKey:(id)a0 withPosition:(unsigned long long)a1 withNumBits:(int)a2 withDefault:(int)a3 andType:(short)a4;
- (void)constructMetricValueForInterval:(id)a0;
- (void)resetMetric;
- (void)updateMetricWithTimestamp:(id)a0 forEvent:(short)a1 withValue:(int)a2;
- (void).cxx_destruct;
- (unsigned long long)getBinnedMetricValue;

@end
