@interface NTKAnalogDialShapeEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long dialShape;

+ (id)optionWithShape:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_orderedValuesRestrictedByDevice:(id)a0;

- (unsigned long long)_value;
- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
