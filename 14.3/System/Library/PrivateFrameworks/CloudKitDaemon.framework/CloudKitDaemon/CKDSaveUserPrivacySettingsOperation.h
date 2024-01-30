@interface CKDSaveUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void)main;
- (int)operationType;
- (BOOL)shouldCheckAppVersion;

@end
