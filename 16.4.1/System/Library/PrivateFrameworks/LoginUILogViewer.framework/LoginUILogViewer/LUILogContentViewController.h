@class LUILogOptionsView, UIView, NSArray, NSString, UITextView, UIPanGestureRecognizer, LUILogLocatorView, UIActivityIndicatorView, UILabel;
@protocol LUILogContentViewControllerDelegate;

@interface LUILogContentViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) LUILogOptionsView *logOptionsView;
@property (retain, nonatomic) LUILogLocatorView *logLocatorView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSArray *screenshotItems;
@property (retain, nonatomic) UIView *textViewHolderView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UILabel *scrollIndicatorView;
@property (readonly, nonatomic) UITextView *textView;
@property (weak, nonatomic) id<LUILogContentViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePan:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)_canShowWhileLocked;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)showSpinner:(BOOL)a0;
- (void)showLogTextView;
- (void)_applyScreenShotAnimation;
- (id)_createLogLocatorView;
- (id)_createLogOptionsView;
- (id)_createLogTextView;
- (id)_dateWithPercentage:(double)a0;
- (id)_generateScreenshotItem;
- (void)_setupButtonActions;
- (void)_setupTextViewGesture;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_visibleRangeOfTextView:(id)a0;
- (void)clearScreenshots;
- (void)downArrowButtonTapped:(id)a0;
- (void)enableTimeConsumingOptions:(BOOL)a0;
- (void)logOptionButtonTapped:(id)a0;
- (void)screenshotButtonTapped:(id)a0;
- (void)showLogOptionsView;
- (void)upArrowButtonTapped:(id)a0;

@end
