@class NSString, ACAccount, AMSUIWebClientContext;

@interface AMSUIWebAccountAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSString *creditString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
