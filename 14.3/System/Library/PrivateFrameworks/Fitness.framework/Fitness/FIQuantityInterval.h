@class HKQuantity, FIIntervalDefinition, NSDate, HKQuantityType;

@interface FIQuantityInterval : NSObject

@property (readonly, nonatomic) FIIntervalDefinition *definition;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) HKQuantityType *trackedQuantityType;
@property (readonly, nonatomic) HKQuantity *threshold;

- (void).cxx_destruct;
- (id)initWithIntervalDefinition:(id)a0 activityType:(unsigned long long)a1 startDate:(id)a2;

@end
