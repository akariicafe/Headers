@class NSSet, MOApplicationSetSettingMetadata, NSData, MODataSetSettingMetadata, MODataSettingMetadata;

@interface MOManagedSettingsSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOApplicationSetSettingMetadata *allowedClientsMetadata;
@property (class, readonly, nonatomic) MODataSettingMetadata *tokenEncodingKeyMetadata;
@property (class, readonly, nonatomic) MODataSetSettingMetadata *tokenDecodingKeysMetadata;

@property (retain, nonatomic) NSSet *allowedClients;
@property (retain, nonatomic) NSData *tokenEncodingKey;
@property (retain, nonatomic) NSSet *tokenDecodingKeys;

+ (id)groupName;

@end
