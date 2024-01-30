@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (id)httpMethod;
- (id)additionalHeaderValues;
- (id)url;
- (BOOL)hasRequestBody;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (long long)partitionType;
- (BOOL)requiresDeviceID;
- (void).cxx_destruct;
- (long long)serverType;
- (BOOL)allowsAnonymousAccount;

@end
