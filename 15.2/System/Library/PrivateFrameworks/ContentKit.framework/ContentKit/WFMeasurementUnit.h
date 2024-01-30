@interface WFMeasurementUnit : NSObject

+ (id)unitFromString:(id)a0;
+ (id)unitTypeForUnitClass:(Class)a0;
+ (id)defaultUnitForUnitType:(id)a0;
+ (id)availableUnitsForUnitType:(id)a0;
+ (id)unitFromString:(id)a0 unitType:(id)a1 caseSensitive:(BOOL)a2;
+ (id)availableUnitTypes;
+ (Class)unitClassForUnitType:(id)a0;
+ (id)localizedStringForUnitType:(id)a0;
+ (id)unitTypeMap;
+ (BOOL)usesMetricSystemForUnitType:(id)a0;

@end
