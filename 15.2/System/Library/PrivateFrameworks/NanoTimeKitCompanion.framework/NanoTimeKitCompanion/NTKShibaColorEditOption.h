@class NSString;

@interface NTKShibaColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (unsigned long long)color;
- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
