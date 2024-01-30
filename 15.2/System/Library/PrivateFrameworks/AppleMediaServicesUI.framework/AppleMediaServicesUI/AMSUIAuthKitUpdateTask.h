@class UIViewController;

@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask

@property (readonly, nonatomic) UIViewController *presentingViewController;

- (id)_createAuthKitContext;
- (void)_configureAuthKitContext:(id)a0;
- (id)_createAuthKitController;
- (unsigned long long)_authenticationType;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 presentingViewController:(id)a1 options:(id)a2;

@end
