@interface NTKTimeScaleEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long timeScale;

+ (id)optionsDescription;
+ (id)optionWithTimeScale:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
