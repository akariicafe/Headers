@interface CKDGetUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void)main;
- (int)operationType;
- (void)_handleRetrievedPrivacySettings:(id)a0;

@end
