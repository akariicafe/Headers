@class UIViewController, UIBarButtonItem;

@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController {
    UIBarButtonItem *_navigationCancelButton;
}

@property (retain, nonatomic) UIViewController *actionViewController;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (id)bodyString;
- (void)acceptButtonTapped:(id)a0;
- (void)declineButtonTapped:(id)a0;
- (id)initWithPresentingViewController:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)shouldCustomizeNavigationBar;
- (long long)bodyTextAlignment;
- (id)bottomAnchoredButtons;
- (void)updateBodyTextAttributesWithMutableString:(id)a0;
- (void)buttonAtIndexTapped:(long long)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)titleString;

@end
