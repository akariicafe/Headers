@class NSNumber;

@interface HMNumberRange : NSObject

@property (readonly, nonatomic) NSNumber *minValue;
@property (readonly, nonatomic) NSNumber *maxValue;

+ (id)numberRangeWithMaxValue:(id)a0;
+ (id)numberRangeWithMinValue:(id)a0;
+ (id)numberRangeWithMinValue:(id)a0 maxValue:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1;

@end
