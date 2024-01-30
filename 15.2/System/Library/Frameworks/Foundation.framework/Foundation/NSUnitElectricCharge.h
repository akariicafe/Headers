@interface NSUnitElectricCharge : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitElectricCharge *coulombs;
@property (class, readonly, copy) NSUnitElectricCharge *megaampereHours;
@property (class, readonly, copy) NSUnitElectricCharge *kiloampereHours;
@property (class, readonly, copy) NSUnitElectricCharge *ampereHours;
@property (class, readonly, copy) NSUnitElectricCharge *milliampereHours;
@property (class, readonly, copy) NSUnitElectricCharge *microampereHours;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
