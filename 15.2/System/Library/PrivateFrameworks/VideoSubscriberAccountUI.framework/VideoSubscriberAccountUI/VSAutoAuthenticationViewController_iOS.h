@class VSFontCenter, VSAutoAuthenticationViewModel, NSString, VSIdentityProviderLogoView, UIScrollView, UILabel, UIButton;
@protocol VSAuthenticationViewControllerDelegate;

@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) VSIdentityProviderLogoView *logoView;
@property (retain, nonatomic) UILabel *accountNameLabel;
@property (retain, nonatomic) UILabel *messageTitleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) UILabel *manualSignInTitleLabel;
@property (retain, nonatomic) UIButton *manualSignInButton;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) VSAutoAuthenticationViewModel *viewModel;
@property (weak, nonatomic) id<VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredLogoSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_stopObservingViewModel:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (void)_manualSignInButtonPressed:(id)a0;

@end
