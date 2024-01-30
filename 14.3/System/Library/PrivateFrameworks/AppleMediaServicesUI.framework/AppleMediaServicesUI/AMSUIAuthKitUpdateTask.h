@class UIViewController;

@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask

@property (readonly, nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (unsigned long long)_authenticationType;
- (id)initWithAccount:(id)a0 presentingViewController:(id)a1 options:(id)a2;
- (id)_createAuthKitContext;
- (void)_configureAuthKitContext:(id)a0;
- (id)_createAuthKitController;

@end
