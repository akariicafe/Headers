@class NSLayoutConstraint, NSArray, NSSet, NSString, NCAppPickerContentProvider, NSMutableSet, UICollectionView;

@interface NCAppPickerViewController : NCOnboardingViewController <NCAppPickerViewFooterDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    NCAppPickerContentProvider *_contentProvider;
    BOOL _contentCollapsable;
    BOOL _contentCollapsed;
    unsigned long long _contentCollapsedCellCount;
    BOOL _viewHasAppeared;
    NSMutableSet *_mutableShownBundleIdentifiers;
    UICollectionView *_collectionView;
    double _collectionViewVisibleHeight;
    double _headerHeight;
    double _footerHeight;
    double _cellHeight;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_heightConstraint;
    BOOL _largerTextSize;
}

@property (readonly, copy, nonatomic) NSArray *selectedBundleIdentifiers;
@property (readonly, copy, nonatomic) NSSet *shownBundleIdentifiers;
@property (nonatomic) BOOL showMoreButtonWasPressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appPickerViewControllerWithContentProvider:(id)a0;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_shouldInlineButtontray;
- (void)_cancelButtonPressed:(id)a0;
- (void)_reloadFooter;
- (double)_availableContentWidth;
- (id)_initWithContentProvider:(id)a0;
- (void)_refreshNextButton;
- (void)_saveCellsSeen;
- (void)_updateHeightConstraintAndLayoutIfNeeded:(BOOL)a0;
- (void)appPickViewFooterShowMoreButtonPressed:(id)a0;

@end
