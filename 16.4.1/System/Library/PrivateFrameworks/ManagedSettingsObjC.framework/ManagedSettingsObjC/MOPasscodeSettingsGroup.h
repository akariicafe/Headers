@class NSNumber, MOBoolSettingMetadata;

@interface MOPasscodeSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockPasscodeMetadata;

@property (retain, nonatomic) NSNumber *lockPasscode;

+ (id)groupName;

@end
