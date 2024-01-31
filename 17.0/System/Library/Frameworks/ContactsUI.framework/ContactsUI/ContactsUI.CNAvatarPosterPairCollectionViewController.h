@interface ContactsUI.CNAvatarPosterPairCollectionViewController : UICollectionViewController <CNPRUISPosterEditingViewControllerDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ contactForSharedProfile;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewModelSubscriber;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ pageControl;
    void /* unknown type, empty encoding */ centeredPosterButton;
    void /* unknown type, empty encoding */ addPosterButton;
    void /* unknown type, empty encoding */ lastPosterConfiguration;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ needsReload;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedbackGenerator;
    void /* unknown type, empty encoding */ pageControlPreferredNumberOfVisibleIndicators;
    void /* unknown type, empty encoding */ isScrollingOrSettling;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)viewIsAppearing:(BOOL)a0;
- (void)editingViewController:(id)a0 didFinishWithConfiguration:(id)a1;
- (id)initWithConfiguration:(id)a0 contact:(id)a1 contactForSharedProfile:(id)a2 mode:(long long)a3 delegate:(id)a4;
- (void)pageControlDidChangePage:(id)a0;

@end
