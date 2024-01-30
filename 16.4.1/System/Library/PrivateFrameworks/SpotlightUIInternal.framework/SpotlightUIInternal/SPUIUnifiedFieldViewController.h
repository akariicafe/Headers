@class SBFFeatherBlurView, SPUINavigationSwipeRecognizerDelegate, UIKBVisualEffectView, UIView, SPUITextField, CALayer, UIButton, NSString, NSLayoutConstraint, SPUISearchHeader, MTMaterialView, SPUINavigationController;
@protocol SPUIUnifiedFieldViewControllerDelegate;

@interface SPUIUnifiedFieldViewController : UIViewController <SPUIUnifiedFieldNavigationDelegate>

@property (readonly) SPUINavigationController *searchNavigationController;
@property (readonly) SPUISearchHeader *searchHeader;
@property (retain) SPUINavigationSwipeRecognizerDelegate *swipeRecognizer;
@property (retain) UIKBVisualEffectView *keyboardVisualEffectView;
@property (retain) MTMaterialView *featheredBlur;
@property (retain) SBFFeatherBlurView *topBlur;
@property (retain) NSLayoutConstraint *leadingConstraint;
@property (retain) NSLayoutConstraint *trailingConstraint;
@property (retain) UIButton *backButton;
@property (retain) UIView *originalLeftView;
@property (retain) SPUITextField *fakeTextField;
@property (retain) UIView *fakeOriginalLeftView;
@property BOOL handlingKeyboardFrameChange;
@property (weak, nonatomic) id<SPUIUnifiedFieldViewControllerDelegate> delegate;
@property (readonly) CALayer *searchProtectorLayer;
@property (readonly) double keyboardProtectorHeight;
@property (readonly, getter=isUnifiedFieldDocked) BOOL unifiedFieldDocked;
@property (readonly) struct CGSize { double x0; double x1; } unifiedFieldSize;
@property (readonly) struct CGSize { double x0; double x1; } dockedUnifiedFieldSize;
@property (readonly) double unifiedFieldCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewIsCanvasForField:(id)a0;
+ (double)insetMarginsForSearchField;

- (void)keyboardWillHide:(id)a0;
- (void)keyboardFrameChanged:(id)a0;
- (void)resetSearchFieldContentWithSearchToken:(id)a0 text:(id)a1 wantsBackButton:(BOOL)a2 transitionCoordinator:(id)a3;
- (void)keyboardWillShow:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithNavigationController:(id)a0;
- (void)dismissSingleLevelViewController;
- (id)generateBackButton;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
