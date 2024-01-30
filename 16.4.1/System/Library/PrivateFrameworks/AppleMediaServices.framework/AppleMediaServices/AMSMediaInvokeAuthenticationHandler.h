@interface AMSMediaInvokeAuthenticationHandler : NSObject

+ (unsigned long long)_authenticationTypeForResponse:(id)a0;
+ (id)_authenticateRequestWithAuthType:(unsigned long long)a0 taskInfo:(id)a1;
+ (id)_performAuthRequest:(id)a0 redirectURL:(id)a1 taskInfo:(id)a2;
+ (id)_presentAuthRequest:(id)a0 taskInfo:(id)a1;
+ (BOOL)isInvokeAuthenticationEnabled;
+ (id)performAuthFromResponse:(id)a0 taskInfo:(id)a1;

@end
