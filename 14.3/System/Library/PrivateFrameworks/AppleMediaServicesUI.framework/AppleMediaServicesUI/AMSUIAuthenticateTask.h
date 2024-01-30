@class NSString, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate>

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
