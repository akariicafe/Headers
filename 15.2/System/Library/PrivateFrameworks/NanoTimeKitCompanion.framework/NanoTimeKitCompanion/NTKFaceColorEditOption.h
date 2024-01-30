@class NSString;

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (readonly, nonatomic) unsigned long long faceColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithFaceColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)pigmentFaceDomain;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)standardColorValuesForDevice:(id)a0;
+ (id)optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)_optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)_orderedValuesRestrictedByDevice:(id)a0;
+ (id)standardColorEditOptionsForDevice:(id)a0;
+ (BOOL)value:(long long)a0 existsInDevice:(id)a1;
+ (id)__allOrderedColors;
+ (id)_thirdPartyValues;
+ (id)standardColorsWithColorClass:(Class)a0 forDevice:(id)a1;

- (id)localizedName;
- (BOOL)isEqual:(id)a0;
- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;
- (BOOL)optionExistsInDevice:(id)a0;
- (long long)swatchStyle;

@end
