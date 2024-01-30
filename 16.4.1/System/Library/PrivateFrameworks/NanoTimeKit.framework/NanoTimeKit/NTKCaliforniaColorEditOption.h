@interface NTKCaliforniaColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) unsigned long long californiaColor;

+ (id)pigmentFaceDomain;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_curatedColorValuesForDevice:(id)a0;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_orderedValuesRestrictedByDevice:(id)a0;
+ (id)colorNameForColor:(unsigned long long)a0;
+ (id)optionWithCaliforniaColor:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;
- (BOOL)isPrideOption;
- (BOOL)optionExistsInDevice:(id)a0;
- (id)pigmentEditOption;
- (long long)swatchStyle;

@end
