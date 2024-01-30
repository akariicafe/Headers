@class NSString, HUGridLayoutOptions;
@protocol HUServiceGridViewControllerDelegate;

@interface HUServiceGridViewController : HUControllableItemCollectionViewController <UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) unsigned long long contentMargins;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) BOOL shouldShowLoadingState;
@property (weak, nonatomic) id<HUServiceGridViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)_performTapActionForItem:(id)a0 tappedArea:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (double)headerViewHeightForSectionIndex:(unsigned long long)a0;
- (id)initWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (unsigned long long)itemTypeForItem:(id)a0;
- (void)layoutOptionsDidChange;
- (id)layoutOptionsForSection:(long long)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeForCollectionViewContentSize:(struct CGSize { double x0; double x1; })a0;

@end
