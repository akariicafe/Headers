@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (id)additionalHeaderValues;
- (long long)partitionType;
- (BOOL)allowsAnonymousAccount;
- (id)httpMethod;
- (id)url;
- (void).cxx_destruct;
- (BOOL)hasRequestBody;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (long long)serverType;

@end
