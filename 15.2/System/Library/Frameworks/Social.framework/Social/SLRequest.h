@class NSData, NSString, NSURL, NSMutableDictionary, ACAccount, NSMutableArray, OACredential, SLService;

@interface SLRequest : NSObject {
    ACAccount *_account;
    OACredential *_OAuthCredential;
    NSMutableArray *_multiParts;
    NSString *_multiPartBoundary;
    int _callingPID;
    NSString *_applicationID;
    NSString *_contentType;
    NSData *_payload;
    unsigned long long _networkServiceType;
    SLService *_service;
}

@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) long long requestMethod;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSMutableDictionary *parameters;

+ (id)requestForServiceType:(id)a0 requestMethod:(long long)a1 URL:(id)a2 parameters:(id)a3;

- (void)setNetworkServiceType:(unsigned long long)a0;
- (void)performRequestWithHandler:(id /* block */)a0;
- (void)setPayload:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setApplicationID:(id)a0;
- (unsigned long long)networkServiceType;
- (id)parameterForKey:(id)a0;
- (BOOL)_requiresAuthorization;
- (void)setContentType:(id)a0;
- (id)_commandName;
- (id)initWithServiceType:(id)a0 URL:(id)a1 parameters:(id)a2 requestMethod:(long long)a3;
- (void)addMultipartData:(id)a0 withName:(id)a1 type:(id)a2 filename:(id)a3;
- (void)setParameterValue:(id)a0 forKey:(id)a1;
- (void)setMultiPartBoundary:(id)a0;
- (id)multiPartBoundary;
- (id)_allParameters;
- (void)_addAuthenticationParameters:(id)a0;
- (BOOL)_shouldAppendTencentWeiboParametersToRequest;
- (id)_urlEncodedString:(id)a0;
- (BOOL)shouldIncludeParameterString;
- (id)_parameterString;
- (id)_preparedURL;
- (id)_HTTPMethodName;
- (id)completeMultiParts;
- (id)preparedURLRequest;
- (BOOL)_shouldRetryAfterCount:(int)a0 delay:(float *)a1;
- (void)performJSONRequestWithHandler:(id /* block */)a0 retryCount:(int)a1;
- (void)removeParameterForKey:(id)a0;
- (id)multiParts;
- (void)addMultiPart:(id)a0;
- (void)addMultipartData:(id)a0 withName:(id)a1 type:(id)a2;
- (id)multiPartBodyData;
- (void)setOAuthCredential:(id)a0;
- (id)OAuthCredential;
- (void)setCallingPID:(int)a0;
- (int)callingPID;
- (void)_appendCoreSig1Signature;
- (id)dictionaryRepresentationForJSONSerialization;
- (void)performJSONRequestWithHandler:(id /* block */)a0;

@end
