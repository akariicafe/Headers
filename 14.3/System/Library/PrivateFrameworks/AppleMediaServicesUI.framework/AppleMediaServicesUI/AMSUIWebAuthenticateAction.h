@class AMSAuthenticateRequest, NSString, AMSUIWebClientContext;

@interface AMSUIWebAuthenticateAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) BOOL pauseTimeouts;
@property (nonatomic) BOOL makeCurrentAccount;
@property (retain, nonatomic) AMSAuthenticateRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
