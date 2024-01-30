@class NSArray, PKSecureElementPass;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentSetupMoreInfoViewController : PKExplanationViewController

@property (readonly, retain, nonatomic) PKSecureElementPass *pass;
@property (readonly, retain, nonatomic) NSArray *moreInfoItems;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (nonatomic) BOOL isFinalViewController;

- (void)_next;
- (long long)preferredStatusBarStyle;
- (id)_currentItem;
- (void)loadView;
- (unsigned long long)edgesForExtendedLayout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (id)_nextItems;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)_handlePush;
- (void)_handleDismissal;
- (id)initWithMoreInfoItems:(id)a0 paymentPass:(id)a1 targetDevice:(id)a2 context:(long long)a3 dismissalHandler:(id /* block */)a4;
- (void)_alternateActionWithCompletion:(id /* block */)a0;
- (void)_linkTapped;

@end
