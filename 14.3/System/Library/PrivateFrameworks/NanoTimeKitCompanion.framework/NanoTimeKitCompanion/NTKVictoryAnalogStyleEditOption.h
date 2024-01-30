@interface NTKVictoryAnalogStyleEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long style;

+ (id)optionWithStyle:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_stylesInGrace;
+ (id)_stylesInGlory;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
