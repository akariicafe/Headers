@interface CKDSaveUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (BOOL)shouldCheckAppVersion;
- (void)main;

@end
