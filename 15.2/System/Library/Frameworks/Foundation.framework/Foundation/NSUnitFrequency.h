@interface NSUnitFrequency : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitFrequency *terahertz;
@property (class, readonly, copy) NSUnitFrequency *gigahertz;
@property (class, readonly, copy) NSUnitFrequency *megahertz;
@property (class, readonly, copy) NSUnitFrequency *kilohertz;
@property (class, readonly, copy) NSUnitFrequency *hertz;
@property (class, readonly, copy) NSUnitFrequency *millihertz;
@property (class, readonly, copy) NSUnitFrequency *microhertz;
@property (class, readonly, copy) NSUnitFrequency *nanohertz;
@property (class, readonly, copy) NSUnitFrequency *framesPerSecond;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
