@class NSDateInterval, HKQuantity;

@interface HKQuantityWrapper : NSObject

@property (retain) HKQuantity *quantity;
@property (retain) NSDateInterval *dateInterval;

- (void).cxx_destruct;
- (id)initWithQuantity:(id)a0 dateInterval:(id)a1;

@end
