@class UIScrollView, NSString, NSArray, VSTwoFactorDigitView, VSTwoFactorEntryViewModel, VSFontCenter, UIBarButtonItem, VSIdentityProviderLogoView;
@protocol VSAuthenticationViewControllerDelegate;

@interface VSTwoFactorEntryViewController_iOS : UIViewController <UIScrollViewDelegate, VSTwoFactorDigitViewDelegate, VSTwoFactorEntryViewController>

@property (retain, nonatomic) UIBarButtonItem *verifyButton;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) VSTwoFactorDigitView *digitView;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) VSIdentityProviderLogoView *logoView;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VSTwoFactorEntryViewModel *viewModel;
@property (weak, nonatomic) id<VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredLogoSize;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)buttonPressed:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)twoFactorDigitView:(id)a0 textDidChange:(id)a1;
- (void)stopObservingViewModel:(id)a0;
- (void)verifyButtonPressed:(id)a0;
- (void)startObservingViewModel:(id)a0;

@end
