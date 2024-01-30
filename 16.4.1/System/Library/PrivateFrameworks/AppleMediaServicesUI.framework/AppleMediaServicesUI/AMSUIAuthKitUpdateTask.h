@class UIViewController;

@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask

@property (readonly, nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (unsigned long long)_authenticationType;
- (void)_configureAuthKitContext:(id)a0;
- (id)_createAuthKitContext;
- (id)_createAuthKitController;
- (id)initWithAccount:(id)a0 presentingViewController:(id)a1 options:(id)a2;

@end
