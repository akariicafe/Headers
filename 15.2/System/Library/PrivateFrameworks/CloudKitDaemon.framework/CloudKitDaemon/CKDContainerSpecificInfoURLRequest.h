@class NSString, CKDContainerServerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (BOOL)allowsAuthedAccount;
- (id)url;
- (void)requestDidParseJSONObject:(id)a0;
- (BOOL)hasRequestBody;
- (BOOL)requiresConfiguration;
- (long long)partitionType;
- (BOOL)requiresDeviceID;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;
- (long long)serverType;
- (BOOL)allowsAnonymousAccount;

@end
