@class NSUUID, NSData;

@interface HMDPersonSettingsModel : HMBModel

@property (class, readonly, copy) NSUUID *sentinelParentUUID;
@property (class, readonly, copy) NSUUID *sentinelModelUUID;

@property (retain) NSData *classificationNotificationSettingsData;

+ (id)hmbProperties;
+ (BOOL)hmbExcludeFromCloudStorage;

- (id)init;
- (id)classificationNotificationsEnabledForPersonUUID:(id)a0;
- (void)setClassificationNotificationsEnabled:(id)a0 forPersonUUID:(id)a1;
- (id)unarchivedClassificationNotificationsEnabledForPersonUUID;
- (void)archiveClassificationNotificationsEnabledForPersonUUID:(id)a0;

@end
