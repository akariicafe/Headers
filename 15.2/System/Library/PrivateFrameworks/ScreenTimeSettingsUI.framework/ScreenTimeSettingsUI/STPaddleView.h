@class NSDateFormatter, NSDateIntervalFormatter, UILabel, UIView, STUsageReportGraphDataPoint;

@interface STPaddleView : UIView

@property (readonly) UIView *backgroundView;
@property (readonly) UILabel *dayLabel;
@property (readonly) UILabel *dateTimeLabel;
@property (readonly) UILabel *usageLabel;
@property (readonly) NSDateIntervalFormatter *hourIntervalDateFormatter;
@property (readonly) NSDateFormatter *weekdayDateFormatter;
@property (readonly) NSDateFormatter *monthDateFormatter;
@property (retain, nonatomic) STUsageReportGraphDataPoint *dataPoint;

- (void).cxx_destruct;
- (id)init;

@end
