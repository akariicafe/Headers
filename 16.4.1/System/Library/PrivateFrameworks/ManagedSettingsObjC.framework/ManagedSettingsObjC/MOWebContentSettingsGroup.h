@class MOWebContentFilterPolicySettingMetadata, MOWebContentFilterPolicy;

@interface MOWebContentSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOWebContentFilterPolicySettingMetadata *blockedByFilterMetadata;

@property (retain, nonatomic) MOWebContentFilterPolicy *blockedByFilter;

+ (id)groupName;

@end
