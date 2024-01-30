@interface NTKAegirVistaEditOption : NTKEnumeratedEditOption

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithVista:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;
- (unsigned long long)vista;

@end
