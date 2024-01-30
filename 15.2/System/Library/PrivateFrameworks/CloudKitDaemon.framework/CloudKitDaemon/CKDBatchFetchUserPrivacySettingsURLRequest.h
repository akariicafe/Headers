@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *containerPrivacySettings;

- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
