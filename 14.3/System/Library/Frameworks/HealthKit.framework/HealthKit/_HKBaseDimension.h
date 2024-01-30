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
+ (id)length;
+ (id)temperature;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)nullDimension;
+ (id)time;
+ (id)mass;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)frequency;
+ (id)soundPressureLevel;
+ (id)pressure;
+ (id)electricPotentialDifference;
+ (id)conductance;
+ (id)nonConvertibleMole;
+ (id)energy;
+ (id)hearingSensitivity;
+ (id)titer;
+ (id)equivalents;
+ (id)nonConvertibleIU;

- (id)dimension;
- (id)_initWithName:(id)a0;
- (id)unitString;
- (void).cxx_destruct;
- (BOOL)canBeReduced;
- (id)_baseDimensions;
- (BOOL)isEqual:(id)a0;

@end
