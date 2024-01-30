@class HKBaseUnit, HKUnit, NSString;

@interface _HKBaseDimension : _HKDimension <_HKFactor>

@property (retain, nonatomic) HKBaseUnit *reducibleBaseUnit;
@property (retain, nonatomic) HKUnit *reducedUnit;
@property (nonatomic) double reductionCoefficient;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)volume;
+ (id)nullDimension;
+ (id)length;
+ (id)conductance;
+ (id)time;
+ (id)temperature;
+ (id)titer;
+ (id)mass;
+ (id)electricPotentialDifference;
+ (id)equivalents;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)nonConvertibleIU;
+ (id)soundPressureLevel;
+ (id)hearingSensitivity;
+ (id)nonConvertibleMole;
+ (id)energy;
+ (id)pressure;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)frequency;

- (id)dimension;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)canBeReduced;
- (id)_baseDimensions;
- (id)_initWithName:(id)a0;
- (id)unitString;

@end
