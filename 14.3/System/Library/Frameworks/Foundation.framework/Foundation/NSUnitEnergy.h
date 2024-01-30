@interface NSUnitEnergy : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitEnergy *kilojoules;
@property (class, readonly, copy) NSUnitEnergy *joules;
@property (class, readonly, copy) NSUnitEnergy *kilocalories;
@property (class, readonly, copy) NSUnitEnergy *calories;
@property (class, readonly, copy) NSUnitEnergy *kilowattHours;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;
+ (id)baseUnit;

@end
