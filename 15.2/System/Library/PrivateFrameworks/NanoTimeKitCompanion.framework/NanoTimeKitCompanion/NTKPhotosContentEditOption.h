@interface NTKPhotosContentEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long photosContent;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionWithPhotosContent:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForActionForValue:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;

@end
