@class NSDateFormatter, NSDate;

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDate *startDate;

- (void).cxx_destruct;
- (id)stringForLocation:(id)a0;
- (id)initWithStartDate:(id)a0;

@end
