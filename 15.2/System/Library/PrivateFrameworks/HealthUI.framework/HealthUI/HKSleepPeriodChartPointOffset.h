@class NSNumber;

@interface HKSleepPeriodChartPointOffset : NSObject

@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) BOOL continuation;

+ (id)chartPointOffsetWithValue:(id)a0 continuation:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 continuation:(BOOL)a1;

@end
