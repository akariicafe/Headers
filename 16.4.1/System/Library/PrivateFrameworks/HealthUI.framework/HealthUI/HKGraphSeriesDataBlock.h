@class NSArray, HKValueRange;

@interface HKGraphSeriesDataBlock : NSObject

@property (copy, nonatomic) NSArray *chartPoints;
@property (readonly, nonatomic) HKValueRange *yValueRange;

- (void).cxx_destruct;

@end
