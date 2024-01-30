@class NSNumber, MOBoolSettingMetadata;

@interface MOSiriSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySiriMetadata;

@property (retain, nonatomic) NSNumber *denySiri;

+ (id)groupName;

@end
