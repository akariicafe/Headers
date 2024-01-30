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

- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)_applicationWillResignActive:(id)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (long long)positionForBar:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_hideKeyboard;
- (BOOL)_hasChanges;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)textViewDidChange:(id)a0;
- (id)initWithContentSnapshot:(id)a0;
- (id)_modifiedImageDescription;
- (void)saveChanges:(id)a0;
- (void)_imageDescriptionViewControllerSetupUI;
- (void)_imageDescriptionViewControllerSetupConstraints;
- (void)_adjustViewToKeyboardFrame:(id)a0;
- (BOOL)_hasFormView;
- (double)_textViewMaxHeight;
- (void)_layoutImagePreview;
- (void)_layoutContentBackground;
- (void)cancelChanges:(id)a0;
- (void)_scrollTextViewCaretToVisibleRegion;
- (void)_updateTextScrollViewConstraints;
- (void)imagePreviewShouldExpand:(id)a0;

@end
