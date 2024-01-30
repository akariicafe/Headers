@class NSDateInterval, HKQuantity;

@interface _HDStatisticsCollectionQueryPendingQuantity : NSObject

@property (readonly, copy, nonatomic) HKQuantity *quantity;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;

- (void).cxx_destruct;
- (id)initWithQuantity:(id)a0 dateInterval:(id)a1;

@end
