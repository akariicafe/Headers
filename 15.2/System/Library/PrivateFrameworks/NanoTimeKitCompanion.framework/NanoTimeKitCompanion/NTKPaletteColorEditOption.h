@class NSString;

@interface NTKPaletteColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (readonly, nonatomic) unsigned long long paletteColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)colorNameForColorValue:(unsigned long long)a0;
+ (id)optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)_orderedValuesRestrictedByDevice:(id)a0;
+ (id)optionWithPaletteColor:(unsigned long long)a0 forDevice:(id)a1;
+ (void)colorName:(id *)a0 collectionName:(id *)a1 forColorValue:(unsigned long long)a2;
+ (unsigned long long)colorValueForColorName:(id)a0;

- (id)localizedName;
- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;
- (BOOL)optionExistsInDevice:(id)a0;
- (long long)swatchStyle;

@end
