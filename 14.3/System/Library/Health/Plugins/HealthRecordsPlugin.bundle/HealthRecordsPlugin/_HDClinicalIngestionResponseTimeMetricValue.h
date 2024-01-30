@class NSArray, NSMutableArray, NSNumber;

@interface _HDClinicalIngestionResponseTimeMetricValue : NSObject

@property (retain, nonatomic) NSMutableArray *mutableResponseTimes;
@property (readonly, nonatomic) NSArray *responseTimes;
@property (readonly, copy, nonatomic) NSNumber *min;
@property (readonly, copy, nonatomic) NSNumber *median;
@property (readonly, copy, nonatomic) NSNumber *max;
@property (readonly, copy, nonatomic) NSNumber *analyticsString;

- (id)init;
- (void).cxx_destruct;
- (void)_calculate;
- (id)debugDescription;
- (id)initWithResponseTime:(unsigned long long)a0;
- (void)addResponseTime:(unsigned long long)a0;
- (void)addResponseTimesFromMetricValue:(id)a0;

@end
