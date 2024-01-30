@class UIColor, NSString;

@interface NTKCharacterColorEditOption : NTKValueEditOption <NTKPigmentEditOptionConvertible>

@property (readonly, nonatomic) unsigned long long color;
@property (readonly, nonatomic) UIColor *colorValue;
@property (readonly, nonatomic) double desaturation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (unsigned long long)indexOfOption:(id)a0 forCharacter:(unsigned long long)a1 forDevice:(id)a2;
+ (id)legacyOptionWithPigmentEditOption:(id)a0 forDevice:(id)a1;
+ (unsigned long long)numberOfOptionsForCharacter:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionAtIndex:(unsigned long long)a0 forCharacter:(unsigned long long)a1 forDevice:(id)a2;
+ (id)optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)optionWithFaceColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionWithOption:(id)a0 forCharacter:(unsigned long long)a1 forDevice:(id)a2;

- (id)localizedName;
- (id)_valueToFaceBundleStringDict;
- (BOOL)isValidOption;
- (id)pigmentEditOption;
- (long long)swatchStyle;

@end
