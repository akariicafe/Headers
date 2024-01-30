@interface NTKPhotosColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) unsigned long long color;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;

- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;

@end
