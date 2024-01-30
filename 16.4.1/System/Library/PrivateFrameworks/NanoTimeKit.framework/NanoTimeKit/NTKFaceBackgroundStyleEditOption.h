@interface NTKFaceBackgroundStyleEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long backgroundStyle;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithBackgroundStyle:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
