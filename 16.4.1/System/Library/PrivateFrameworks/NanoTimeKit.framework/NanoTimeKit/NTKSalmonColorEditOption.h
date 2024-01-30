@class NSString;

@interface NTKSalmonColorEditOption : NTKCuratedColorEditOption <NTKPigmentEditOptionConvertible>

@property (readonly, nonatomic) unsigned long long color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domain;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)curatedColorValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (id)pigmentEditOption;

@end
