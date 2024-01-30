@interface NSUnitTemperature : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitTemperature *kelvin;
@property (class, readonly, copy) NSUnitTemperature *celsius;
@property (class, readonly, copy) NSUnitTemperature *fahrenheit;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
