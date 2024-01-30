@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL skipBundleIDCheck;

- (id)applicationBundleIdentifierForContainerAccess;
- (id)flowControlKey;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)sourceApplicationSecondaryIdentifier;
- (BOOL)requiresTokenRegistration;
- (id)initWithOperation:(id)a0 apsToken:(id)a1 apsEnvironmentString:(id)a2 bundleID:(id)a3 skipBundleIDCheck:(BOOL)a4;

@end
