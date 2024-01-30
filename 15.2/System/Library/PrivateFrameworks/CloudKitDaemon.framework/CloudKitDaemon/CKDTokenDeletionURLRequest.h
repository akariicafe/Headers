@class NSData, NSString;

@interface CKDTokenDeletionURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;

- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (id)sourceApplicationSecondaryIdentifier;
- (BOOL)requiresTokenRegistration;
- (id)initWithOperation:(id)a0 apsToken:(id)a1 apsEnvironmentString:(id)a2 bundleID:(id)a3;

@end
