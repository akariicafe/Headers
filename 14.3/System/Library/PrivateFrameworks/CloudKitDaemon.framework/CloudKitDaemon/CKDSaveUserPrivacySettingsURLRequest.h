@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;
@property (copy, nonatomic) NSString *bundleID;

- (void).cxx_destruct;
- (void)setDiscoverable:(BOOL)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (id)initWithOperation:(id)a0;
- (BOOL)requiresTokenRegistration;

@end
