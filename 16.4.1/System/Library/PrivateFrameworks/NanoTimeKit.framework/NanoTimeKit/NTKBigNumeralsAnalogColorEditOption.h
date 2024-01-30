@interface NTKBigNumeralsAnalogColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) unsigned long long color;

+ (id)pigmentFaceDomain;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;
- (BOOL)isPrideOption;
- (BOOL)optionExistsInDevice:(id)a0;
- (id)pigmentEditOption;

@end
