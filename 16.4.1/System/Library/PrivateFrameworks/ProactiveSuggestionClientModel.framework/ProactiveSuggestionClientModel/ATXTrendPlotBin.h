@class NSDate;

@interface ATXTrendPlotBin : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) ATXTrendPlotBin *next;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0;

@end
