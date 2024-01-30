@class WFAppearanceSettingValue;

@interface WFAppearanceSettingContentItem : WFContentItem

@property (readonly, nonatomic) WFAppearanceSettingValue *settingValue;

+ (id)typeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;

@end
