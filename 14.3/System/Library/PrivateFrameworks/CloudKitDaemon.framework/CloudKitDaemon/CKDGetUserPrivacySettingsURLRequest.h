@class CKDPUserPrivacySettings;

@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (long long)databaseScope;

@end
