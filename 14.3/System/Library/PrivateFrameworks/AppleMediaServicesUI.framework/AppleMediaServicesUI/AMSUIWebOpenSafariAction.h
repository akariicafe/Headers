@class NSString, ASWebAuthenticationSession, AMSUIWebClientContext, NSURL;

@interface AMSUIWebOpenSafariAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSString *callbackScheme;
@property (retain, nonatomic) ASWebAuthenticationSession *session;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultFromURL:(id)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
