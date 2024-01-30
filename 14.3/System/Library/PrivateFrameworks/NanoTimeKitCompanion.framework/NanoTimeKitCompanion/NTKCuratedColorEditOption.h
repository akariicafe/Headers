@interface NTKCuratedColorEditOption : NTKFaceColorEditOption

+ (id)localizedStringForKey:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_curatedColorValuesForDevice:(id)a0;
+ (id)curatedColorValuesForDevice:(id)a0;
+ (id)curatedColorLocalizationKey:(unsigned long long)a0 forDevice:(id)a1;
+ (id)curatedColorLocalizationKeyPrefix;

- (id)_valueToFaceBundleStringDict;

@end
