@class UIViewController, PKPaymentSetupRequest;
@protocol AMSUIPaymentSetupViewControllerDelegate;

@interface AMSUIPaymentSetupViewController : UIViewController

@property (retain, nonatomic) UIViewController *childViewController;
@property (weak, nonatomic) id<AMSUIPaymentSetupViewControllerDelegate> delegate;
@property (readonly, nonatomic) PKPaymentSetupRequest *paymentSetupRequest;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_setup;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithPaymentSetupRequest:(id)a0;

@end
