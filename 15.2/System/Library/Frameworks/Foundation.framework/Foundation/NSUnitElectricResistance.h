@interface NSUnitElectricResistance : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitElectricResistance *megaohms;
@property (class, readonly, copy) NSUnitElectricResistance *kiloohms;
@property (class, readonly, copy) NSUnitElectricResistance *ohms;
@property (class, readonly, copy) NSUnitElectricResistance *milliohms;
@property (class, readonly, copy) NSUnitElectricResistance *microohms;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
