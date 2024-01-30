@interface NTKDateAlignmentEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long alignment;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithAlignment:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;

@end
