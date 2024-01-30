@class NSString, PPCExtensibleSSOAuthenticator, TPSURLSessionACAuthContext, NSObject;
@protocol OS_dispatch_queue;

@interface TPSURLSessionACAuthHandler : NSObject <TPSURLSessionCustomAuthHandling>

@property (copy, nonatomic) TPSURLSessionACAuthContext *authContext;
@property (retain, nonatomic) PPCExtensibleSSOAuthenticator *ssoAuthenticator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, copy, nonatomic) TPSURLSessionACAuthContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAuthenticateWithURLResponse:(id)a0;

- (void).cxx_destruct;
- (id)initWithAuthenticationContext:(id)a0;
- (void)_authenticateWithAppleConnect:(id /* block */)a0;
- (id)_authenticationTokenForHost:(id)a0 error:(id *)a1;
- (void)authenticateForURLResponse:(id)a0 completion:(id /* block */)a1;
- (id)customHeaderFields;

@end
