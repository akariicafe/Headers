@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;
@property (copy, nonatomic) NSString *bundleID;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (id)initWithOperation:(id)a0;
- (void)setDiscoverable:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
