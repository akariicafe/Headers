@class UIColor;

@interface NTKCharacterColorEditOption : NTKValueEditOption

@property (readonly, nonatomic) unsigned long long color;
@property (readonly, nonatomic) UIColor *colorValue;
@property (readonly, nonatomic) double desaturation;

+ (id)optionWithFaceColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionWithOption:(id)a0 forCharacter:(unsigned long long)a1 forDevice:(id)a2;
+ (id)optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (unsigned long long)numberOfOptionsForCharacter:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionAtIndex:(unsigned long long)a0 forCharacter:(unsigned long long)a1 forDevice:(id)a2;
+ (unsigned long long)indexOfOption:(id)a0 forCharacter:(unsigned long long)a1 forDevice:(id)a2;

- (long long)swatchStyle;
- (BOOL)isValidOption;
- (id)_valueToFaceBundleStringDict;

@end
