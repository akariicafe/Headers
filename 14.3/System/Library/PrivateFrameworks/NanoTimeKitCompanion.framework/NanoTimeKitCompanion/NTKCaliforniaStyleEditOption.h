@interface NTKCaliforniaStyleEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long style;

+ (id)optionWithStyle:(unsigned long long)a0 forDevice:(id)a1;
+ (unsigned long long)resolvedAutomaticStyleForCurrentLocale;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)_valueIsValid:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
