@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (BOOL)requiresTokenRegistration;

@end
