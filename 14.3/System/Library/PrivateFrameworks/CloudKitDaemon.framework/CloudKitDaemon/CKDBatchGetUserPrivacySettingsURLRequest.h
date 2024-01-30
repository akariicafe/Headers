@class NSArray;

@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *containerPrivacySettings;

- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (BOOL)requiresTokenRegistration;

@end
