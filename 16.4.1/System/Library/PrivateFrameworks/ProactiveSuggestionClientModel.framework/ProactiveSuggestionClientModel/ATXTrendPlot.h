@class NSArray, NSDate;

@interface ATXTrendPlot : NSObject

@property (readonly, nonatomic) long long granularity;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *bins;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_binIndexForDate:(id)a0;
- (id)_dateComponentsForGranularity:(long long)a0;
- (id)binAtDate:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 granularity:(long long)a2 binInitialDataProvider:(id /* block */)a3;
- (BOOL)isEqualToATXTrendPlot:(id)a0;

@end
