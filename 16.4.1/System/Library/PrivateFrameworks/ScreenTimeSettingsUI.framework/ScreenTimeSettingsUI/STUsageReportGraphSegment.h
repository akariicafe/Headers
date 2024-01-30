@class NSNumber, UIColor;

@interface STUsageReportGraphSegment : NSObject

@property (copy, nonatomic) NSNumber *amount;
@property (nonatomic) double amountAsPercentageOfDataPointTotal;
@property (retain, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (id)initWithAmount:(id)a0 amountAsPercentageOfDataPointTotal:(double)a1 color:(id)a2;

@end
