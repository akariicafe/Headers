@class NSNumber, NSSet, MOBoolSettingMetadata, MOApplicationSettingMetadata, MODataSetSettingMetadata, MOApplication;

@interface MOAllowedClientSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOApplicationSettingMetadata *allowedClientMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMDMEnrollmentMetadata;
@property (class, readonly, nonatomic) MODataSetSettingMetadata *tokenKeysMetadata;

@property (retain, nonatomic) MOApplication *allowedClient;
@property (retain, nonatomic) NSNumber *denyMDMEnrollment;
@property (retain, nonatomic) NSSet *tokenKeys;

+ (id)groupName;

@end
