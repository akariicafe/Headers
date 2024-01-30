@class UIViewController, UIBarButtonItem;

@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController {
    UIBarButtonItem *_navigationCancelButton;
}

@property (retain, nonatomic) UIViewController *actionViewController;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)titleString;
- (void)cancelButtonTapped:(id)a0;
- (id)bodyString;
- (long long)bodyTextAlignment;
- (void)declineButtonTapped:(id)a0;
- (void)acceptButtonTapped:(id)a0;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)a0;
- (id)initWithPresentingViewController:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)shouldCustomizeNavigationBar;
- (void)updateBodyTextAttributesWithMutableString:(id)a0;

@end
