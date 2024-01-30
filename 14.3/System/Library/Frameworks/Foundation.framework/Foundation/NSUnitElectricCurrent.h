@interface NSUnitElectricCurrent : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitElectricCurrent *megaamperes;
@property (class, readonly, copy) NSUnitElectricCurrent *kiloamperes;
@property (class, readonly, copy) NSUnitElectricCurrent *amperes;
@property (class, readonly, copy) NSUnitElectricCurrent *milliamperes;
@property (class, readonly, copy) NSUnitElectricCurrent *microamperes;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;
+ (id)baseUnit;

@end
