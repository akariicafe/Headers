@class NSNumber, NSArray;

@interface STUsageReportGraphDataSet : NSObject

@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSNumber *max;
@property (copy, nonatomic) NSNumber *average;
@property (nonatomic) double averageAsPercentageOfMax;
@property (copy, nonatomic) NSArray *dataPoints;

- (void).cxx_destruct;
- (id)initEmptyDataSetWithTimePeriod:(unsigned long long)a0 referenceDate:(id)a1;
- (id)initWithTimePeriod:(unsigned long long)a0 itemType:(unsigned long long)a1 total:(id)a2 max:(id)a3 average:(id)a4 averageAsPercentageOfMax:(double)a5 dataPoints:(id)a6;

@end
