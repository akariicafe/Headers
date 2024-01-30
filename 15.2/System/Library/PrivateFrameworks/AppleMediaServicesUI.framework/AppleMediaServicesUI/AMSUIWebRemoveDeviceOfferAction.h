@class NSString, ACAccount;

@interface AMSUIWebRemoveDeviceOfferAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
