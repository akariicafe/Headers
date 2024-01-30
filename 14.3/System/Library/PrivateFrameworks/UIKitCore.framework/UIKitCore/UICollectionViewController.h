@class UICollectionViewLayout, NSString, UICollectionView, UIScrollView, UIAutoRespondingScrollViewControllerKeyboardSupport, UILongPressGestureRecognizer;
@protocol _UIKeyboardAutoRespondingScrollView;

@interface UICollectionViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UICollectionViewFocusDelegate_Legacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionViewLayout *_layout;
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_reorderingGesture;
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;
    struct { unsigned char clearsSelectionOnViewWillAppear : 1; unsigned char useLayoutToLayoutNavigationTransitions : 1; unsigned char installsStandardReorderingGesture : 1; } _collectionViewControllerFlags;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (nonatomic) BOOL useLayoutToLayoutNavigationTransitions;
@property (readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (nonatomic) BOOL installsStandardGestureForInteractiveMovement;
@property (readonly, retain, nonatomic, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setView:(id)a0;
- (id)dataSource;
- (id)contentScrollView;
- (void)willPresentPreviewViewController:(id)a0 forPosition:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;
- (id)_animatorForOperation:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2;
- (void).cxx_destruct;
- (id)preferredFocusedView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)_newCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)_setUseLayoutToLayoutNavigationTransitions:(BOOL)a0 withCheck:(BOOL)a1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willPresentPreviewViewController:(id)a0 forItemAtIndexPath:(id)a1;
- (void)loadView;
- (void)_updateCollectionViewLayoutAndDelegate:(id)a0;
- (void)_installReorderingGestureIfNecessary;
- (BOOL)_shouldRespondToPreviewingMethods;
- (id)previewViewControllerForLocation:(struct CGPoint { double x0; double x1; })a0 inSourceView:(id)a1;
- (id)previewViewControllerForItemAtIndexPath:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_handleReorderingGesture:(id)a0;
- (void)_clearSharedView;
- (void)willPresentPreviewViewController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;
- (void)_setSharedCollectionView:(id)a0;
- (BOOL)shouldCrossFadeNavigationBar;
- (BOOL)shouldCrossFadeBottomBars;
- (void)viewWillAppear:(BOOL)a0;
- (id)_wrappingView;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)__viewDidAppear:(BOOL)a0;
- (void)__viewWillAppear:(BOOL)a0;
- (void)viewWillUnload;
- (id)_uiCollectionView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;

@end
