@class NSString;

@interface NTKCollieColorEditOption : NTKFaceColorEditOption <NTKPigmentEditOptionConvertible>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)pigmentFaceDomain;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;

- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;

@end
