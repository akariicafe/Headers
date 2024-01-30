@class NSString;

@interface NTKTimelapseThemeEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long timelapseTheme;
@property (readonly, nonatomic) NSString *resourceBaseName;
@property (readonly, nonatomic) NSString *resourceName;

+ (id)optionsDescription;
+ (id)optionWithTimelapseTheme:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_resourceBaseNameForTheme:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_resourceNameForTheme:(unsigned long long)a0 videoIndex:(long long)a1 forDevice:(id)a2;

- (long long)swatchStyle;
- (id)resourceNameWithVideoIndex:(long long)a0;
- (id)_valueToFaceBundleStringDict;

@end
