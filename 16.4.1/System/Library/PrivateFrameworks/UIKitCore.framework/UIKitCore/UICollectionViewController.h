@class UICollectionViewLayout, NSString, UICollectionView, UIScrollView, UIAutoRespondingScrollViewControllerKeyboardSupport, UILongPressGestureRecognizer;
@protocol _UIKeyboardAutoRespondingScrollView;

@interface UICollectionViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UIGestureRecognizerDelegate, UICollectionViewFocusDelegate_Legacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UICollectionViewDelegate, UICollectionViewDataSource> {
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

- (id)initWithCollectionViewLayout:(id)a0;
- (id)delegate;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setView:(id)a0;
- (id)dataSource;
- (void)willPresentPreviewViewController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;
- (void)dealloc;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)preferredFocusedView;
- (void)collectionView:(id)a0 didBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (void)__viewDidAppear:(BOOL)a0;
- (void)__viewWillAppear:(BOOL)a0;
- (id)_animatorForOperation:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2;
- (void)_clearSharedView;
- (void)_handleReorderingGesture:(id)a0;
- (void)_installReorderingGestureIfNecessary;
- (id)_newCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)_setSharedCollectionView:(id)a0;
- (void)_setUseLayoutToLayoutNavigationTransitions:(BOOL)a0 withCheck:(BOOL)a1;
- (id)_shim_contentScrollView;
- (BOOL)_shouldRespondToPreviewingMethods;
- (id)_uiCollectionView;
- (void)_updateCollectionViewLayoutAndDelegate:(id)a0;
- (id)_wrappingView;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (id)previewViewControllerForItemAtIndexPath:(id)a0;
- (id)previewViewControllerForLocation:(struct CGPoint { double x0; double x1; })a0 inSourceView:(id)a1;
- (BOOL)shouldCrossFadeBottomBars;
- (BOOL)shouldCrossFadeNavigationBar;
- (void)viewWillUnload;
- (void)willPresentPreviewViewController:(id)a0 forItemAtIndexPath:(id)a1;
- (void)willPresentPreviewViewController:(id)a0 forPosition:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;

@end
