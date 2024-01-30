@class NSString, NSDictionary;

@interface CRPerformanceStatistics : NSObject

@property (retain) NSString *name;
@property (readonly) BOOL measureRecentPeak;
@property (retain) NSDictionary *metrics;

+ (BOOL)_canEnableRecentPeakReset;

- (void).cxx_destruct;
- (id)dictionary;
- (void)addStatistics:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithName:(id)a0;
- (void)measureBlock:(id /* block */)a0;
- (id)initWithName:(id)a0 measureRecentPeak:(BOOL)a1;
- (void)_addMetricWithKey:(id)a0 name:(id)a1 unit:(id)a2 denominator:(double)a3 pcMetricID:(unsigned long long)a4;
- (void)_evaluateEndedSession:(struct pc_session { } *)a0 duration:(double)a1;
- (id)initWithStatistics:(id)a0;

@end
