@class NSString, NSMutableDictionary;

@interface ASAutodiscoverV2Task : ASTask {
    NSString *_emailAddress;
    NSMutableDictionary *_accountInfo;
    BOOL _addEmptyBearer;
    BOOL _discoverOAuthEndpoint;
    NSString *_easEndPoint;
}

- (id)_url;
- (double)timeoutInterval;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0;
- (id)contentType;
- (void)loadRequest:(id)a0;
- (BOOL)processContext:(id)a0;
- (void)didProcessContext:(id)a0;
- (id)_easVersion;
- (id)_policyKey;
- (id)_HTTPMethodForRequest:(id)a0;
- (BOOL)_shouldSendAuthForRequest:(id)a0;
- (BOOL)_shouldRedirectToHTTPForRequest:(id)a0;
- (id)localizedErrorStringForCertificateErrorCode:(int)a0 host:(id)a1;
- (BOOL)shouldHandlePasswordErrors;
- (BOOL)shouldStallAfterConnectionLost;
- (BOOL)requiresEASVersionInformaton;
- (BOOL)shouldLogIncomingData;
- (id)_OAuthURLFromResponseData:(id)a0;

@end
