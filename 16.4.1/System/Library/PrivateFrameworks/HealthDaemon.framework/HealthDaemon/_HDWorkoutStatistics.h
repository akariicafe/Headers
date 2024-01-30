@class HKQuantityType, HKQuantity;

@interface _HDWorkoutStatistics : NSObject

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, copy, nonatomic) HKQuantity *quantity;
@property (readonly, copy, nonatomic) HKQuantity *min;
@property (readonly, copy, nonatomic) HKQuantity *max;

- (void).cxx_destruct;
- (id)initWithQuantityType:(id)a0 quantity:(id)a1 min:(id)a2 max:(id)a3;

@end
