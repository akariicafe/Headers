@interface NTKBigNumeralsAnalogColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) unsigned long long color;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)pigmentFaceDomain;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;

- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;
- (BOOL)isPrideOption;
- (BOOL)optionExistsInDevice:(id)a0;

@end
