@class NSNumber, HFNumberRange;

@interface HFRangeControlItemValue : NSObject

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *targetValue;
@property (readonly, nonatomic) HFNumberRange *numberRange;

+ (id)targetValueWithValue:(id)a0;
+ (id)thresholdValueWithMinimumValue:(id)a0 maximumValue:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
