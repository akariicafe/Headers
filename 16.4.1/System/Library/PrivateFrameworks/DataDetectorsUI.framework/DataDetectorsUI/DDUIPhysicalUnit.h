@class NSString, NSArray, DDUIPhysicalUnitGroup;

@interface DDUIPhysicalUnit : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) NSString *abbreviation;
@property (readonly) NSArray *restrictionLocales;
@property (readonly) unsigned long long groupType;
@property (weak) DDUIPhysicalUnitGroup *group;
@property (readonly) double a;
@property (readonly) double b;

+ (id)unitWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (double)valueFrom:(double)a0 unit:(id)a1;
- (BOOL)isUKMeasurement;
- (double)baseToUnit:(double)a0;
- (id)floatFormatString:(id)a0 precision:(long long)a1 exp:(BOOL)a2;
- (id)initWithName:(id)a0 abbreviation:(id)a1 restrictionLocales:(id)a2 groupType:(unsigned long long)a3 a:(double)a4 b:(double)a5;
- (BOOL)inputValueIsValid:(double)a0 fromUnit:(id)a1;
- (BOOL)keepZeroValue;
- (id)localizedConvertedValueFormat:(id)a0;
- (id)localizedConvertedValueFrom:(double)a0 unit:(id)a1;
- (id)localizedMenuTitleFormat:(id)a0;
- (id)localizedTitleFormat:(id)a0;
- (id)localizedUnitNameWithValue:(double)a0 unit:(id)a1;
- (id)patchedVariantName;
- (double)unitToBase:(double)a0;
- (id)valueAsString:(double)a0;

@end
