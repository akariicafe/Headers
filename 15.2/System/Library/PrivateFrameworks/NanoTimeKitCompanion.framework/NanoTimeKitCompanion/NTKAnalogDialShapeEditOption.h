@interface NTKAnalogDialShapeEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long dialShape;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionWithShape:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesRestrictedByDevice:(id)a0;

- (unsigned long long)_value;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
