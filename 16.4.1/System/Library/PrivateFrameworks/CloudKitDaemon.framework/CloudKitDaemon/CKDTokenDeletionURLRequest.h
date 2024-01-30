@class NSData, NSString;

@interface CKDTokenDeletionURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestOperationClasses;
- (id)sourceApplicationSecondaryIdentifier;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 apsToken:(id)a1 apsEnvironmentString:(id)a2 bundleID:(id)a3;
- (BOOL)requiresTokenRegistration;

@end
