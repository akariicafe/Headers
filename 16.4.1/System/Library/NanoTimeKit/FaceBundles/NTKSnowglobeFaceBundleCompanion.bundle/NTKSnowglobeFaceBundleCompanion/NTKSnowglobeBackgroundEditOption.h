@interface NTKSnowglobeBackgroundEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long background;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithSnowglobeBackground:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
