@class ACAccount;

@interface AMSUIWebFetchAttestationVersionAction : AMSUIWebAction

@property (retain, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)minimumVersions;

@end
