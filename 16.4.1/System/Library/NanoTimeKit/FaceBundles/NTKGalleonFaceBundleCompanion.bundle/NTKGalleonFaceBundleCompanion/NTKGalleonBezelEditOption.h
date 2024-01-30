@interface NTKGalleonBezelEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long bezelStyle;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (BOOL)hasRegionalGeoRestrictions;
+ (id)optionWithGalleonBezelStyle:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
