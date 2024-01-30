@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (id)applicationBundleIdentifierForContainerAccess;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;

@end
