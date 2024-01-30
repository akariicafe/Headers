@class NSDateFormatter, NSMutableDictionary, NSDate;

@interface PLIntervalData : NSObject

@property (retain) NSMutableDictionary *metrics;
@property (retain) NSDate *currentInterval;
@property unsigned long long aggdValue;
@property (retain) NSDateFormatter *dateFormat;
@property int intervalDuration;

- (void)submitToCA:(id)a0;
- (void)addMetric:(id)a0;
- (void)updateMetric:(id)a0 withTimestamp:(id)a1 forEvent:(short)a2 withValue:(int)a3;
- (id)init;
- (void)submitIntervalData;
- (void)resetMetrics;
- (void).cxx_destruct;

@end
