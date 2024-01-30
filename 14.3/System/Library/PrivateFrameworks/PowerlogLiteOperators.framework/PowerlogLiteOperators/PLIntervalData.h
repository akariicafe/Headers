@class NSDateFormatter, NSMutableDictionary, NSDate;

@interface PLIntervalData : NSObject

@property (retain) NSMutableDictionary *metrics;
@property (retain) NSDate *currentInterval;
@property unsigned long long aggdValue;
@property (retain) NSDateFormatter *dateFormat;
@property int intervalDuration;

- (void)resetMetrics;
- (id)init;
- (void).cxx_destruct;
- (void)updateMetric:(id)a0 withTimestamp:(id)a1 forEvent:(short)a2 withValue:(int)a3;
- (void)addMetric:(id)a0;
- (void)submitIntervalData;

@end
