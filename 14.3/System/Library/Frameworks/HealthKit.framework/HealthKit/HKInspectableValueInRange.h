@class HKInspectableValue, NSString, HKInspectableValueCollection, NSDate;

@interface HKInspectableValueInRange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKInspectableValue *lowValue;
@property (readonly, nonatomic) HKInspectableValue *highValue;
@property (readonly, nonatomic) HKInspectableValueCollection *currentValue;
@property (readonly, copy, nonatomic) NSString *unitString;
@property (readonly, nonatomic) double lowValueDoubleRepresentation;
@property (readonly, nonatomic) double highValueDoubleRepresentation;
@property (readonly, nonatomic) long long currentValueRelation;
@property (readonly, nonatomic) BOOL hasRenderableContent;
@property (retain, nonatomic) NSDate *date;

+ (id)valueInRangeWithLow:(id)a0 high:(id)a1 currentValue:(id)a2 unit:(id)a3;

- (void).cxx_destruct;
- (void)_assertValidRange;
- (id)_initValueInRangeWithLow:(id)a0 high:(id)a1 currentValue:(id)a2 unit:(id)a3;
- (double)_doubleForValue:(id)a0;
- (double)_doubleForValueCollection:(id)a0;
- (void)_setUnitString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
