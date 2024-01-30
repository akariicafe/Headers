@class NSNumber, HFNumberRange;

@interface HFRangeControlItemValue : NSObject

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *targetValue;
@property (readonly, nonatomic) HFNumberRange *numberRange;

+ (id)thresholdValueWithMinimumValue:(id)a0 maximumValue:(id)a1;
+ (id)targetValueWithValue:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
