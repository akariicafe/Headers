@class NSString, AMSAuthenticateRequest;

@interface AMSUIWebAuthenticateAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (nonatomic) BOOL pauseTimeouts;
@property (nonatomic) BOOL isAuthenticatingCloud;
@property (nonatomic) BOOL makeCurrentAccount;
@property (retain, nonatomic) AMSAuthenticateRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (void)_updateContextWithAccountIfNeeded:(id)a0;
- (id)_responseForAccount:(id)a0;

@end
