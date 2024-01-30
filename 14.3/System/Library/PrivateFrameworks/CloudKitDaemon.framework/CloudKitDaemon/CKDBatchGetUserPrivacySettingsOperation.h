@class NSArray;

@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (id)activityCreate;
- (void).cxx_destruct;
- (void)main;
- (int)operationType;
- (BOOL)shouldCheckAppVersion;

@end
