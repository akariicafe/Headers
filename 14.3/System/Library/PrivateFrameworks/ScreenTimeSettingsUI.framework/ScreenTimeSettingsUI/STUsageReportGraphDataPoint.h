@class UIColor, NSString, NSDateInterval, NSArray, NSDate, NSNumber;

@interface STUsageReportGraphDataPoint : NSObject

@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSNumber *total;
@property (nonatomic) double totalAsPercentageOfMax;
@property (copy, nonatomic) NSString *indicatorImageName;
@property (copy) UIColor *indicatorImageColor;
@property (copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSDate *date;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTimePeriod:(unsigned long long)a0 itemType:(unsigned long long)a1 dateInterval:(id)a2 total:(id)a3 totalAsPercentageOfMax:(double)a4 segments:(id)a5;

@end
