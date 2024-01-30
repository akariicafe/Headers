@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (id)sourceApplicationSecondaryIdentifier;
- (BOOL)requiresTokenRegistration;

@end
