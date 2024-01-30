@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;

@end
