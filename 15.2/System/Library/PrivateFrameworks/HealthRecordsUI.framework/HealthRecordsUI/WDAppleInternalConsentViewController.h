@class UIViewController, UIBarButtonItem;

@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController {
    UIBarButtonItem *_navigationCancelButton;
}

@property (retain, nonatomic) UIViewController *actionViewController;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)cancelButtonTapped:(id)a0;
- (id)titleString;
- (id)bodyString;
- (void)acceptButtonTapped:(id)a0;
- (void)declineButtonTapped:(id)a0;
- (id)initWithPresentingViewController:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)shouldCustomizeNavigationBar;
- (long long)bodyTextAlignment;
- (void)updateBodyTextAttributesWithMutableString:(id)a0;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)a0;

@end
