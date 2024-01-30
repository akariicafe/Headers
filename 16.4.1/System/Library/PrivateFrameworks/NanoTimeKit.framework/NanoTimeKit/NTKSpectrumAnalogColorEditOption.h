@interface NTKSpectrumAnalogColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) unsigned long long color;

+ (id)domain;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (id)_valueToFaceBundleStringDict;
- (BOOL)isPrideOption;
- (BOOL)optionExistsInDevice:(id)a0;
- (id)pigmentEditOption;
- (long long)swatchStyle;

@end
