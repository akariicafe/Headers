@interface HKChartPointRangeBuilder : NSObject

@property (nonatomic) double uMax;
@property (nonatomic) double uMin;
@property (nonatomic) double vMax;
@property (nonatomic) double vMin;
@property (nonatomic) double maximumMax;
@property (nonatomic) double minimumMin;
@property (nonatomic) long long numChartPoints;

- (id)init;
- (id)suggestedValueRangeWithRounding:(BOOL)a0;
- (void)visitChartPoint:(id)a0;

@end
