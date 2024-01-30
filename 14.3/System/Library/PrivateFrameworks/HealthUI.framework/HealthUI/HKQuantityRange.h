@class HKQuantity;

@interface HKQuantityRange : NSObject

@property (readonly, nonatomic) HKQuantity *minimum;
@property (readonly, nonatomic) HKQuantity *maximum;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMinimum:(id)a0 maximum:(id)a1;
- (BOOL)containsQuantityInclusive:(id)a0;

@end
