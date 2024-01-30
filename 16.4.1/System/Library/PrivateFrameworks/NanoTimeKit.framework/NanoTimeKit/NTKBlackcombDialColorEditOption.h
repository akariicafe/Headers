@interface NTKBlackcombDialColorEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long blackcombDialColor;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithBlackcombDialColor:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
