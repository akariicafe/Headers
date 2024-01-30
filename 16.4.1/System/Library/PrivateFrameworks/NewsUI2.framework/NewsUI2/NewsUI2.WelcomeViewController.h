@class NSArray;

@interface NewsUI2.WelcomeViewController : UIViewController <UITextViewDelegate> {
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
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)didTapContinueButton;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)showPrivacyText;

@end
