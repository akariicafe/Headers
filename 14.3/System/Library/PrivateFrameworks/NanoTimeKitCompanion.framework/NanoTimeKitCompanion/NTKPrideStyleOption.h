@interface NTKPrideStyleOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long style;

+ (id)optionWithStyle:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (long long)indexForStyle:(unsigned long long)a0 forDevice:(id)a1;

- (long long)swatchStyle;
- (BOOL)optionExistsInDevice:(id)a0;
- (id)_valueToFaceBundleStringDict;

@end
