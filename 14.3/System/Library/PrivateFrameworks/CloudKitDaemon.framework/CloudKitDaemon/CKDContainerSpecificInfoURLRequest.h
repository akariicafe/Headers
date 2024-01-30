@class CKDContainerInfo, NSString;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerInfo *containerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (BOOL)usesiCloudAuthToken;
- (BOOL)usesCloudKitAuthToken;
- (void)requestDidParseJSONObject:(id)a0;
- (long long)serverType;
- (BOOL)requiresConfiguration;
- (BOOL)allowsAuthedAccount;
- (BOOL)requiresDeviceID;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;

@end
