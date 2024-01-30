@class UIView, NSString, UINavigationBar, AXSSImagePreviewViewController, UIColor, AXSSScrollViewEnclosedTextView, NSLayoutConstraint, UIScrollView;
@protocol AXSSImageDescriptionViewControllerDelegate;

@interface AXSSImageDescriptionViewController : UIViewController <AXSSImagePreviewViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UINavigationBarDelegate, UITextViewDelegate>

@property (retain, nonatomic) AXSSScrollViewEnclosedTextView *textView;
@property (retain, nonatomic) AXSSImagePreviewViewController *imagePreviewController;
@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) UIScrollView *textScrollView;
@property (retain, nonatomic) UIView *contentBackgroundView;
@property (retain, nonatomic) UIView *textBackgroundView;
@property (retain, nonatomic) NSLayoutConstraint *textBackgroundViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBackgroundViewFixedTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewExpandingHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewFixedHeightConstraint;
@property BOOL isSavingOrCancelling;
@property BOOL isUIReady;
@property (copy, nonatomic) NSString *imageDescription;
@property (weak, nonatomic) id<AXSSImageDescriptionViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *contentSnapshot;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)_applicationWillResignActive:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_hideKeyboard;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)positionForBar:(id)a0;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void)updateViewConstraints;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)_hasChanges;
- (void)_adjustViewToKeyboardFrame:(id)a0;
- (BOOL)_hasFormView;
- (void)_imageDescriptionViewControllerSetupConstraints;
- (void)_imageDescriptionViewControllerSetupUI;
- (void)_layoutContentBackground;
- (void)_layoutImagePreview;
- (id)_modifiedImageDescription;
- (void)_scrollTextViewCaretToVisibleRegion;
- (double)_textViewMaxHeight;
- (void)_updateTextScrollViewConstraints;
- (void)cancelChanges:(id)a0;
- (void)imagePreviewShouldExpand:(id)a0;
- (id)initWithContentSnapshot:(id)a0;
- (void)saveChanges:(id)a0;

@end
