@class NSNumber, NAIdentity, NSString;

@interface HFNumberRange : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (copy, nonatomic) NSNumber *maxValue;
@property (copy, nonatomic) NSNumber *midValue;
@property (copy, nonatomic) NSNumber *minValue;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSNumber *spanValue;
@property (readonly, nonatomic) struct { double x0; double x1; } floatRangeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rangeWithMaxValue:(id)a0 minValue:(id)a1;
+ (id)valueWithValue:(id)a0;
+ (id)rangeWithFloatRange:(struct { double x0; double x1; })a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithType:(unsigned long long)a0;
- (id)unionRange:(id)a0;
- (id)percentageValueForValue:(id)a0;
- (id)mapValue:(id)a0 fromRange:(id)a1;
- (id)intersectRange:(id)a0;

@end
