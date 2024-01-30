@class NSString, NSDate;

@interface PLMetric : NSObject

@property (retain) NSString *metricKey;
@property short metricType;
@property (retain) NSDate *lastOnTimestamp;
@property int metricValue;
@property unsigned long long bitPosition;
@property int numBits;
@property int defaultValue;

+ (unsigned long long)binDurationValue:(int)a0;
+ (unsigned long long)binBatteryTemperature:(int)a0;

- (void).cxx_destruct;
- (void)updateMetricWithTimestamp:(id)a0 forEvent:(short)a1 withValue:(int)a2;
- (unsigned long long)constructMetricValueForInterval:(id)a0;
- (unsigned long long)getBinnedMetricValue;
- (id)initWithKey:(id)a0 withPosition:(unsigned long long)a1 withNumBits:(int)a2 withDefault:(int)a3 andType:(short)a4;
- (void)resetMetric;

@end
