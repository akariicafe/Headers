@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (id)url;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (long long)partitionType;
- (void)requestDidParsePlistObject:(id)a0;
- (long long)serverType;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)hasRequestBody;

@end
