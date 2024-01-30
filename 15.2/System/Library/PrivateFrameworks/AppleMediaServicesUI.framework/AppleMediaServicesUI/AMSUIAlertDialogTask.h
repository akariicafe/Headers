@class AMSDialogRequest, UIViewController;

@interface AMSUIAlertDialogTask : AMSTask

@property (readonly, nonatomic) AMSDialogRequest *request;
@property (readonly, nonatomic) UIViewController *presentingViewController;

+ (long long)_keyboardTypeFromType:(long long)a0;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)present;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;
- (id)_createIOSViewControllerFromRequest:(id)a0 completion:(id /* block */)a1;

@end
