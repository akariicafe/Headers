@class NSNumber, NSMutableArray, HKQuantitySample;

@interface _HDStatisticsCollectionQueryPendingSeries : NSObject

@property (readonly, nonatomic) HKQuantitySample *series;
@property (readonly, copy, nonatomic) NSNumber *anchor;
@property (readonly, nonatomic) NSMutableArray *quantities;

- (void).cxx_destruct;
- (id)initWithSeries:(id)a0 anchor:(id)a1;
- (void)addQuantity:(id)a0 dateInterval:(id)a1;

@end
