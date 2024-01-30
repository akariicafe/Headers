@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;
@property (copy, nonatomic) NSString *bundleID;

- (void)setDiscoverable:(BOOL)a0;
- (long long)databaseScope;
- (id)initWithOperation:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
