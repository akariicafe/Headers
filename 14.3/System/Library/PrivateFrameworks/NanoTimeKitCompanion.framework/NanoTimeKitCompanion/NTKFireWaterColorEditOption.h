@interface NTKFireWaterColorEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long color;

+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
