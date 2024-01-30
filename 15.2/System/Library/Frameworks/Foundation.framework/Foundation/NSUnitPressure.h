@interface NSUnitPressure : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitPressure *newtonsPerMetersSquared;
@property (class, readonly, copy) NSUnitPressure *gigapascals;
@property (class, readonly, copy) NSUnitPressure *megapascals;
@property (class, readonly, copy) NSUnitPressure *kilopascals;
@property (class, readonly, copy) NSUnitPressure *hectopascals;
@property (class, readonly, copy) NSUnitPressure *inchesOfMercury;
@property (class, readonly, copy) NSUnitPressure *bars;
@property (class, readonly, copy) NSUnitPressure *millibars;
@property (class, readonly, copy) NSUnitPressure *millimetersOfMercury;
@property (class, readonly, copy) NSUnitPressure *poundsForcePerSquareInch;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
