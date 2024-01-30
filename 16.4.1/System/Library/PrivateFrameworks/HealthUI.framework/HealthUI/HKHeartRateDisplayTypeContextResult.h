@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject

@property (nonatomic) long long context;
@property (retain, nonatomic) HKStatistics *statistics;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithContext:(long long)a0 statistics:(id)a1;

@end
