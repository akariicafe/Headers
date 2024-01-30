@class NSArray;

@interface NewsUI2.WelcomeViewController : UIViewController {
    void /* unknown type, empty encoding */ colorStyler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ viewProvider;
    void /* unknown type, empty encoding */ viewAnimator;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ keyFrame;
    void /* unknown type, empty encoding */ startedFirstAnimation;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)didTapContinueButton;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)showPrivacyText;

@end
