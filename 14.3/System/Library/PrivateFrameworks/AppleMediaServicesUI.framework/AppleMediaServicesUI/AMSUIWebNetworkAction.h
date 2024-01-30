@class NSString, AMSUIWebClientContext, NSDictionary, ACAccount, NSURL;

@interface AMSUIWebNetworkAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) BOOL includeiCloudTokens;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
