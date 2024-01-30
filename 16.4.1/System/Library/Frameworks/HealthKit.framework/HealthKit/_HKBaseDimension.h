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

+ (id)power;
+ (id)pressure;
+ (id)temperature;
+ (id)frequency;
+ (id)mass;
+ (id)time;
+ (id)soundPressureLevel;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)nonConvertibleMole;
+ (id)energy;
+ (id)electricPotentialDifference;
+ (id)length;
+ (id)angle;
+ (id)changeInTemperature;
+ (id)conductance;
+ (id)nonConvertibleIU;
+ (id)equivalents;
+ (id)hearingSensitivity;
+ (id)diopter;
+ (id)volume;
+ (id)prismDiopter;
+ (id)titer;
+ (id)nullDimension;

- (id)_initWithName:(id)a0;
- (id)_baseDimensions;
- (id)dimension;
- (BOOL)isEqual:(id)a0;
- (id)unitString;
- (void).cxx_destruct;
- (BOOL)canBeReduced;

@end
