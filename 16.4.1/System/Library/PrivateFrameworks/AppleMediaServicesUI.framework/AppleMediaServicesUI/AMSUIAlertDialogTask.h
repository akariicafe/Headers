@class AMSDialogRequest, AMSMetrics, UIViewController;

@interface AMSUIAlertDialogTask : AMSTask

@property (retain, nonatomic) AMSMetrics *metrics;
@property (readonly, nonatomic) AMSDialogRequest *request;
@property (readonly, nonatomic) UIViewController *presentingViewController;

+ (long long)_keyboardTypeFromType:(long long)a0;

- (id)present;
- (BOOL)cancel;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;
- (id)_createIOSViewControllerFromRequest:(id)a0 completion:(id /* block */)a1;

@end
