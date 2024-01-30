@interface NTKAlaskanColorEditOption : NTKCuratedColorEditOption

@property (readonly, nonatomic) unsigned long long color;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)curatedColorLocalizationKeyPrefix;
+ (id)curatedColorValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (id)pigmentEditOption;

@end
