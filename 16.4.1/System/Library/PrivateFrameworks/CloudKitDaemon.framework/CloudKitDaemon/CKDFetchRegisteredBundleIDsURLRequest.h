@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)sourceApplicationSecondaryIdentifier;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
