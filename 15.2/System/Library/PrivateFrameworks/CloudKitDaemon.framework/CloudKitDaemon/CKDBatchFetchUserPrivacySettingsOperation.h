@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (id)activityCreate;
- (int)operationType;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (void).cxx_destruct;

@end
