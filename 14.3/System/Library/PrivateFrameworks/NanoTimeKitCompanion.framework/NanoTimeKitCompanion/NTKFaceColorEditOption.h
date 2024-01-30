@interface NTKFaceColorEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long faceColor;

+ (id)optionWithFaceColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)standardColorValuesForDevice:(id)a0;
+ (id)standardColorsWithColorClass:(Class)a0 forDevice:(id)a1;
+ (id)optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_orderedValuesRestrictedByDevice:(id)a0;
+ (id)_optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)standardColorEditOptionsForDevice:(id)a0;
+ (BOOL)value:(long long)a0 existsInDevice:(id)a1;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)__allOrderedColors;
+ (id)_thirdPartyValues;

- (BOOL)isEqual:(id)a0;
- (long long)swatchStyle;
- (BOOL)optionExistsInDevice:(id)a0;
- (id)_valueToFaceBundleStringDict;

@end
