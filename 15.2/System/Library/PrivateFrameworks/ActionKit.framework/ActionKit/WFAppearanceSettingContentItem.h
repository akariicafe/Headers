@class WFAppearanceSettingValue;

@interface WFAppearanceSettingContentItem : WFContentItem

@property (readonly, nonatomic) WFAppearanceSettingValue *settingValue;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

@end
