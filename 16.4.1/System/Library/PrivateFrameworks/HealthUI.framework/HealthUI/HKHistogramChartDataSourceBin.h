@class NSArray, NSNumber, NSMutableArray;

@interface HKHistogramChartDataSourceBin : NSObject {
    NSMutableArray *_backingValues;
}

@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) NSArray *sortedValues;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSNumber *sumValue;
@property (readonly, nonatomic) NSNumber *averageValue;
@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;

- (void)addValue:(id)a0;
- (id)init;
- (id)initWithValues:(id)a0;
- (void).cxx_destruct;

@end
