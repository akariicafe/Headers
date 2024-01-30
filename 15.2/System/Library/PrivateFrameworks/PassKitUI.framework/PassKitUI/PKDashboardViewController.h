@class NSString, PKUISpringAnimationFactory, NSSet, NSMutableDictionary, NSDictionary, PKDashboardTitleHeaderView, UICollectionViewLayout, PKDashboardFooterTextView;
@protocol PKDashboardDelegate, PKDashboardLayout, PKDashboardDataSource;

@interface PKDashboardViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PKDashboardDataSourceDelegate, PKDashboardViewControllerDelegateFlowLayout> {
    NSDictionary *_presentersPerIdentifier;
    struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; } *_presentersOptionalMethods;
    NSDictionary *_presenterMethodsIndexPerIdentifier;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    NSMutableDictionary *_titlesForSection;
    PKDashboardFooterTextView *_sampleFooterView;
    NSMutableDictionary *_footerTextItemsBySection;
    double _lastScrollOffset;
    BOOL _inScrollViewDidScroll;
    NSSet *_visibleCellsExcludingSafeArea;
    UICollectionViewLayout<PKDashboardLayout> *_customLayout;
    BOOL _contentIsLoaded;
    BOOL _shouldPresentAllContent;
    BOOL _presentationAnimated;
    BOOL _isHidingContent;
    PKUISpringAnimationFactory *_collectionViewFactory;
    NSMutableDictionary *_blocksOnVisibilityChange;
}

@property (readonly, nonatomic) id<PKDashboardDataSource> dataSource;
@property (weak, nonatomic) id<PKDashboardDelegate> delegate;
@property (readonly, nonatomic) BOOL isPresentingContent;
@property (nonatomic) BOOL shouldUseClearNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundColor;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)preferredStatusBarStyle;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)updateContent;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)reloadSections:(id)a0;
- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (void)shouldPresentAllContent:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithDataSource:(id)a0 presenters:(id)a1 layout:(id)a2;
- (void)contentIsLoaded;
- (void)setActionForVisibilityChange:(id /* block */)a0 indexPath:(id)a1;
- (void)_setupPresenters:(id)a0;
- (void)_updateNavigationBarAppearance;
- (void)_updateNavigationBarVisibility;
- (BOOL)_isCellVisibleAtIndexPath:(id)a0 withTopSafeArea:(double)a1 contentOffset:(double)a2;
- (id)_actualItemIndexPathForIndexPath:(id)a0;
- (void)_presentAllContent;
- (void)_hideAllContentAnimated:(BOOL)a0;
- (BOOL)_isIndexPathAHeader:(id)a0;
- (BOOL)_isIndexPathAFooter:(id)a0;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; })methodsForItemIdentifier:(id)a0;
- (id)_internalIndexPathForItemIndexPath:(id)a0;
- (void)itemChanged:(id)a0 atIndexPath:(id)a1;
- (BOOL)itemIsStackableInCollectionView:(id)a0 atIndexPath:(id)a1;
- (BOOL)itemIsIndependentInCollectionView:(id)a0 atIndexPath:(id)a1;

@end
